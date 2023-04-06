#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "taskManager.h"
#include "file.h"


void load_file(TASK* task_list, int* task_nr, char* filename)
{
    FILE* fp = fopen(filename, "r");
    if (fp == NULL)
    {
        printf("Could not open file %s\n", filename);
        return;
    }

    char line[200];
    while (fgets(line, sizeof(line), fp) != NULL)
    {
        if (line[0] == '\n') continue; // Ignore empty lines
        if (*task_nr >= MAXTASK) break; // Max limit reached

        char task[MAXTASK];
        char category[MAXCATEGORY];
        char note[MAXNOTE];
        DATE date;
        PRIORITY priority;

        // Parse line into variables
        if (sscanf(line, "%d-%d-%d,%d,%[^,],%[^,],%[^\n]", &date.year, &date.month, &date.day, (int*)&priority, task, category, note) != 7)
        {
            printf("Invalid line in file %s\n", filename);
            continue;
        }

        // Add task to list
        add_a_task(task_list, task_nr, task, date, priority, category);
        strcpy(task_list[*task_nr - 1].note.text, note);
    }

    fclose(fp);
}

int save_file(TASK* task_list, int task_nr, char* filename)
{
    FILE* fp = fopen(filename, "w");
    if (fp == NULL)
    {
        printf("Could not open file %s\n", filename);
        return 0;
    }

    for (int i = 0; i < task_nr; i++)
    {
        TASK* task = &task_list[i];
        fprintf(fp, "%d-%d-%d,%d,%s,%s,%s\n", task->date.year, task->date.month, task->date.day, task->priority, task->task, task->category, task->note.text);
    }

    fclose(fp);
    return 1;
}