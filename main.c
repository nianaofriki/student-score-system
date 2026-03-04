#include "student.h"

#include <stdio.h>
int main(){
    int choice;
    while(1){
        printf("\n=== 学生成绩管理系统 ===\n");
        printf("1. 添加学生\n");
        printf("2. 显示所有学生\n");
        printf("3. 退出\n");
        printf("请选择: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            add_student();
            break;
        case 2:
            display_all();
            break;
        case 3:
            printf("感谢使用！\n");
            return 0;
        default:
            printf("输入错误\n");
        }
        printf("\n按回车键继续...");
        getchar();
        getchar();
        //第一个 getchar()读取并丢弃缓冲区里的那个换行符 \n。
        //第二个 getchar()等待再次按下回车键，让程序暂停在 “按回车键继续...” 的提示处，方便你看清屏幕信息，再继续下一轮菜单循环。
    }
    return 0;
}