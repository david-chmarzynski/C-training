#ifndef __NUMBERS__H__
#define __NUMBERS__H__

/* STRUCTURE */


/* PROTOTYPES */
void generate_area();
int prompt_action(int action, int X_AXIS, int Y_AXIS, int tableau[][Y_AXIS], int character_pos, int i, int j);
int retry_prompt_action(int action, int X_AXIS, int Y_AXIS, int tableau[][Y_AXIS], int character_pos, int i, int j);
void action_dispatcher(int action, int X_AXIS, int Y_AXIS, int tableau[][Y_AXIS], int character_pos, int i, int j);
void action_up(int X_AXIS, int Y_AXIS, int tableau[][Y_AXIS], int character_pos, int i, int j, int action);
void action_down(int X_AXIS, int Y_AXIS, int tableau[][Y_AXIS], int character_pos, int i, int j, int action);
void action_left(int X_AXIS, int Y_AXIS, int tableau[][Y_AXIS], int character_pos, int i, int j, int action);
void action_right(int X_AXIS, int Y_AXIS, int tableau[][Y_AXIS], int character_pos, int i, int j, int action);

#endif