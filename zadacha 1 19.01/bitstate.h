#ifndef BITSTATE_H
#define BITSTATE_H
static unsigned int bitstate;
void setbit(int bit_number);
void unsetbit(int bit_number);
void togglebit(int bit_number);
int isbitset(int bit_number);
int getbitstate(void);
#endif