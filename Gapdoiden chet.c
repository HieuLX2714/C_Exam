#include<stdio.h>
#include<math.h>
int main()
{ int times,n,kocanthiet,socantim;
  scanf("%d",&times);
  int arr[times];
  for(int i=0;i<times;i++)
  { 
    scanf("%d %d",&kocanthiet,&n);
    arr[i]=n;
  }

  for(int j=0;j<times;j++)
  {
    for(int i=1;i<10;i++)
    {
      int x=pow(2,i-1);
      int y=pow(2,i);
      if ((arr[j]-x)%y==0){
        socantim=i;
      }
    }
    printf("%d\n",socantim);
  }
}