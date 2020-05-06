#include <stdio.h>

int main()
{
    int num,bit,n;
    printf("Enter your number :");
    scanf("%d",&num);
    printf("Enter bit :");
    scanf("%d",&n);
    bit=num>>n;
    if(bit&1)
    printf("%d bit is (1)",n);
    else
     printf("%d bit is (0)",n);
    return 0;
}
