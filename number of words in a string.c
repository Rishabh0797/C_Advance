#include<stdio.h>
int main()
{
    char str[40];
    int i,count=0,word=0;
    scanf("%[^\n]s",str);
    for(i=0;str[i]!='\0';i++);
    str[i]=' ';
    str[i+1]='\0';
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>32 && str[i]<127)
        {
            count++;
        }
        else if(str[i]==32 && count!=0)
        {
            word++;
            count=0;
        }
      
    }
    printf("number of words in a string :%d",word);
    return 0;
}
