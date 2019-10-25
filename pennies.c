#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
    
{
    double total = 0;
    int day = atoi(argv[1]);
    int penny = atoi(argv[2]);
    int i = 0;
    total = penny;
    for (i = 0; i < day; i++)
    {
        total = total * 2;
    }
    printf("$%.2f\n", (total - penny) / 100);
}
    
