// Copies a BMP file

#include <stdio.h>
#include <stdlib.h>

#include "bmp.h"

int main(int argc, char *argv[])
{
    // ensure proper usage
    if (argc != 4)
    {
        fprintf(stderr, "Usage: resize n infile outfile\n");
        return 1;
    }

    int x = atoi(argv[1]);
    char *infile = argv[2];
    char *outfile = argv[3];

    // open input file
    FILE *inptr = fopen(infile, "r");
    if (inptr == NULL)
    {
        fprintf(stderr, "Could not open %s.\n", infile);
        return 2;
    }

    // open output file
    FILE *outptr = fopen(outfile, "w");
    if (outptr == NULL)
    {
        fclose(inptr);
        fprintf(stderr, "Could not create %s.\n", outfile);
        return 3;
    }

    // read infile's BITMAPFILEHEADER
    BITMAPFILEHEADER bf;
    fread(&bf, sizeof(BITMAPFILEHEADER), 1, inptr);

    // read infile's BITMAPINFOHEADER
    BITMAPINFOHEADER bi;
    fread(&bi, sizeof(BITMAPINFOHEADER), 1, inptr);

    // ensure infile is (likely) a 24-bit uncompressed BMP 4.0
if (bf.bfType != 0x4d42 || bf.bfOffBits != 54 || bi.biSize != 40 ||
    bi.biBitCount != 24 || bi.biCompression != 0)
{
    fclose(outptr);
    fclose(inptr);
    fprintf(stderr, "Unsupported file format.\n");
    return 4;
}

    int oldW = bi.biWidth;
    int oldH = bi.biHeight;
    int newW = oldW * x;
    int newH = oldH * x;
    int inPad = (4 - (oldW * sizeof(RGBTRIPLE)) % 4) % 4;
    int outPad = (4 - (newW * sizeof(RGBTRIPLE)) % 4) % 4;





    bi.biHeight = newH;
    bi.biWidth = newW;
    bi.biSizeImage = ((sizeof(RGBTRIPLE) * newW) + outPad) * abs(newH);
    bf.bfSize = bi.biSizeImage + sizeof(BITMAPFILEHEADER) + sizeof(BITMAPINFOHEADER);

    fwrite(&bf, sizeof(BITMAPFILEHEADER), 1, outptr);

    fwrite(&bi, sizeof(BITMAPINFOHEADER), 1, outptr);

    // allocate a memory to store one scanline
    RGBTRIPLE scanline[newW * sizeof(RGBTRIPLE)];

    // iterate over infile's scanlines
    for (int y = 0, biHeight = abs(oldH); y < biHeight; y++)
    {
        // iterate over pixels in a scanline
        for (int z = 0; z < oldW; z++)
        {
            // temporary storage
            RGBTRIPLE triple;

            // read RGB triple from infile
            fread(&triple, sizeof(RGBTRIPLE), 1, inptr);

            // create a new scanline in a temporary array
            for (int k = 0; k < x; k++)
            {
                scanline[(z * x) + k] = triple;
            }
        }

        // skip over padding, if any
        fseek(inptr, inPad, SEEK_CUR);

        // write the current scanline n times
        for (int j = 0; j < x; j++)
        {
            // write a new scanline once
            fwrite(scanline, sizeof(RGBTRIPLE), newW, outptr);

            // write new padding
            for (int k = 0; k < outPad; k++)
            {
                fputc(0x00, outptr);
            }
        }
    }

    // close infile
    fclose(inptr);

    // close outfile
    fclose(outptr);

    // success
    return 0;
}