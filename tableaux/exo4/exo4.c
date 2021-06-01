/*
** DAVID CHMARZYNSKI
** [DESCRIPTION]
** Remplacer par 0 si la valeur dépasse une valeur maximale donnée
*/
#include <stdio.h>
#include "exo4.h"

void maximumTableau(int tableau[], int tailleTableau, int valeurMax)
{
  for(int i = 0; i<tailleTableau; i++)
  {
    if(tableau[i] > valeurMax)
      tableau[i] = 0;
  }
}