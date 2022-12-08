#include<stdio.h>
#include<math.h>
int main()
{
  long long snt;
  long double r;
  scanf("%lld %Lf",&snt,&r);


//   long double c1=(r/sin(pi-(2*pi/snt)/2-(2*pi/snt)/4)*sin((2*pi/snt)/4));
//   long double Sdu=(((pi*r*r)/(snt*2))-(r/sin(pi-(2*pi/snt)/2-(2*pi/snt)/4)*sin((2*pi/snt)/4))*r*sin((2*pi/snt)/2)/2);
  printf("%.12Lf",(long double)3.14*r*r-(((3.14*r*r)/(snt*2))-(r/sin(3.14-(2*3.14/snt)/2-(2*3.14/snt)/4)*sin((2*3.14/snt)/4))*r*sin((2*3.14/snt)/2)/2)*(snt*2));
}
