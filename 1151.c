#include <stdio.h>
int main()
{
 int N[100],a,i;
 scanf("%d",&a);
 N[0]=0;
 N[1]=1;
 for(i=2; i<a; i++)
 {
 N[i]=N[i-1]+N[i-2];
 }
 printf("0");
 for(i=1; i<a; i++)
 {
 printf(" %d",N[i]);
 }
 printf("\n");
 return 0;
}
