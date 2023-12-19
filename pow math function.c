#include<stdio.h>
#include<math.h>
int main()
{int b,e,p;
printf("Enter the base :");
scanf("%d",&b);
printf("Enter the exponent :");
scanf("%d",&e);
p = pow(b,e);
printf("%d ^ %d = %d",b,e,p);
return 0;
}