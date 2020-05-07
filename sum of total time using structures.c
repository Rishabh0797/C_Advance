#include<stdio.h>
struct times
{
    int hrs;
    int mins;
};
typedef struct times tm;
tm getdata();
void putdata(tm);
tm increment(tm);
void sum(tm,tm);
int main()
{
     tm a,b;
    a=getdata();
    b=getdata();
    putdata(a);
     putdata(b);
    sum(a,b);
   return 0;
}
tm getdata()
{
     tm x;
   scanf("%d %d",&x.hrs,&x.mins);
    return x;
}
void putdata(tm y)
{
      if(y.mins>60)
      {
         y=increment(y);
      }
      printf("Time is = %d:%d\n",y.hrs,y.mins);

}
tm increment(tm z)
{
    z.hrs+=1;
    z.mins-=60;
    return(z);

}
void sum(tm a,tm b)
{
    int x,y;
    x=a.hrs+b.hrs;
    y=a.mins+b.mins;
    while(y>60)
    {
        y-=60;
        x+=1;
    }
    printf("Time is = %d:%d",x,y);

}
