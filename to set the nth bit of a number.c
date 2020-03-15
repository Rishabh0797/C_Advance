#include <stdio.h>

int main()
{
    int num,bit,n,new_number;
    printf("Enter your number :");
    scanf("%d",&num);
    printf("Enter bit :");
    scanf("%d",&n);
    bit=1<<n;
    new_number=num|bit;
    printf("%d is a new number",new_number);;
    return 0;
}
