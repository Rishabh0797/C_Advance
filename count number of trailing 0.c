#include<stdio.h>
int main()
{
    int num,int_size,count=0;
    int_size=sizeof(int)*8;
    printf("Enter your number :");
    scanf("%d",&num);
    while(num!=0)
    {
        if(num&1)
        break;
        count++;
        num=num>>1;
    }
    printf("number of trailing (0) are :%d",count);
    return 0;
}
