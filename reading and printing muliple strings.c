#include<stdio.h>
int main()
{
    char name[10][20];
    int i,n;
    printf("Enter your queries :");
    scanf("%d \n",&n);
    
    for(i=0;i<n;i++)
    {
        scanf(" %[^\n]s ",name[i]);
    }
    printf("Your output :\n");
    for(i=0;i<n;i++)
    {
         printf("      %s \n",name[i]);
    }
}
