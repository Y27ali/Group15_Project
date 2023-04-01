#pragma once

#define MAXTASK 50
#define MAXCATEGORY 20
#define MAXNOTE 50

typedef struct note
{
    char text[MAXNOTE];
} NOTE;

typedef struct Date
{
    int day;
    int month;
    int year;
} DATE;

typedef enum Priority
{
    ImportantandUrgent,
    ImportantandNUrgent,
    NImportantandUrgent,
    NImportantandNUrgent
} PRIORITY;

typedef struct task
{
    char task[MAXTASK];
    DATE date;
    PRIORITY priority;
    char category[MAXCATEGORY];
    NOTE note;
} TASK;

// Function declarations
void print_menu();
int add_a_task(TASK* task_list, int* task_nr, char* task, DATE date, PRIORITY priority, char* category);
int delete_a_task(TASK* task_list, int* task_nr, int index);
int update_a_task(TASK* task_list, int task_nr, int index, char* task, DATE date, PRIORITY priority, char* category);
void display_single_task_by_name(TASK* task_list, int task_nr, char* name);
void display_tasks_of_this_date(TASK* task_list, int task_nr, DATE date);
void display_range_of_tasks(TASK* task_list, int task_nr, DATE first_date, DATE end_date);
void display_all_tasks(TASK* task_list, int task_nr);
void load_file(TASK* task_list, int* task_nr, char* filename);
int save_file(TASK* task_list, int task_nr, char* filename);
void display_all_tasks_by_priority(TASK* task_list, int task_nr, PRIORITY priority);
void display_tasks_in_range_by_priority(TASK* task_list, int task_nr, DATE first_date, DATE end_date, PRIORITY priority);
void display_all_tasks_of_this_priority(TASK* task_list, int task_nr);