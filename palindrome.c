#include<stdio.h>
main()
{
	int n,reversed = 0,remaining , original;
	printf("enter an integer :");
	scanf(" %d", &n);
	original = n;
	while (n! = 0)
	{
		remainder = n% 10;
		reversed = reversed * 10+ remainder;
		n/ = 10
	}
	if (original == reversed)
	printf("%d is a palindrome", original);
	else
	printf("%d is not a palindrome",originsal);
	return 0;
};
