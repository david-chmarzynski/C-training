#include <stdio.h>
#include <stdlib.h>
#include "game.h"



/* --------------- */

void generate_area(int X_AXIS, int Y_AXIS, int i, int j, int character_pos, int tab[][Y_AXIS])
{

    printf("------------------\n");
    // DOUBLE BOUCLE SUR TABLEAU 2D
    for(i=0; i < X_AXIS; i++) {
        for(j=0; j < Y_AXIS; j++) {
        // SI LE NUMERO DE LA CASE EST UN MODULO DE X_AXIS, RETOUR LIGNE
        if(tab[i][j] % X_AXIS == 0)
            printf(" O \n");
        else
            // SI LA CASE CORRESPOND A LA POSITION DU PERSONNAGE
            if(tab[i][j] == character_pos)
                printf("[T]");
            // else if(tab[i][j] == win_pos)
            //     printf("[X]");
            // SINON, SI CASE CORRESPOND A 1ERE ET DERNIERE COLONNE DE CHAQUE AXE => BORD ZONE
            else if(j == 0 || i == 0 || j == Y_AXIS - 1 || i == X_AXIS - 1)
                printf(" O ");
            else
            // SINON AFFICHAGE CASE DE JEUX
                printf("[ ]");
        };
    };
    printf("------------------\n");
};

/* --------------- */

int prompt_action(int action, int X_AXIS, int Y_AXIS, int tableau[][Y_AXIS], int character_pos, int i, int j)
{
    printf("Que faire ?\n");
    printf("8.Up\n2.Down\n4.Left\n6.Right\n");
    scanf("%d", &action);
    if(action == 8 || action == 4 || action == 2 || action == 6)
        action_dispatcher(action, X_AXIS, Y_AXIS, tableau, character_pos, i, j);
    else
    {
        retry_prompt_action(action, X_AXIS, Y_AXIS, tableau, character_pos, i, j);
    }
}

/* --------------- */

int retry_prompt_action(int action, int X_AXIS, int Y_AXIS, int tableau[][Y_AXIS], int character_pos, int i, int j)
{
    printf("Commande non reconnue. Reessayez : ");
    scanf("%d", &action);
    printf("\n");
    if(action == 8 || action == 4 || action == 2 || action == 6)
        action_dispatcher(action, X_AXIS, Y_AXIS, tableau, character_pos, i, j);
    else
    {
        retry_prompt_action(action, X_AXIS, Y_AXIS, tableau, character_pos, i, j);
    }
}

/* --------------- */

void action_dispatcher(int action, int X_AXIS, int Y_AXIS, int tableau[][Y_AXIS], int character_pos, int i, int j)
{
    if(action == 8)
        action_up(X_AXIS, Y_AXIS, tableau, character_pos, i, j, action);

    if(action == 2)
        action_down(X_AXIS, Y_AXIS, tableau, character_pos, i, j, action);

    if(action == 4)
        action_left(X_AXIS, Y_AXIS, tableau, character_pos, i, j, action);

    if(action == 6)
        action_right(X_AXIS, Y_AXIS, tableau, character_pos, i, j, action);
}

/* --------------- */

void action_up(int X_AXIS, int Y_AXIS, int tableau[][Y_AXIS], int character_pos, int i, int j, int action)
{
    // BOUCLE SUR TOUTES LES CASES
      for(i=0; i < X_AXIS; i++) {
        for(j=0; j < Y_AXIS; j++) {
          // printf("x: %d / y: %d => pos: %d \n", i, j, tableau[i][j] == character_pos);
          // CELLE QUI CORRESPOND A LA POSITION DU PERSONNAGE (DECLAREE PLUS HAUT)
            if(tableau[i][j] == character_pos)
            //   printf("%d\n", tableau[i][j]);
          {
            // SI I CORRESPOND A LA BORDURE HAUTE (SOIT 0)
            if(i - 1 == 0)
            {
              printf("Vous ne pouvez pas aller plus haut !\n");
            }
            else
            {
              // ENLEVE - 1 (FAIT ALLER VERS LE HAUT DE LA COLONNE)
              i -= 1;
              character_pos = tableau[i][j];
              generate_area(X_AXIS, Y_AXIS, i, j, character_pos, tableau);
              prompt_action(action, X_AXIS, Y_AXIS, tableau, character_pos, i, j);
              exit(EXIT_SUCCESS);
            }
          }
        }
      }
}

/* --------------- */

void action_down(int X_AXIS, int Y_AXIS, int tableau[][Y_AXIS], int character_pos, int i, int j, int action)
{
    for(i=0; i < X_AXIS; i++) {
        for(j=0; j < Y_AXIS; j++) {
          // printf("x: %d / y: %d => pos: %d \n", i, j, tableau[i][j] == character_pos);
          // CELLE QUI CORRESPOND A LA POSITION DU PERSONNAGE (DECLAREE PLUS HAUT)
            if(tableau[i][j] == character_pos)
            //   printf("%d\n", tableau[i][j]);
          {
            // CORRESPOND A LA BORDURE BASSE (SOIT X_AXIS - 1)
            if(i + 1 == X_AXIS - 1)
            {
              printf("Vous ne pouvez pas aller plus bas !\n");
            }
            else
            {
            // ENLEVE - 1 (FAIT ALLER VERS LE HAUT DE LA COLONNE)
              i += 1;
              character_pos = tableau[i][j];
              generate_area(X_AXIS, Y_AXIS, i, j, character_pos, tableau);
              prompt_action(action, X_AXIS, Y_AXIS, tableau, character_pos, i, j);
              exit(EXIT_SUCCESS);
            }
          }
        }
      }
}

/* --------------- */

void action_left(int X_AXIS, int Y_AXIS, int tableau[][Y_AXIS], int character_pos, int i, int j, int action)
{
    for(i=0; i < X_AXIS; i++) {
        for(j=0; j < Y_AXIS; j++) {
          // printf("x: %d / y: %d => pos: %d \n", i, j, tableau[i][j] == character_pos);
          // CELLE QUI CORRESPOND A LA POSITION DU PERSONNAGE (DECLAREE PLUS HAUT)
            if(tableau[i][j] == character_pos)
            //   printf("%d\n", tableau[i][j]);
          {
            // SI J == 0 => BORDURE GAUCHE
            if(j - 1 == 0)
            {
              printf("Vous ne pouvez pas aller plus a gauche !\n");
            }
            else
            {
              j -= 1;
              character_pos = tableau[i][j];
              generate_area(X_AXIS, Y_AXIS, i, j, character_pos, tableau);
              prompt_action(action, X_AXIS, Y_AXIS, tableau, character_pos, i, j);
              exit(EXIT_SUCCESS);
            }
          }
        }
      }
}

/* --------------- */

void action_right(int X_AXIS, int Y_AXIS, int tableau[][Y_AXIS], int character_pos, int i, int j, int action)
{
    for(i=0; i < X_AXIS; i++) {
        for(j=0; j < Y_AXIS; j++) {
          // printf("x: %d / y: %d => pos: %d \n", i, j, tableau[i][j] == character_pos);
          // CELLE QUI CORRESPOND A LA POSITION DU PERSONNAGE (DECLAREE PLUS HAUT)
            if(tableau[i][j] == character_pos)
            //   printf("%d\n", tableau[i][j]);
          {
            // SI J == Y_AXIS => BORDURE, DONC -1 POUR NE PAS DEPASSER
            if(j + 1 == Y_AXIS - 1)
            {
              printf("Vous ne pouvez pas aller plus a droite !\n");
            }
            else
            {
              j += 1;
              character_pos = tableau[i][j];
              generate_area(X_AXIS, Y_AXIS, i, j, character_pos, tableau);
              prompt_action(action, X_AXIS, Y_AXIS, tableau, character_pos, i, j);
              exit(EXIT_SUCCESS);
            }
          }
        }
      }
}

/* --------------- */