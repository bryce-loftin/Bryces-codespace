#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc == 3)
    {
    double total = 0;
    int day = atoi(argv[1]);
    int penny = atoi(argv[2]);
    int i = 0;
    total = penny;
        if (day > 27 && day < 32 && penny > 0)
        {
            for (i = 0; i < day; i++)
            {
                total = total * 2;
            }
        printf("$%.2f\n", (total - penny) / 100);
        }
        else
        {
            return 1;
        }
    }
}
