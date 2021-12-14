#include <stdio.h>

int main()
{
    int x,y,z;
    char n;
    printf("to find the biggest of thre numbers");
    scanf("%d %d %d",&x,&y,&z);
    scanf("%c",&n);
    switch(n)
    {
        case 1:
        if(x>y)
            printf("x is the biggest nymber");
        else if(y>z)
        printf("y is the largest number");
        else if(z>x)
        printf("z is the largest number");
        default:
        printf("please enter the number proprely");
        
    }

    return 0;
}
