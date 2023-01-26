#include<stdio.h>
#include"processes.h"
static int nextprocessid(void)
{
    if(processescount == 5)
    {
        return 0;
    }
    else
    {
        static int order = 0;
        order++;
        return order;
    }
}

int createnewprocess(char str[])
{
    if(nextprocessid() == 0)
    {
        return 0;
    }
    else
    {
        processes[processescount].id = nextprocessid();
        strcpy(processes[processescount].name, str);
        processescount++;
    }
    return processes[processescount - 1].id;
}
void stopprocess(int number)
{
    int flag = 0;
    for(int i=0; i < processescount; i++)
    {
        if(flag)
        {
            processes[i - 1].id = processes[i].id;
            strcpy(processes[i - 1].name, processes[i].name);
            processes[i].id = 0;
            strcpy(processes[i].name, '\0');
        }
        if(processes[i].id == number)
        {
            flag = 1;
            processes[i].id = 0;
            strcpy(processes[i].name, '\0');
        }
    }
    processescount--;
}