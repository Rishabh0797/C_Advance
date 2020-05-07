#include<stdio.h>
struct dob
{
    int dd;
    int mm;
    int yy;
};

struct student
{
    struct dob a;
    char name[20];
    int rollno;
};

int main()
{
    struct student s;
    printf("Enter name of student :");
    scanf("%[^\n]s",s.name);
    printf("Enter rollno :");
    scanf(" %d",&s.rollno);
    printf("Enter Date_of_Birth :");
    scanf(" %d %d %d",&s.a.dd,&s.a.mm,&s.a.yy);
    printf("name :%s\n",s.name);
    printf("rollno. :%d\n",s.rollno);
    printf("DOB %d-%d-%d\n",s.a.dd,s.a.mm,s.a.yy);
    return 0;
}
