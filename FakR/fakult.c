int fakultaet(int zahl) {
	if(zahl == 1) return 1;
	else return zahl * fakultaet(zahl - 1);
}
