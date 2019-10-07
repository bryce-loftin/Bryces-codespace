#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float C = get_float("C: ");
    printf("%f\n", (C*9)/5+32);
}
