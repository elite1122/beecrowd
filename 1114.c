#include<stdio.h>
int main()
{
 int i,n;
 for(i=0; i<100; i++)
 {
 scanf("%d",&n);
 if(n==2002)printf("Acesso Permitido\n");
 if(n==2002)break;
 else
 printf("Senha Invalida\n");
 }
 return 0;
}
