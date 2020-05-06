#include<stdio.h>
int main()
{
    int num,bit;
    printf("Enter your number :");
    scanf("%d",&num);
    bit = ~num;
    printf("1's complemant of %d is %d",num,bit);
    bit+=1;
    printf("\n2's comlement of %d is %d",num,bit);
    return 0;
}
