// 3.Take an integer input. Swap First and last digit of integer.

#include<stdio.h>
#include<math.h>
int main()
{
 int n,s,f,l,d;
 printf("enter a number ");
 scanf("%d", &n);
 l=n%10;
 d=(int)log10(n);
 f=(int)(n/pow(10,d));
 s=l;
 s*=(int)pow(10,d);
 s+=n%((int)pow(10,d));
 s-=l;
 s+=f;
  printf("swapped number is %d",s);
  return 0;
}