#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 4)
    {
        printf("sorry bud try again\n");
        return 1;
    }
    int i = 0;
    float x = atof(argv[1]);
    char y = argv[2][0];
    float z = atof(argv[3]);
    float answer = 0;
    switch (y)
    {
        case 45:
            answer = x - z;
            break;
        case 43: 
            answer = x + z;
            break;
        case 120: 
            answer = x * z;
            break;
        case 47: 
            answer = x / z;
            break;
        case 37: 
            i = x / z; 
            answer = x - (i * z);
            break;
        default: 
            printf("that dont look right\n"); 
            return 1;
    }
    printf("%f\n", answer);
}
