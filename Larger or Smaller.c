#include <stdio.h>

int main()
{
	int num1, num2, larger;

	printf("Enter two numbers:\n");
	scanf("%d%d", &num1, &num2);

	if (num1 > num2)
		larger = num1;
	else
		larger = num2;

	printf("%d is larger.", larger);

	return 0;
}
