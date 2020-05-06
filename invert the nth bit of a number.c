#include<stdio.h>
int main()
{
   int num,n,bit;
   printf("Enter number :");
   scanf("%d",&num);
   printf("Enter bit :");
   scanf("%d",&n);
   bit=num^(1<<n);
   printf("new number is :%d",bit);
   return 0;
}
