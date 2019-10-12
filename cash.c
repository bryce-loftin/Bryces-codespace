#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float change = get_float("Change: ");
        int i = 0;
            int x = 0;
    while (change < 0)
    {
    change = get_float("Change: ");
    }
    change = round(change * 100);
    for(i = 25; change >= i;)
    {
        change = change - 25;
        x = x + 1;
    }
    for(i = 10; change >= i;)
    {
        change = change - 10;
            x = x + 1;
    }
    for(i = 5; change >= i;)
    {
        change = change - 5;
        x = x + 1;
    }
    for(i = 1; change >= i;)
    {
        change = change - 1;
        x = x + 1;
    }
    printf("%i\n", x);
}
