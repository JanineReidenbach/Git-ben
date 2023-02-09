#include<stdio.h>
#include"rechteck.h"

int main() {

	int a = 0, b = 0;
	printf("Bitte geben Sie Seite a an: ");
	scanf("%d", &a);

	printf("Bitte geben Sie Seite b an: ");
	scanf("%d", &b);

	printf("Der Umfang beträgt: %d", umfang(a,b));
	printf("Der Inhalt beträgt: %d", inhalt(a,b));

	return 0;
}
