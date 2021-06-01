/*
** DAVID CHMARZYNSKI
** [DESCRIPTION]
** Ordonner un
*/
#include <stdio.h>
#include "exo5.h"

void ordonnerTableau(int tableau[], int tailleTableau)
{
  int tmp = 0;
  for(int i = 0; i<tailleTableau; i++)
    for(int j = 0; j<tailleTableau; j++)
    {
      if(tableau[i] < tableau[j])
      {
        tmp = tableau[j];
        tableau[j] = tableau[i];
        tableau[i] = tmp;
      }
    }
}