// 4.Rishi wants you juniors to find Fibonacci Series of N-number using loop
#include<stdio.h>


int main(){
    int num,f=0,s=1,t=0;
    printf("Enter any number : ");
    scanf("%d",&num);
    printf("%d,%d",f,s);
    for (int i = 1; i<=num; i++)
    {
        t=f+s;
        f=s;
        s=t;
        printf(",%d",t);
    }
    
    return 0;
   
}