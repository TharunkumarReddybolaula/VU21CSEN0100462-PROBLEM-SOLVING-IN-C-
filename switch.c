#include <stdio.h>

int main()
{
    int a,b,c,n;
    printf("to add and sub");
    scanf("%d %d",&a,&b);
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        c=a+b;
        printf("%d",c);
        break;
        case 2:
        c=a*b;
        printf("%d",c);
        break;
        case 3:
        c=a/b;
        printf("%d",c);
        break;
        case 4:
        c=a-b;
        printf("%d",c);
        break;
        default:
        printf("enter the number properly");
    }

    return 0;
}
