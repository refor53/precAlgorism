#include <stdio.h>

int main() {
	int K, Q, l, b, n, p;
	scanf("%d %d %d %d %d %d", &K, &Q, &l, &b, &n, &p);
	printf("%d %d %d %d %d %d", 1 - K, 1 - Q, 2 - l, 2 - b, 2 - n, 8 - p);
	return 0;
}