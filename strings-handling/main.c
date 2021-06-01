/*
    [EXERCICE 6]
    > Ecrire une fonction qui compte le nombre de caractères d'une chaine (comme strlen de <string.h>)
    > Ecrire une fonction qui compte le nombre d'occurrences d'un caractère (ex: "a") dans une chaîne

    Indications :
        - Pour la partie 2, vous utiliserez la fonction écrite en partie 1
        - pensez à mettre vos variables en lecture seule constantes (ex: const int myData = 10) 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// PROTOTYPES
int my_string_counter(const char *string);
int my_occurences_counter(const char string[], const char caractere, const int length);

int main(void)
{
  char string[] = "Ma string";
  printf("%d\n", my_string_counter(string));
  printf("%d\n", my_occurences_counter(string, 'a', my_string_counter(string)));

  return 0;
}

int my_string_counter(const char *string)
{
  int counter = 0;
  do
  {
    counter++;
  } while (string[counter] != '\0');

  return counter;
}

int my_occurences_counter(const char string[], const char caractere, const int length)
{
  int counter = 0;
  for(int i = 0; i<length; i++)
    if(string[i] == caractere)
      counter++;

  return counter;
}