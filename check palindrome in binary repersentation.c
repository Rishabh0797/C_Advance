#include<stdio.h>
int nth_bit(int,int);
int main()
{
    int num;
    scanf("%d",&num);
    int i=0,j=30;
    for(;j>=i;i++,j--)
    {
        int a=nth_bit(num,i);
        int b=nth_bit(num,j);
        if(a!=b)
        {
            printf("Not a palindrome");
            return 0;
        }
    }
    printf("It is a palindrome");
    return 0;
}
int nth_bit(int num,int n)
{
    int x;
    x=(num>>n)&1;
    return x;
}
