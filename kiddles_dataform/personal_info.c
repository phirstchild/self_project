#include <stdio.h>
#include "header.h"

int personal_info(void)
{
    char child_name[60];
    char date_of_birth[60];
    char guard_full_name[60];
    char address[50];
    int phone_number;
    char email[40];
    
    printf("Please enter your child\'s full name, starting with the Surname: ");
    scanf(" %s", &child_name);
    printf("Please enter your child\'s date of birth in the format (day/month/year): ");
    scanf("  %s", &date_of_birth);
    printf("Please enter the Parent or Guardian fullname, starting with the Surname: ");
    scanf(" %s", &guard_full_name);
    printf("Please enter the Parent or Guardian address: ");
    scanf("  %s", &address);
    printf("Please enter the Parent or Guaridan phone number: ");
    scanf(" %s", &phone_number);
    printf("Please enter the Parent or Guardian email address:");
    scanf(" %s", &email);
}
