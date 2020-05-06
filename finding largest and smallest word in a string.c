#include<stdio.h>
#include<string.h>
int main()
{
    char str[40],check[30],large[20],small[20];
    int i,count=0,max=0,min=0,j=0;
    scanf("%[^\n]s",str);
    for(i=0;str[i]!='\0';i++);
    min=i;
    str[i]=' ';
    str[i+1]='\0';
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>32 && str[i]<127)
        {
            check[j]=str[i];
            count++;
            j++;
            check[j]='\0';
        }
       else if(str[i]==' ' && count!=0)
        {
            if(max<count)
            {
                max=count;
                strncpy(large,check,count);
                large[max]='\0';
            }
            if(min>count)
            {
                min=count;
                strncpy(small,check,count);
                small[min]='\0';
            }
            j=0;
            count=0;
        }
    }
    printf("Largest word is :'%s'  having %d charcters\n",large,max);
    printf("Smallest word is :'%s'   having %d charcters",small,min);
    return 0;
}
