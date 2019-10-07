#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int C = get_int("C: ");
    printf("F:%i\n", (C*9)/5+32);
}
