#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    int x = 0;
    int n = 1;
    int height = 0;
    int i = 1;
    do
    {
        height = get_int("Height: ");
    }
    while (height > 8 || height < 1);
    for (i = 1; i <= height; i++)
    {
        for (x = 0; x < height - i; x++)
        {
            printf(" ");
        }
        for (n = height; n > height - i; n--)
        {
            printf("#");
        }
        printf("\n");
    }
}
