#include <stdio.h>
#include "exo3.h"

int main(void)
{
  int tableauOriginal[] = { 15, 81, 17, 22 };
  int tableauCopie[4] = {0};

  // AVANT COPIE
  for(int i = 0; i<4; i++)
    printf("%d ", tableauCopie[i]);
  printf("\n");


  copie(tableauOriginal, tableauCopie, 4);

  // APRES COPIE
  for(int i = 0; i<4; i++)
    printf("%d ", tableauCopie[i]);
  printf("\n");

  return 0;
}