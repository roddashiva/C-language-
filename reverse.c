#include <stdio.h>

int main()
{
   int a,r,n=0;
   //a is num,r is remainder,n is reverse of num
   printf("enter a:");
   scanf("%d",&a);
   while(a>0)
   {
       r=a%10;
       n=n*10+r;
       a=a/10;
   }
printf("reverse of num: = %d",n);
    return 0;
}
