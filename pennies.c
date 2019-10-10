#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (void)
    
{
    int i = 0;
    int day = get_int("Days in month: ");
    int penny = get_int("Pennies on first day: ");
    double total = penny;
    if (28 < day && day < 31 && penny > 1)
    {
    for (i = 0; i < day; i++)
    {
        total = total * 2;
    }
    printf("$%.1f\n", total/100);
    }
    else
    {
        printf("Retry\n");
    }
    }
    
