#include<stdio.h>
int main()
{
 int a,b,i,j,x,y,z=1;
 scanf("%d %d",&a,&b);
 x=b/a;
 y=a;
 for(i=1; i<=x; i++)
 {
 printf("%d",z);
 for(j=z+1; j<=y; j++)
 {
 printf(" %d",j);
 }
 printf("\n");
 z+=a;
 y+=a;
 }
 return 0;
}
