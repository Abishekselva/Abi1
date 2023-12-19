#include <stdio.h>
int main() 
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    if(n>=10000 && n<=99999)
    {
     printf("yes");
    }
    else
    {
     printf("no");
    }
    
}