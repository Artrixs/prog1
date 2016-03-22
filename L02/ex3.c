/*Esercizio 3 -- Lezione 2*/
#include<stdio.h>

int main (void)
{
	//Stampiamo ciao in ottale
	printf("\103\151\141\157\n");
	//Stampiamo Ciao Mondo! in decimale
	printf("\x43\x69\x61\x6F\x20\x4D\x6F\x6E\x64\x6F\x21\n");
	
	//prova a printare printf(\xFFFF)
	printf("\xFFFF"); //da un errore FFFF è out-range
	
	
	
	return 0;
}