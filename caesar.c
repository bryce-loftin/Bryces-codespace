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
    int k = atoi(argv[1]) % 26;
    int c[strlen(p)];
    int i = 0;
    printf("ciphertext: ");
    for (i = 0; i < strlen(p); i++)
    {
        if((p[i] < 91 && p[i] > 64) || (p[i] < 123 && p[i] > 96))
        {
       c[i] = (p[i] + k);
        }
             if ((c[i] > 90 && c[i] < 97) || (c[i] > 122))
             {
                 c[i] = c[i] - 26;
              printf("%c", c[i]);
             }
        }
    printf("\n");
}
