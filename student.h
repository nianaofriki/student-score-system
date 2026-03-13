// 头文件（声明）	所有函数的声明
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
void modify_student();
void search_student();
void save_to_file();
void load_from_file();
void sort_by_score(int ascending);  // 1升序 0降序
void show_statistics()

#endif