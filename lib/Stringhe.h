/**\file Stringhe.h
 * \brief Contiene funzioni di utilità per elaborare stringhe.
 *
 *Questo file definisce il tipo `String` e fornisce alcune semplici funzioni di utilità per elaborare stringhe.*/

//
//  Stringhe.h
//  Prog1
//
//  Created by Vincenzo Marra on 16/03/14.
//  Copyright (c) 2014 Vincenzo Marra. All rights reserved.
//


#ifndef Prog1_Stringhe_h
#define Prog1_Stringhe_h

#include <stdio.h>
#include <string.h>

/** \brief Definisce il `String`.*/

typedef char String[BUFSIZ];

/** \brief Restituisce la lunghezza di una stringa.
 *
 * Restituisce la lunghezza della stringa `s`, escluso il carattere di
 * terminazione \0.
 * Garantisce che la stringa letta sia terminata da `\0`.
 * @param s La stringa di cui calcolare la lunghezza.
 * @return Restituisce la lunghezza di `s`, oppure -1 se la stringa e' NULL.
 * @note A differenza della funzione standard `strlen`, per motivi didattici
 * restituisce un `int` e non un `size_t`.
 */

int lung_str(String s)
{
    if (s==NULL)
        return -1;
    
    int i;
    for (i=0; s[i]!='\0'; i++);
    
    return i;
}

/** \brief Testa il carattere finale di una stringa.
 *
 * @param s La stringa di cui testare l'ultimo carattere.
 * @param c Il carattere con cui confrontare l'ultimo carattere di `s`.
 * @return Restituisce 1 se la stringa `s` termina con il carattere.
 * `c` (non considerando il carattere di terminazione \0), e 0 altrimenti.
 * Se la stringa è vuota (cioè consiste del solo carattere \0) o il puntatore è
 * NULL, restituisce 0.
 */

int finisce_con(String s, char c)
{
	if( (s==NULL) || (s[0]=='\0')) //short-circuited eval
		return 0;
	if ( (s[strlen(s)-1])==c )
		return 1;		
	return 0;			
}

#endif
