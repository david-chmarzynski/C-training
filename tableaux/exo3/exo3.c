/*
** DAVID CHMARZYNSKI
** [DESCRIPTION]
** Copier un tableau donné dans un autre tableau
*/
#include <stdio.h>
#include "exo3.h"

void copie(int tableauOriginal[], int tableauCopie[], int tailleTableau)
{
  for(int i = 0; i<tailleTableau; i++)
    tableauCopie[i] = tableauOriginal[i];
}