#include<stdio.h>
struct student
{
    int roll_no;
    char name[20];
    float fee;
};

int main()
{
    struct student s;
    printf("Enter roll number :");
    scanf("%d",&s.roll_no);
    printf("Enter name :");
       scanf(" %[^\n]s",s.name);
       printf("Enter fee :");
          scanf("%f",&s.fee);
   printf("\n%d %s %f",s.roll_no,s.name,s.fee);
   return 0;
}
