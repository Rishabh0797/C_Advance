#include<stdio.h>
int main()
{
    int num1,num2,bit1,bit2,x=0,y=0,i=0;
    printf("Enter first number :");
    scanf("%d",&num1);
     printf("Enter second number :");
    scanf("%d",&num2);
    printf("Enter a first bit :");
    scanf("%d",&bit1);
    printf("Enter a second bit :");
    scanf("%d",&bit2);

    for(i=0;i<(bit2-bit1)+1;i++)
    {
        x=(num1>>(bit1+i))&1;
        y=(num2>>(bit1+i))&1;
        if(x!=y)
        {
            num1=num1^(1<<(bit1+i));
            num2=num2^(1<<(bit1+i));
        }
    }
    printf("New number is %d and %d",num1,num2);
    return 0;
}
