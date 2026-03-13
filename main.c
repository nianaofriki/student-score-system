//主文件（调用）	main() 函数
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
                printf("\n请选择排序方式：\n");
                printf("1. 升序（低分→高分）\n");
                printf("2. 降序（高分→低分）\n");
                printf("请选择: ");
                int order;
                scanf("%d", &order);
                if (order == 1) {
                    sort_by_score(1);  // 升序
                } else if (order == 2) {
                    sort_by_score(0);  // 降序
                } else {
                    printf("输入错误\n");
                }
                break;
            case 7: 
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