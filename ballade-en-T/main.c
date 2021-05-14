#include <stdio.h>
#include <stdlib.h>
#include "game.h"

int main(void)
{
    int action = 0;
    #define X_AXIS 6
    #define Y_AXIS 6
    int i, j, k;
    int a, b, c;

    int tab[X_AXIS][Y_AXIS]=
    {
        // x4
        // {1,2,3,4},
        // {5,6,7,8},
        // {9,10,11,12},
        // {13,14,15,16}

        //x6
        {1,2,3,4,5,6},
        {7,8,9,10,11,12},
        {13,14,15,16,17,18},
        {19,20,21,22,23,24},
        {25,26,27,28,29,30},
        {31,32,33,34,35,36},

        // x8
        // {1,2,3,4,5,6,7,8},
        // {9,10,11,12,13,14,15,16},
        // {17,18,19,20,21,22,23,24},
        // {25,26,27,28,29,30,31,32},
        // {33,34,35,36,37,38,39,40},
        // {41,42,43,44,45,46,47,48},
        // {49,50,51,52,53,54,55,56},
        // {57,58,59,60,61,62,63,64}
    };

    // for(a=1; a < X_AXIS * Y_AXIS + 1; a++)
    //     printf("%d ", a);
    

    int character_pos = tab[2][2];
    int win_pos = tab[4][4];
    generate_area(X_AXIS, Y_AXIS, i, j, character_pos, tab, win_pos);
    prompt_action(action, X_AXIS, Y_AXIS, tab, character_pos, i, j);
    action_dispatcher(action, X_AXIS, Y_AXIS, tab, character_pos, i, j);
    return 0;
}