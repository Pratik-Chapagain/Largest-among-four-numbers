#include <stdio.h>

int main() {
    int a,b,c,d;
    printf("Enter values of 4 variables:");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>b && a>c && a>d)
    {
    printf("%d is largest",a);
    }
    else if(b>c && b>d)
    {
    printf("%d is largest",b);
    }
    else if(c>d)
    {
    printf("%d is largest",c);
    }
    else
    {
    printf("%d is largest",d);
    }
    return 0;
}