/**\file IO.h
 * \brief Contiene funzioni di utilità per leggere dati dal terminale.
 *
 *Questo file contiene alcune funzioni di utilità per leggere dati di tipo
 *diverso (`int`, `char`, `double`, `String`) dal terminale.*/

//
//  IO.h
//  Prog1
//
//  Created by Vincenzo Marra on 16/03/14.
//  Copyright (c) 2014 Vincenzo Marra. All rights reserved.
//

#ifndef Prog1_IO_h
#define Prog1_IO_h

#include "Stringhe.h"
#include <stdlib.h>
#include <string.h>

/** \brief Legge un intero da terminale.
 *
 * Legge una riga da terminale (`stdin`) e tenta di convertirla in `int`.
 * Se non riesce a interpretare l'intera stringa come `int`
 * forza il resinserimento da parte dell'utente.
 * Restituisce l'intero letto.
 * @param msg Un messaggio per l'utente.
 * @return L'intero letto.
 */

int leggi_int(String msg)
{
    String buf;
	char *p;
	int i=0;
	short valid=1;
	
    printf("%s", msg);
	
	do 
	{
		if (fgets(buf, sizeof(buf), stdin) != NULL)
		{
			i = (int) strtol(buf, &p, 10);
		
			if (!(buf[0] != '\n' && (*p == '\n' || *p == '\0')))
			{
				printf ("Il dato inserito non e' un intero. Reinserire.\n"); 
				valid=0;
			}
			else 
				valid=1;
		}
	}
	while (!valid);
	return i;
}

/** \brief Legge un reale da terminale.
 *
 * Legge una riga da terminale (`stdin`) e tenta di convertirla in `double`.
 * Se non riesce a interpretare l'intera stringa come `double`
 * forza il resinserimento da parte dell'utente.
 * Restituisce il double letto.
 * @param msg Un messaggio per l'utente.
 * @return Il double letto.
 */

double leggi_double(String msg)
{
    String buf;
	double d=0;
	short valid=1;
	
    printf("%s", msg);
	
	do 
	{
		if (fgets(buf, sizeof(buf), stdin) != NULL)
		{
			d = strtod(buf, NULL);
			
			if ( strtod(buf, NULL) == 0 && (buf[0] != '0' && (buf[0] != '\0' && buf[0] != '-' && buf[1] != '0')) )			

			{
				printf ("Il dato inserito non e' un double. Reinserire.\n"); 
				valid=0;
			}
			else 
				valid=1;
		}
	}
	while (!valid);
	return d;
}

/** \brief Legge un carattere da terminale.
 *
 * Legge una riga da terminale (`stdin`) e ne restituisce il primo carattere
 * (come `char`).
 * @return Il carattere letto, oppure 0 se si verifica un errore di I/O o 
 * se si rileva EOF.
 */

char leggi_car(void)
{
    String s;
    
    if ( (fgets(s, BUFSIZ, stdin) != NULL) && (s != NULL) )
    {
        return *s;
    }
    return 0;
}

/** \brief Legge una riga da terminale.
 *
 * Legge una riga da terminale (`stdin`) e la acquisisce come `String` nella 
 * variabile `letta`.
 * Garantisce che la stringa letta sia terminata da `\0`.
 * @param msg Un messaggio per l'utente.
 * @param letta La stringa letta.
 * @return Restituisce 0 se si verifica un errore di I/O o se si rileva EOF, e 1
 * se la lettura va a buon fine.
 */

int leggi_str(String msg, String letta)
{
    char *p;
    
    printf("%s", msg);
    
    if (fgets(letta, BUFSIZ, stdin) != NULL)
    {
        if ((p = strchr(letta, '\n')) != NULL)
            *p = '\0';
        return 1;
    }
    return 0;
}

#endif

