#include<stdio.h>

int fakultaet(int zahl) {

	int faku = 1;

	for(int i = 1; i <= zahl; i++) {
		faku = faku * i;
	}

	return faku;

}

void main() {

	int zahl;
	printf("Geben Sie eine ganze Zahl an: ");
	scanf("%d", &zahl);
	
	printf("Fakultät: %d\n", fakultaet(zahl));
}
