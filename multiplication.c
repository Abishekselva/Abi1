#include<stdio.h>
int main()
{
    int a;
    printf("enter the value:");
    scanf("%d",&a);
    for(int i= 0;i<=10;++i)
    printf("%d*%d=%d\n",i,a,i*a);
    return 0;
}