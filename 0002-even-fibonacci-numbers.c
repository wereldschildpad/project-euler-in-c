#include <stdio.h>

int main(void)
{
	int sum = 0;
	int a = 0;
	int b = 1;

	while (a < 4000000) {
		if (a % 2 == 0) {
			sum += a;
		}

		int c = a + b;
		a = b;
		b = c;
	}

	printf("%d\n", sum);
	return 0;
}
