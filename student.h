#ifndef STUDENT_H//避免重复定义
#define STUDENT_H

#include <stdio.h>
#include <string.h>

#define MAX_NAME 20
#define MAX_ID 15
#define MAX_STUDENTS 100

typedef struct{
    char id[MAX_ID];
    char name[MAX_NAME];
    int age;
    float score;
}Student;

extern Student students[MAX_STUDENTS];//类型+变量名
extern int student_count;

void print_menu();
void add_student();
void display_all();

#endif