// 5.initialise two 2*2 matrices and print their sum and product
#include<stdio.h>
int main()
{  
int a1[2][2],sum=0,a2[2][2],p=1;
    
    printf("Enter the elements of first matrix:\n");
    
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%d",&a1[i][j]);
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d ",a1[i][j]);
        }
        printf("\n");
    }
    printf("Enter the elements of second matrix:\n");
     for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%d",&a2[i][j]);
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d ",a2[i][j]);
        }
        printf("\n");
    }
    printf("Sum :\n");
    for(int i =0;i<2;i++)
    {
        for (int j=0;j<2;j++)
        {
            sum=a1[i][j]+a2[i][j];
            printf("%d ",sum);
                       
        }
        printf("\n");
    }
    printf("Product:\n");
    for(int i =0;i<2;i++)
    {
        for (int j=0;j<2;j++)
        {
            p=a1[i][j]*a2[i][j];
            printf("%d ",p);
                       
        }
        printf("\n");
    }
    return 0;
}