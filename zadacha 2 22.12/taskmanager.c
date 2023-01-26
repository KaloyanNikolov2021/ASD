#include"processes.h"
int main(void)
{
    int number, id;
    int process_name[30];
    do
    {
        printf("Choose from option 1 to 4 by typing the corresponding number.\n");
        printf("1. Create a process\n");
        printf("2. Processes list\n");
        printf("3. Delete a process\n");
        printf("4. Exit the program\n");
        scanf("%d", &number);
        if(number == 1)
        {
            if(createnewprocess(process_name) == 0)
            {
                printf("\nThe maximum amount of processes (5) has been reached. You will have to delete some of them if you want to create space for new ones.");
            }
            break;
        }
        else if(number == 2)
            {
            for(int i = 0; i < processescount; i++)
            {
                printf("\nProcess id: %d, process name: %s", processes[i].id, processes[i].name);
            }
            break;
        }
        else if(number == 3)
        {
            printf("\nEnter the id of the process you'd like to stop.");
            scanf("%d", &id);
            stopprocess(id);
            break;
        }
        else if(number == 4)
        {
            break;
        }
        else
        {
            printf("Not a valid option");
            break;
        }
    } while(number != 4);
    return 0;
}
