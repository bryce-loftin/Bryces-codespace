#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    int h = 0;
    int code[strlen(argv[1])];
    for (h = 0; h < strlen(argv[1]); h++)
    {
        code[h] = (int)argv[1][h];
    }
    if (argc != 2)
    {
        printf("Usage: ./vigenere k\n");
        return 1;
    }
    string p = get_string("plaintext: ");
    int c[strlen(p)];
    int i = 0;
    int j = 0;
    printf("ciphertext: ");
    for (i = 0; i < strlen(p); i++)
    {
        if ((p[i] < 91 && p[i] > 64) || (p[i] < 123 && p[i] > 96))
        {
            for(j = 0; j < strlen(argv[1]); j++)
            {
            c[i] = (p[i] + code[j]);
            }
        }
        else
        {
            c[i] = p[i];
        }
        if ((c[i] > 90 && c[i] < 97) || (c[i] > 122))
        {
            c[i] = c[i] - 26;
            printf("%c", c[i]);
        }
        else
        {
            printf("%c", c[i]);
        }
    }
    printf("\n");
}