#include<stdio.h>
#include<string.h>
int main()
{
    char name[10][20],temp[20];
    int i,n,j,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf(" %[^\n]s ",name[i]);
    }
    for(i=0;i<n-1;i++)
    {
        flag=0;
        for(j=0;j<(n-i-1);j++)
        {
             if(strcmp(name[j],name[j+1])>0)
         {
            strcpy(temp,name[j]);
            strcpy(name[j],name[j+1]);
            strcpy(name[j+1],temp);
            flag=1;
          }
        }
        if(flag==0)
        break;

    }
    printf("sorted 2-d string :\n");
    for(i=0;i<n;i++)
    {
        printf("%s \n",name[i]);
    }
    return 0;
}
