#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    if(argc != 2)
    {
        return 1;
    }
    float C = atof(argv[1]);
    printf("%.1f\n", (C * 9) / 5 + 32);
}
