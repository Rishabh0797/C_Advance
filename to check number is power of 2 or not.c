#include <stdio.h>

int main()
{
    int n;
    printf("Enter your number :");
    scanf("%d",&n);
    if(n&(n-1)==0)
     printf("Yes,%d number is a power of 2",n);
     else
     printf("No,%d number is not a power of 2",n);
    return 0;
}
