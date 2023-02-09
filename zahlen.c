#include<stdio.h>

int main() {

	float noten[5], gesamtnote = 0;

	for(int i = 1; i <= 5; i++) {
		printf("Note %d eingeben: ", i);
	       scanf("%f", &noten[i - 1]);
		gesamtnote += noten[i - 1];
	}

	printf("Ihr Durchschnitt beträgt: %.2f", gesamtnote/5);
	return 0;
}
