#include <stdio.h>

int main()
{
    int n,int_size;
    printf("Enter your number :");
    scanf("%d",&n);
    if(n&(1<<int_size))
    {
        printf("Set");
    }
    else
    printf("Not Set");
    return 0;
}
