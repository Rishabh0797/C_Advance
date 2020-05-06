#include<stdio.h>
int main()
{
    char ch[20];
    int a=0,i,j,sum=0;
    scanf("%[^\n]s",ch);
    for(i=0;ch[i]!='\0';i++)
    {
        a=ch[i]-48;
        sum=sum*10+a;
    }
    for(i=0;ch[i]!='\0';i++)
    {
        printf("treated as a character with ascii vlaue %d\n",ch[i]);
    }
    printf("atoi ie :%d",sum);
    return 0;
}
