#include <stdio.h>

int main(void)
{
	int acc = 0;

	for (int i = 0; i < 1000; ++i) {
		if (i % 3 == 0 || i % 5 == 0) {
			acc = acc + i;
		}
	}

	printf("%d\n", acc);

	return 0;
}
