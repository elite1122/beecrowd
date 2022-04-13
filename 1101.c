#include<stdio.h>
int main()
{
 int i,j,a=0,temp,X,Y;
 for(i=0; i<100; i++)
 {
 scanf("%d %d",&X,&Y);
 if(X<=0 || Y<=0)break;
 if(X>Y){temp=X;X=Y;Y=temp;}
 for(j=X; j<=Y; j++)
 {
 printf("%d ",j);
 a+=j;
 }
 printf("Sum=%d\n",a);
 a=0;
 }
 return 0;
}
