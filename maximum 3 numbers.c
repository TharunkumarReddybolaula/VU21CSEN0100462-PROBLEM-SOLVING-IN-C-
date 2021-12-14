
#include <stdio.h>

int main()
{
    int a,b,c,n;
    printf("to find the maximum of thre numbers");
    scanf("%d",&a);
    scanf("%d %d %d",&b,&c,&n);
    switch(n)
    {
        case 1:
        if(a>b)
        printf("a is the largest number");
        break;
        case 2:
        if(b>c)
        printf("b is the largest number");
        break;
        case 3:
        if(c>a)
        printf("c is the largest number");
        break;
        default:
        printf("please enter the vlue properly");
    }


    return 0;
}
