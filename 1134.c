#include <stdio.h>
int main()
{
 int n,al=0,ga=0,de=0;
 while(1)
 {
 scanf("%d",&n);
 if(n>0 && n<4)
 {
 if(n==1)al++;
 else if(n==2)ga++;
 else de++;
 }
 if(n==4)break;
 }
 printf("MUITO OBRIGADO\n");
 printf("Alcool: %d\n",al);
 printf("Gasolina: %d\n",ga);
 printf("Diesel: %d\n",de);
 return 0;
}
