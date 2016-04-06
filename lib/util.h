/*Questa libreria contiene una serie di funzioni create durante le esercitazioni
*che possono risultare molto utili anche per altri progetti.
*/

//
// util.h
// Created by Arturo Misino on 06/04/2016
//  Copyright (c) 2016 Arturo Misino. All rights reserved.
//

/* Legge un array di double e lo riordina in modo crescente,
 * implementando l'algoritmo di boublesort.
 * @param v[] array di double da riordinare, l int dimensione di v
*/
void doublesort(double v[],int l)
{
	int bol=1;
	double aux;
	while(bol){
		bol=0;
		for(int i=0;i<=l-2;i++)
			if(v[i]>v[i+1]){
				aux=v[i];
				v[i]=v[i+1];
				v[i+1]=aux;
				bol=1;
			}
	}
}

/* Legge un array di int e lo riordina in modo crescente,
 * implementando l'algoritmo di boublesort.
 * @param v[] array di int da riordinare, l int dimensione di v
*/
void intsort(int v[],int l)
{
	int bol=1;
	int aux;
	while(bol){
		bol=0;
		for(int i=0;i<=l-2;i++)
			if(v[i]>v[i+1]){
				aux=v[i];
				v[i]=v[i+1];
				v[i+1]=aux;
				bol=1;
			}
	}
}