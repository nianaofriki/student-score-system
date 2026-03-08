#ifndef STUDENT_H//防止头文件被重复包含
#define STUDENT_H

#include <stdio.h>
#include <string.h>

#define MAX_NAME 20
#define MAX_ID 15
#define MAX_STUDENTS 100

typedef struct {
    char id[MAX_ID];
    char name[MAX_NAME];
    int age;
    float score;
} Student;

extern Student students[MAX_STUDENTS];//结构体+数组名
extern int student_count;

void print_menu();
void add_student();
void display_all();
void delete_student();

#endif