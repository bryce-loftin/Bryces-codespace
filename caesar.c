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
       c[i] = (p[i] + k);
        if ((c[i] < 91 && c[i] > 64) || (c[i]> 96 && c[i]<123))
        {
            c[i] = c[i] ;
              printf("%c", c[i]);
        }
        }
    printf("\n");
}
