#ifndef PROCESS_H
#define PROCESS_H
#include<stdio.h>
#include<string.h>
typedef struct{
    int id;
    char name[30];
}Process;
Process processes[5];
int processescount = 0;
static int nextprocessid(void);
int createnewprocess(char str[]);
void stopprocess(int number);
#endif
