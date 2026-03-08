#include "student.h"
#include <stdlib.h>

Student students[MAX_STUDENTS];
int student_count = 0;
//基本功能
void print_menu() {
    system("cls");
    printf("\n=== 学生成绩管理系统 ===\n");
    printf("1. 添加学生\n");
    printf("2. 显示所有学生\n");
    printf("3. 删除学生\n");
    printf("4. 退出\n");
    printf("请选择: ");
}
//添加
void add_student() {
    char temp_id[MAX_ID];
    if (student_count >= MAX_STUDENTS) {
        printf("学生数量已达上限！\n");
        return;
    }
    //输入
    printf("\n--- 添加学生 ---\n");
    printf("请输入学号: ");
    scanf("%s", temp_id);
    //防止重复
    for (int i = 0; i < student_count; i++) {
        if (strcmp(students[i].id, temp_id) == 0) {
            printf("学号已存在！添加失败\n");
            return;
        }
    }

    strcpy(students[student_count].id, temp_id);

    printf("请输入姓名: ");
    scanf("%s", students[student_count].name);
    printf("请输入年龄: ");
    scanf("%d", &students[student_count].age);
    printf("请输入成绩: ");
    scanf("%f", &students[student_count].score);
    
    student_count++;
    printf("添加成功！当前共有 %d 名学生\n", student_count);
}
//删
void delete_student(){
    //00
    if(student_count==0){
        printf("暂无学生数据！\n");
        return;
    }

    char id[MAX_ID];
    printf("\n--- 删除学生 ---\n");
    printf("请输入要删除的学号: ");
    scanf("%s", id);
    //往前排
    for(int i=0;i<student_count;i++){
        for(int j=i;j<student_count-1;j++){
            students[j]=students[j+1];
        }
        student_count--;
        printf("删除成功！\n");
        return;
    }

    printf("未找到该学号！\n");
}
//展示
void display_all() {
    //00
    if (student_count == 0) {
        printf("暂无学生数据！\n");
        return;
    }
    
    printf("\n--- 学生列表 ---\n");
    for (int i = 0; i < student_count; i++) {
        printf("学号: %s, 姓名: %s, 年龄: %d, 成绩: %.1f\n",
               students[i].id, 
               students[i].name, 
               students[i].age, 
               students[i].score);
    }
}