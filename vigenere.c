#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    int h = 0;
    string code = argv[1];
    int z = strlen(code);
    for (h = 0; h < z; h++)
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
    int key[z];
    printf("ciphertext: ");
    for (i = 0; i < strlen(p); i++)
    {
        int j = i % z;
        if(((int)code[j] > 90 && (int)code[j] < 97) || ((int)code[j] > 122 || (int)code[j] < 65))
        {
            if (p[i] < 91)
            {
                key[j] = (int)code[j] - 65;
            }
            else
            {
                key[j] = (int)code[j] - 97;
            }
        }
        if ((p[i] < 91 && p[i] > 64) || (p[i] < 123 && p[i] > 96))
        {


        c[i] = (p[i] + key[j]);

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