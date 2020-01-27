#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

#define BLOCK_SIZE 512

int main(int argc, char *argv[])
{
    if (argc !=2)
    {
        fprintf(stderr, "Usage: recover infilie\n");
        return 3;
    }

    unsigned char pic[512];
    char file[8];
    FILE* picture = NULL;
    int picnumber = 0;
    char *com_mem = argv[1];
    int jpeg;
    FILE* memory = fopen("card.raw", "r");
    if(memory == NULL)
    {
        fprintf(stderr, "Could not open %s\n", com_mem);
        return 1;
    }

    while(fread(pic, 1, 512, memory) == 1)
    {
        if(pic[0] != 0xff || pic[1] != 0xd8 || pic[2] != 0xff || (pic[3] & 0xe0) !=0xe0)
        {
            return 2;
            break;
        }

        if (jpeg == 1)
        {
            fclose(picture);
        }
        else
        {
            jpeg = 1;
        }

        sprintf(file, "%03d.jpg", picnumber);
        picture = fopen(file, "a");
        picnumber ++;

        if (jpeg == 1)
        {
            fwrite(&pic, BLOCK_SIZE, 1, picture);
        }

    }



    fclose(memory);
    fclose(picture);
}
