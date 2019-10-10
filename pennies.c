#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
    
{
    double total = 0;
    int day = 0;
    int penny = 0;
    do
    {
        int i = 0;
        day = get_int("Days in month: ");
        penny = get_int("Pennies on first day: ");
        total = penny;
        for (i = 0; i < day; i++)
        {
            total = total * 2;
        }
    }
    while (day > 31 || day < 28 || penny < 1);
    printf("$%.2f\n", (total - penny) / 100);
}
    
