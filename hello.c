#include<stdio.h>
add(int a,int b)
{
   int c;
   c=a+b;
   return c;
}
int main()
{
  int a=50,b=100,c;
  c=add(a,b);
  printf("%d",c)
}
