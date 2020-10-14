#include <stdio.h>

void main()
{
	int a, b, c;
	printf("Enter the first number: ");
	scanf("%d", &a);
	printf("Enter the second number: ");
	scanf("%d", &b);
	printf("Enter the third number: ");
	scanf("%d", &c);
	printf("%d mod %d = %d ", b, a, b % a);
}