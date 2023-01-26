#include <stdio.h>
#include "bitstate.h"
int main()
{
    int choice, diodenum, flag = 0;
    unsigned int diodestate;
    while (flag != 1)
    {
        printf("\nChoose one of the actions:");
        printf("\n1. Turn on a diode");
        printf("\n2. Turn off a diode");
        printf("\n3. Switch a diode(1 -> 0 || 0 -> 1)");
        printf("\n4. Check if a diode is on or off");
        printf("\n5. Check the state of all diodes");
        printf("\n6. Quit the program\n");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                printf("\nChoose a diode to turn on: ");
                scanf("%d", &diodenum);
                setbit(diodenum - 1);
                break;
            case 2:
                printf("\nChoose a diode to turn off: ");
                scanf("%d", &diodenum);
                unsetbit(diodenum - 1);
                break;
            case 3:
                printf("\nChoose a diode to switch: ");
                scanf("%d", &diodenum);
                togglebit(diodenum - 1);
                break;
            case 4:
                printf("\nWhich diode would you like to check: ");
                scanf("%d", &diodenum);
                if (isbitset(diodenum - 1) == -1)
                {
                    printf("Diode not found");
                }
                else
                    printf("Diode number %d --> %d", diodenum, isbitset(diodenum - 1));
                break;
            case 5:
                diodestate = getbitstate();
                printf("\nDiode state -> %u", diodestate);
                break;
            case 6:
                printf("\nQuiting the program...");
                flag = 1;
                break;

            default:
                printf("\nIncorrect choice");
                break;
        }
    }
    return 0;
}