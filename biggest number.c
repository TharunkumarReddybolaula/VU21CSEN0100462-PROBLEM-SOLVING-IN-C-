
#include <stdio.h>

int main()
{
    int x,y,z;
    printf("to find the biggest number in the three numbers");
    scanf("%d %d %d",&x,&y,&z);
    if(x>y)
    {
        printf("x is the biggest number");
    }
    else if(y>z)
    {
        printf("y is the largest of three numbers");
    }
    else 
    {
        printf("z is the least number");
    }


    return 0;
}
