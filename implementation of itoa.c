#include<stdio.h>
int main()
{
    char ch[20],temp;
    int a=0,i=0,j,rem,num=0;
    scanf("%d",&num);
   while(num!=0)
   {
       rem=num%10;
       ch[i]=rem+48;
       i++;
       num/=10;
   }
   for(i=0;ch[i]!='\0';i++);
   j=i-1;
   for(a=0;a<=(i/2);a++,j--)
   {
      temp=ch[a];
      ch[a]=ch[j];
      ch[j]=temp;
   }
   for(i=0;ch[i]!='\0';i++)
   {
       printf("itoa ie %c\n",ch[i]);
   }
    return 0;
}
