#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

#define BLOCK_SIZE 512

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        fprintf(stderr, "Usage: recover image\n");
        return 1;
    }

    unsigned char pic[512];
    FILE* picture = NULL;
    FILE* memory = NULL;
    int picnumber = 0;
    char *com_mem = argv[1];
    int jpeg;
    memory = fopen(com_mem, "r");
    if(memory == NULL)
    {
        fprintf(stderr, "Could not open %s\n", com_mem);
        return 2;
    }

    while(fread(pic, 1, 512, memory) == 1)
    {
        if(pic[0] == 0xff || pic[1] == 0xd8 || pic[2] == 0xff || (pic[3] & 0xf0) == 0xe0)
        {
            if (jpeg == 1)
            {
                fclose(picture);
            }
            else
            {
                jpeg = 1;
            }
            char file[8];
            sprintf(file, "%03i.jpg", picnumber);
            picture = fopen(file, "a");
            picnumber ++;

            if (jpeg == 1 && picture != NULL)
            {
                fwrite(&pic, BLOCK_SIZE, 1, picture);
            }
        }

    }



    fclose(memory);
    if(picture != NULL)
    {
    fclose(picture);
    }
    return 0;
}
