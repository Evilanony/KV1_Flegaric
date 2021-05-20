#define _CRT_SECURE_NO_WARNINGS
#include "Header.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>



int main(void) {
	struct sokovi *sok;
	sok = zauzimanje_memorije_sok(&sok);
	struct kava *kava;
	kava = zauzimanje_memorije_kava(&kava);
	struct alkohol *alkohol;
	alkohol = zauzimanje_memorije_alkohol(&alkohol);
	unos_gaziranog(&sok);
	printf("\n");
	unos_ne_gaziranog(&sok);
	printf("\n");
	unos_kave_obicne(&kava);
	printf("\n");
	unos_kave_cappucino(&kava);
	printf("\n");
	unos_alkohola_obicni(&alkohol);
	printf("\n");
	unos_alkohola_zestoko(&alkohol);
	ispis_gaziranog(&sok);
	ispis_ne_gaziranog(&sok);
	ispis_kave_obicne(&kava);
	ispis_kave_cappucino(&kava);
	ispis_alkohola_obicni(&alkohol);
	ispis_alkohola_zestoko(&alkohol);

	return 0;
}