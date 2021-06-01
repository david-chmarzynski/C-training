/*
** DAVID CHMARZYNSKI
** [DESCRIPTION]
** Calcule et renvoie la moyenne des valeurs d'un tableau
*/
#include <stdio.h>
#include "exo2.h"

double moyenneTableau(int tableau[], int tailleTableau)
{
  int total = 0;
  int moyenne = 0;
  for(int i = 0; i<tailleTableau; i++)
    total += tableau[i];
  
  moyenne = total / tailleTableau;
  
  return moyenne;
}