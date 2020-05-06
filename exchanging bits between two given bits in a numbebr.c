#include<stdio.h>
int main()
{
    int num,bit1,bit2,x=0,y=0,i=0;
    printf("Enter a number :");
    scanf("%d",&num);
    printf("Enter a first bit :");
    scanf("%d",&bit1);
    printf("Enter a second bit :");
    scanf("%d",&bit2);
    for(i=1;i<=((bit2-1)-bit1);i++)
    {
        x=(num>>(bit1+i))&1;
        y=(num>>(bit2+i))&1;
        if(x!=y)
        {
            num=num^(1<<(bit1+i));
             num=num^(1<<(bit2+i));
        }
    }
    printf("New number is %d",num);
    return 0;
}
