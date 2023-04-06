#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#include "taskManager.h"

int add_a_task(TASK* task_list, int* task_nr, char* task, DATE date, PRIORITY priority, char* category)
{
    if (*task_nr >= MAXTASK) return 0; // Max limit reached

    // Add task to list
    strcpy(task_list[*task_nr].task, task);
    task_list[*task_nr].date = date;
    task_list[*task_nr].priority = priority;
    strcpy(task_list[*task_nr].category, category);
    (*task_nr)++;
    return 1;
}