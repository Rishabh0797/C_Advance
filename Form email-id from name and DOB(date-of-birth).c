#include<stdio.h>
#include<string.h>
int main()
{
    char name[5][20],dob[5][10],fresh[5][40],g[10]="@gmail.com";
    int i,a;
    printf("Enter names : \n");
    for(i=0;i<5;i++)
    {
        scanf(" %[^\n]s",name[i]);
    }
    printf("Enter their date-of-birth : \n");
    for(i=0;i<5;i++)
    {
        scanf(" %[^\n]s",dob[i]);
    }
    for(i=0;i<5;i++)
    {
        a=0;
        strcpy(fresh[i],name[i]);
        a=strlen(fresh[i]);
        fresh[i][a]='_';
        fresh[i][a+1]='\0';
        strcat(fresh[i],dob[i]);
        strcat(fresh[i],g);
    }
    printf("Final suggestion on email id : \n");
    for(i=0;i<5;i++)
    {
        printf("\t\t%s \n",fresh[i]);
    }
    return 0;
}
