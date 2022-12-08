#include<stdio.h>
int main(){
    int x1,y1 , x2,y2 , x3,y3 , x4,y4 ,k;
    scanf("%d%d%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
    // a b là tọa độ điểm 1
    int maxx1=x1;
    if (maxx1<x2){maxx1=x2;}
    if (maxx1<x3){maxx1=x3;}
    if (maxx1<x4){maxx1=x4;}

    int maxy1=y1;
    if (maxy1<y2){maxy1=y2;}
    if (maxy1<y3){maxy1=y3;}
    if (maxy1<y4){maxy1=y4;}

    int minx1=x1;
    if (minx1>x2){minx1=x2;}
    if (minx1>x3){minx1=x3;}
    if (minx1>x4){minx1=x4;}

    int miny1=y1;
    if (miny1>y2){miny1=y2;}
    if (miny1>y3){miny1=y3;}
    if (miny1>y4){miny1=y4;}
    if ((maxx1-minx1)>(maxy1-miny1)){k=(maxx1-minx1)*(maxx1-minx1);}
    else k=(maxy1-miny1)*(maxy1-miny1);
    if (k%2==0){printf("%d\nhoa hong",k);}else printf("%d\ngo huong", k);

    }