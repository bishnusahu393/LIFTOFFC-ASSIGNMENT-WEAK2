// 6.Take input N and print a square pattern like below with N *s per side.
// If N=5, then the pattern should look this
                // * * * * *
                // *       *
                // *       *
                // *       *
                // * * * * *

#include <stdio.h>

int main()
{
    int i, j, N=5;
  

    for(i=1; i<=N; i++)
    {
        for(j=1; j<=N; j++)
        {
            if(i==1 || i==N || j==1 || j==N)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}