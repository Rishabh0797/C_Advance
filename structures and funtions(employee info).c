#include<stdio.h>
struct employee
{
    int ecode;
    char ename[20];
    int salary;
};
typedef struct employee emp;
emp getdata();
void putdata(emp);
emp increment(emp);

int main()
{
     emp a;
    a=getdata();
    putdata(a);
    a=increment(a);
    putdata(a);
   return 0;
}
emp getdata()
{
     emp x;
     printf("Enter ecode :");
     scanf("%d",&x.ecode);
     printf("enter ename :");
    scanf(" %[^\n]s",x.ename);
     printf("Enter salary:");
    scanf("%d",&x.salary);
    return x;
}
void putdata(emp y)
{
    printf("Ecode :%d",y.ecode);
     printf("\nEname :%s",y.ename);
      printf("\nsalary :%d\n",y.salary);
}
emp increment(emp z)
{
    z.salary+=1000;
    return(z);

}
