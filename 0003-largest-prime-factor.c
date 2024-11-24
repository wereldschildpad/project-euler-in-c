#include <stdio.h>

int main(void)
{
	long int n = 600851475143;
	int p = 2;

	while (n != 1) {
		if (n % p == 0) {
			n = n / p;
		} else {
			p = p + 1;
		}
	}

	printf("%d\n", p);

	return 0;
}
