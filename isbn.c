#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int i = 10;
    int nthdigit = 0;
    int total = 0;
    long x = get_long("ISBN:");
    for (i = 10; i > = 0; i--)
    {
        nthdigit = x % 10;
        total += nthdigit * i;
        x = x / 10;
       
    }
    
    if (total % 11 == 0) 
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

}
