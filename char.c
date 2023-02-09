#include<stdio.h>
#include<string.h>

int main() {

	int zahl;
	printf("Zahl zwischen 1 und 4 eingeben: ");
	scanf("%d", &zahl);

	char* wochentage[4];
	wochentage[0] = "Montag";
	wochentage[1] = "Dienstag";
	wochentage[2] = "Mittwoch";
	wochentage[3] = "Donnerstag";

	if(zahl > 0 && zahl < 5) printf("Wochentag: %s", wochentage[zahl - 1]);
	else printf("Trottel");

	return 0;
}
