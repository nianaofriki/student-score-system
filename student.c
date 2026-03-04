#include "student.h"//引入头文件
#include <stdlib.h>
#include <stdio.h>

Student students[MAX_STUDENTS];
int student_count=0;

void print_menu(){
    system("cls");//执行系统命令——清屏
    printf("\n=== 学生成绩管理系统 ===\n");
    printf("1. 添加学生\n");
    printf("2. 显示所有学生\n");
    printf("3. 退出\n");
    printf("请选择: ");
}//再写一遍是为了修改时方便移植

void add_student(){
    if(student_count>=MAX_STUDENTS){
        printf("学生数量已达上限！\n");
        return;//不是return 0    
    }
    printf("\n--- 添加学生 ---\n");
    printf("请输入学号: ");
    scanf("%s", students[student_count].id);
    printf("请输入姓名: ");
    scanf("%s", students[student_count].name);
    printf("请输入年龄: ");
    scanf("%d", &students[student_count].age);
    printf("请输入成绩: ");
    scanf("%f", &students[student_count].score);
    student_count++;
    printf("添加成功！当前共有 %d 名学生\n", student_count);
}

void display_all(){
    if(student_count==0){
        printf("暂无学生数据！\n");
        return; 
    }//先放特殊情况
    printf("\n--- 学生列表 ---\n");
    for (int i = 0; i < student_count; i++) {
        printf("学号: %s, 姓名: %s, 年龄: %d, 成绩: %.1f\n",
               students[i].id, 
               students[i].name, 
               students[i].age, 
               students[i].score);
    }
}