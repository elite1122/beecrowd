#include <stdio.h>
int main()
{
 int X,Y;
 float Z;
 scanf("%d %d",&X,&Y);

 if(X==1)
 {
 Z=Y*4.00;
 printf("Total: R$ %0.2f\n",Z);
 }
 else if(X==2)
 {
 Z=Y*4.50;
 printf("Total: R$ %0.2f\n",Z);
 }
 else if(X==3)
 {
 Z=Y*5.00;
 printf("Total: R$ %0.2f\n",Z);
 }
 else if(X==4)
 {
 Z=Y*2.00;
 printf("Total: R$ %0.2f\n",Z);
 }
 else if(X==5)
 {
 Z=Y*1.50;
 printf("Total: R$ %0.2f\n",Z);
 }
 return 0;
}
