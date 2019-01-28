#include<stdio.h>
add(int a,int b)
{
   int c;
   c=a+b;
   return c;
}
int main()
{
  int a=10,b=20,c;
  c=add(a,b);
  printf("%d",c)
}
