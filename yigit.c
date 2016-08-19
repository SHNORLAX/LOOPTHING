#include <stdio.h>

void k(void)
{
	int x;
	*(&x + 2) -= 37;
}

void main (void)
{
	int y = 1;
	printf("%d\n",y++);
	if (y < 11)
		k();
}
