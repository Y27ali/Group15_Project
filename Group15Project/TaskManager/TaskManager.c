#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "TaskManager.h"

void print_menu()
{
	printf("To choose a function, enter its label:\n");
	printf("a) Add a task\n");
	printf("b) Delete a task\n");
	printf("c) Update a task\n");
	printf("d) Display a single task by searching its name\n");
	printf("e) Display all tasks by searching a date\n");
	printf("f) Display all tasks between 2 dates\n");
	printf("g) Display all tasks\n");
	printf("h) Display all tasks sorted by priority\n");
	printf("i) Display all tasks, between 2 dates, of given priority\n");
	printf("j) Display all tasks of given priority\n");
	printf("k) Quit\n");
}