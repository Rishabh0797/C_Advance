#include<stdio.h>
int main()
{
FILE *fp;
fp=fopen("demo.txt","r");
if(fp==NULL)
{
    printf("file does not exist");
}
else
{
    printf("file exist");
}
fclose(fp);
return 0;
}
