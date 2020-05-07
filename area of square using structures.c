#include<stdio.h>
struct rectangle
{
    int l,area;
    int b;
};
typedef struct rectangle rect;
rect getdata();
void putdata(rect);
rect increment(rect);

int main()
{
     rect a;
    a=getdata();
    putdata(a);
    a=increment(a);
    putdata(a);
   return 0;
}
rect getdata()
{
     rect x;
   scanf("%d %d",&x.l,&x.b);
   x.area=x.l*x.b;
    return x;
}
void putdata(rect y)
{
    printf("length :%d",y.l);
     printf("\nbreadth :%d",y.b);
      printf("\nArea :%d\n",y.area);
}
rect increment(rect z)
{
    z.l+=2;
    z.b+=3;
    return(z);

}
