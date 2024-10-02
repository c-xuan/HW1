#include <stdio.h>

int main(void) 
{
	int a, b;
	printf("Please enter two numbers¡G");
	scanf("%d %d", &a, &b);

	if( b == 0)
	{
		printf("The second is not 0\n");
	}
	else 
	{
		if (a % b == 0)
		{
			printf("%d yes %d multiple\n", a, b);
		}
		else
		{
			printf("%d no %d multiple\n", a, b);
		}
	}
	system("pause");
	return 0;
}