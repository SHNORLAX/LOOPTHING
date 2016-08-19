/* this program prints 1 to 10 in 32-bit operating systems */
#include <stdio.h>

void k(){
	int x;
	*(&x+2) -= 37;
}

void main(){
	int y=1;
	if(y < 11){
		printf("%d\n", y++);
		k();
	}
}
