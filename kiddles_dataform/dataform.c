#include <stdio.h>
#include "header.h"

int main(void) 
{
    int choice;
    int parent_choice;

    printf("Welcome, is your child less than 10yrs old?\nEnter 1 for yes and 2 for No: ");
    scanf("%i", &choice);
    if (choice == 1)
    {
        personal_info();
        correct_info();
    }
    else
    {
        printf("Thank you");
    }

}
