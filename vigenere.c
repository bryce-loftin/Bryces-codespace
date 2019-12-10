#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    int h = 0;
    string code = argv[1];
    for (h = 0; h < strlen(code); h++)
    {
        if((code[h] > 90 && code[h] < 97) || (code[h] > 122 || code[h] < 65))
        {
            printf("Usage: ./vigenere k\n");
            return 1;
        }
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
            if (p[i] < 91)
            {
                code[i] = code[i] - 65;
            }
            else
            {
                code[i] = code[i] - 97;
            }
            for(j = 0; j < strlen(code); j++)
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