#include<stdio.h>
void vowel_check(char *);
int main()
{
    char name[5][20];
    int i;
    for(i=0;i<5;i++)
    {
        scanf(" %[^\n]s",name[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("vowels in %d row : ",i);
        vowel_check(name[i]);
    }
    return 0;
}
void vowel_check(char *s1)
{
    int i,track[58]={0};
    for(i=0;s1[i]!='\0';i++)
    {
        if(s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u'||
           s1[i]=='A'||s1[i]=='E'||s1[i]=='I'||s1[i]=='O'||s1[i]=='U')
           {
               if(track[s1[i]-65]==0)
               {
                   printf("'%c' ",s1[i]);
                   track[s1[i]-65]=1;
               }
            }

    }
    printf("\n");
}
