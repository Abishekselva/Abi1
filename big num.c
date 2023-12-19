#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter a,b,c values:");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b && a>c)
    {
       printf("biggest num is %d",a);
    }
    else if(b>a && b>c)
    {
      printf("biggest num is %d",b);
    }
    else
    {
      printf("biggest num is %d",c);
    }
    return 0;
}