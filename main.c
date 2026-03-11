#include "student.h"

int main() {
    int choice;
    // 程序启动时加载
    load_from_file();
    
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
                delete_student();
                break;
            case 4:
                modify_student();
                break;
            case 5:
                search_student();
                break;
            case 6: 
                // 保存
                save_to_file();
                printf("感谢使用！数据已保存\n"); 
                return 0;
            default: printf("输入错误\n");
        }
        
        printf("\n按回车键继续...");
        getchar();
        getchar();//缓存
    }
    return 0;
}