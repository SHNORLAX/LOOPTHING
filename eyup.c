#include <stdio.h>
void k(void) {
int x;
//x = 2;
*(&x+2) -= 37;
}

void main(void) {

int x;
x=0;
printf("X=%d\n",x++);
if (x < 11)
	k();
}
