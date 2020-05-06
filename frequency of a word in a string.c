#include<stdio.h>
int str_check(char *,char *);
int main()
{
    char str[50],sub[20];
    int count=0;
    scanf("%[^\n]s",str);
     scanf(" %[^\n]s",sub);
    count=str_check(str,sub);
     printf("%d",count);
   return 0;
}
int str_check(char *s1,char *s2)
{
    int s1_len,s2_len,i=0,j=0,flag=0,count=0,n;
    for(s1_len=0;s1[s1_len]!='\0';s1_len++);
    for(s2_len=0;s2[s2_len]!='\0';s2_len++);
    s1[s1_len]=' ';
    s1[++s1_len]='\0';
    for(i=0;i<s1_len-s2_len;i++)
    {
        flag=0;
       int n=0;  
	   if(s1[i-1]!=' ')
        {
           flag=1;             
           n=1;
		}
		if(n==1 && i==0)
		flag=0;
        for(j=0;j<s2_len;j++)
        {
            if(s1[j+i]!=s2[j])
            {
                flag=1;
                break;
            }
            if(s1[i+s2_len]!=' ')
            {
                flag=1;
                break;
            }
        }
      
       
        if(flag==0)
        count++;
    }
    return(count);
}
