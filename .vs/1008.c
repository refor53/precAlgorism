#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	double div = (double)a / b;
	printf("%.9lf", div);

	return 0;
}