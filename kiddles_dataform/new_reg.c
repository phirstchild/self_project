#include <stdio.h>
#include "header.h"

int new_reg(void)
{
    int new_reg_choice;
    
    printf("Do you have another child to be registered?\n Enter 1 for yes and 2 for No");
    scanf(" %d", &new_reg_choice);
    if (new_reg_choice == 1)
        {
            main();
        }
        else
        {
            printf("Thank you");
        }
}
