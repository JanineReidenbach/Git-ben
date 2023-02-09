#include<stdio.h>

int main() {

	int wert1 = 11, wert2 = 5, wert3 = 10;
	if(wert1 < wert2 < wert3) printf("%d", wert2);
	else printf("Blödsinn");

	return 0;
}

