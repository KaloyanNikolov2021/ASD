#include "bitstate.h"

void setbit(int bitnum){
    bitstate |= 1 << bitnum;
}
void unsetbit(int bitnum){
    bitstate &= ~(1 << bitnum);
}
void togglebit(int bitnum){
    bitstate ^= 1 << bitnum;
}
int isbitset(int bitnum){
    if(bitnum >= 0 && bitnum <= 31){
        return (bitstate & (1 << bitnum)) >> bitnum;
    }
    else return -1;
}
int getbitstate(void){
    return bitstate;
}
