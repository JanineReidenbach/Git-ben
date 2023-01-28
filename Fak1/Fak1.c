#include<stdio.h>

int main() {
	int zahl, faku = 1;
	printf("Geben Sie eine ganze Zahl an: ");
	scanf("%d", &zahl);

	for(int i = 1; i <= zahl; i++) {
		faku = faku * i;
	}

	printf("Fakultät: %d\n", faku);
	return 0;
}
