/*
** DAVID CHMARZYNSKI
** [DESCRIPTION]
** Renvoie la somme des valeurs connues d'un tableau
*/
#include <stdio.h>
#include "exo1.h"

int sommeTableau(int tableau[], int tailleTableau)
{
  int somme = 0;
  for(int i = 0; i<tailleTableau; i++)
    somme += tableau[i];

  return somme;
}