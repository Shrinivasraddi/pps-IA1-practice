#include<stdio.h>
#include<math.h>
float input()
{
  float n;
  printf("enter a number\n");
  scanf("%f",&n);
  return n;
}
float my_sqrt(float n)
{
  float xn,xnext;
  xn=n/2;
  xnext=0.5*(xn+n/xn);
  while(fabs(xn-xnext)>0.000001)
  {
    xn=xnext;
    xnext=0.5*(xn+n/xn);
  }
  return xnext;
}
void output(float n,float sqrt_result)
{
  printf("the square root of %f is %f\n",n,sqrt_result);
}
int main()
{
  float n,result;
  n=input();
  result=my_sqrt(n);
  output(n,result);
  return 0;
}