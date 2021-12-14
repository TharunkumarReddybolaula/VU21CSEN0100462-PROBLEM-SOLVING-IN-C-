#include <stdio.h>

int main()
{
    int a,b;
    printf("swaping of two numbers");
    scanf("%d",&a);
    scanf("%d",&b);
    a=a-b;
    b=a+b;
    a=b-a;
    printf("%d %d",a,b);
    

    return 0;
}
