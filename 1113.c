#include<stdio.h>
int main()
{
 int i,X,Y;
 for(i=0; i<100; i++)
 {
 scanf("%d %d",&X,&Y);
 if(X==Y)break;
 if(X>Y)printf("Decrescente\n");
 if(X<Y)printf("Crescente\n");
 }
 return 0;
}
