#include <stdio.h>

int main()
{
    int a,n;
    printf("to enter the number is positive or negative");
    scanf("%d %d",&a,&n);
    switch(n)
    {
        case 1:
        if(a>0)
        printf("positive number");
        break;
        case 2:
        if(a<0)
        printf("negative number");
        break;
        default:
        printf("please enter the number properly");
    }

    return 0;
}
