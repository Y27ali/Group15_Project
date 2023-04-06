#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "TaskManager.h"

#define FILENAME "taskmanager.txt"

int main()
{
    char choice;


    while (1)
    {
        print_menu();
        printf("\nEnter your choice: ");
        scanf(" %c", &choice);
        choice = tolower(choice);

        switch (choice)
        {
        case 'a':
            break;
        case 'b':
            break;
        case 'c':
            break;
        case 'd':
            break;
        case 'e':
            break;
        case 'f':
            break;
        case 'g':
            break;
        case 'h':
            break;
        case 'i':
            break;
        case 'j':
            break;
        case 'k':
            printf("\nExiting the program!\n");
            exit(0);
        default:
            printf("\nInvalid input.\n");
        }
    }
}