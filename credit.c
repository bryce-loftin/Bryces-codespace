#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    int i = 1;
    int total = 0;
    int n = 0;
    long credit = get_long("Number: ");
    while (credit < 0)
    {
        credit = get_long("Number: ");
    }
    for (i = 1; n > 0;)
    {
        n = credit % 10;
        i = i * -1;
        if (i < 0)
        {
            n = n * 2;
        }
        total = total + n;
    }
    if (total % 10 == 0 && credit % 10000000000000 < 40 && credit % 10000000000000 > 1)
    {
        printf("American Express\n");
    }
    if (total % 10 == 0 && credit % 10000000000000 < 1)
    {
        printf("Visa\n");
    }
    if (total % 10 == 0 && credit % 10000000000000 > 40)
    {
        printf("MasterCard\n");
    }
    else
    {
        printf("Invalid\n");
    }
}
