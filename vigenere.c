#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int compare = atoi(argv[1]);
    if (argc != 1 || compare < 65)
    {
        printf("Usage: ./vigenere k\n");
        return 1;
    }
    string p = get_string("plaintext: ");
    char* code = argv[1];
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