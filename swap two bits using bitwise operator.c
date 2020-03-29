#include<stdio.h>
int main()
{
    int num,bit1,bit2,x,y;
    printf("Enter number :");
    scanf("%d",&num);
    printf("Enter first bit :");
    scanf("%d",&bit1);
    printf("Enter second bit :");
    scanf("%d",&bit2);
    x=(num>>bit1)&1;
    y=(num>>bit2)&1;
    if(x==y)
    {
        printf("Both bits are identical");
        return 0;
    }
    else
    {
        num=num^(1<<bit1);
        num=num^(1<<bit2);
    }
    printf("new number %d",num);
    return 0;
}
