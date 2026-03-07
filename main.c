#include "student.h"

int main() {
    int choice;
    
    while (1) {
        print_menu();
        scanf("%d", &choice);
        
        switch(choice) {
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
        getchar();//缓存
    }
    return 0;
}