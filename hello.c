#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./Hello, <name>\n");
        return 1;
    }
    else 
    {
        printf("Hello, %s!\n", argv[1]);
    }
}
