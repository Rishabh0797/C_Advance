#include <stdio.h>

int main()
{
    int n;
    printf("Enter your number :");
    scanf("%d",&n);
     if(n&1==1)
     printf("The least significant bit is set");
     else
      printf("The least significant bit is not set");
    return 0;
}
