#include <stdio.h>
int table(int,int,int);

int main()
{
    printf("Enter your number : ");
    int num,u,l;
    scanf("%d",&num);
    printf("Enter till which digit to which digit you want to print table\nEnter upper digit : ");
    scanf("%d",&u);
    printf("Enter lower digit : ");
    scanf("%d",&l);
    table(num,u,l);

    return 0;
}

int table(int num,int u,int l)
{
    if(l<=u)
    {
       printf("%d * %d = %d\n",num,l,num*l);
       return table(num,u,l=l+1);
    }
    else
    return 0;
}
