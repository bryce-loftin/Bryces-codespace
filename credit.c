#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    int i = -1;
    int total1 = 0;
    int total2 = 0;
    int total = 0;
    int n = 0;
    long credit = get_long("Number: ");
    while (credit < 0)
    {
        credit = get_long("Number: ");
    }
    for (i = -1; n > 0;)
    {
        n = credit % 10;
        i = i * -1;
        if (i < 0)
        {
            n = n * 2;
            if (n > 9)
            {
            n = (n % 10) + (n/10);    
            }
        total1 = total1 + n;
        }
        else
        {
            total2 = total2 + n;
        }
    }
    total = total1 + total2;
    if (total % 10 == 0 && credit/10000000000000 < 40 && credit/10000000000000 > 4)
    {
        printf("AMEX\n");
    }
    else if (total % 10 == 0 && credit/1000000000000000 == 4)
    {
        printf("Visa\n");
    }
    else if (total % 10 == 0 && credit/100000000000000 > 40)
    {
        printf("MasterCard\n");
    }
    else
    {
        printf("Invalid\n");
    }
}
