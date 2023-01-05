#include <stdio.h>
#include "header.h"

int correct_info(void)
{
    int parent_choice;
    
    printf("Is the information correct?\n Enter 1 for yes or Enter 2 for no: ");
    scanf(" %d", &parent_choice);
    
    if (parent_choice == 1)
    {
        printf("Thank you, you will be contacted!\n");
        new_reg();
    }

    else
    {
        printf("Please re-enter all the information correctly\n");
        personal_info();
        correct_info();
    }
}
