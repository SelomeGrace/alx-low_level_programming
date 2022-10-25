#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    int i, j, k;

    k=0;

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j <= 5; j++)
        {
            if (i == 0 && j == 0)
            {
                printf("\"");
            }
            else if (i == 2 && j == 5)
             {
                printf("\"");
             }
             else if (k <5)
             {
               printf("@");
               k++;
             }
             else{
               printf(" ");
             }
        }
        k=0;
        printf("\n");
    }


    return 0;
}
