#include<stdio.h>
int main()
{
    int num,int_size,count=0;
    int_size=sizeof(int)*8;
    printf("Enter your number :");
    scanf("%d",&num);
    while(num!=0)
    {
        count++;
        num=num>>1;
    }
    printf("%d leading zeroes are present",int_size-count);
    return 0;
}
