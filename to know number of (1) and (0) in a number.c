#include<stdio.h>
int main()
{
    int num,int_size,ones=0,zeros=0;
    int_size=sizeof(int)*8;
    printf("Enter your number :");
    scanf("%d",&num);
    while(num!=0)
    {
        if(num&1)
        ones++;
        else
        zeros++;
        num=num>>1;
    }
    printf("number of (1) are :%d\nnumber of (0) are :%d",ones,zeros);
    return 0;
}
