#include<stdio.h>
struct comp
{
    int real;
    int imag;
};

int main()
{
    struct comp c1,c2,c3;
    printf("Enter real and imaginary part of first complex number :");
    scanf("%d %d",&c1.real,&c1.imag);
     printf("Enter real and imaginary part of second complex number :");
    scanf("%d %d",&c2.real,&c2.imag);
    c3.real=c1.real+c2.real;
    c3.imag=c1.imag+c2.imag;
    printf("New complex number %d+%di",c3.real,c3.imag);
    printf(" or %d-%di",c3.real,c3.imag);
    return 0;

}
