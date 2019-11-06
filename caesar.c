#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 2 || argv[1] < 0)
    {
        printf("GO AWAY.\n");
        return 1;
    }
    string p = get_string("plaintext: ");
    int k = atoi(argv[1]);
    int c[strlen(p)];
    int i = 0;
    printf("cyphertext: ");
    for (i = 0; i < strlen(p); i++)
    {
       c[i] = (p[i] + k) % 26;
       printf("%c", c[i]);
    }
}
