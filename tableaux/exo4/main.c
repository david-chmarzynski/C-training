#include <stdio.h>
#include "exo4.h"

int main(void)
{
  int tableau[5] = { 1, 22, 13, 50, 18};
  int valeurMax = 21;

  for(int i = 0; i<5; i++)
    printf("%d ", tableau[i]);
  printf("\n");

  maximumTableau(tableau, 5, valeurMax);

  for(int i = 0; i<5; i++)
    printf("%d ", tableau[i]);
  printf("\n");
}