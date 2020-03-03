#include<stdio.h>
int main()
{
    char str[50],final_str[50];
    int i,j=0,n,flag=0;
    scanf("%[^\n]s",str);
    for(i=0;str[i]!='\0';i++);
    n=i;
    i--;
    for(;i>=0;i--)
    {
        while(str[i]!=' ' && i>-1)
        { 
            i--;
        }

        str[i]='\0';
        n=i+1;
        for(;str[n]!='\0';n++,j++)
        {
            final_str[j]=str[n];
        }
        final_str[j]=' ';
        j++;
     }
     printf("%s",final_str);
    return 0;
}
