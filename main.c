#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void over()
{
    printf("退出程序\n");
}
void game()
{
    // 1.生成随机数
    int ret = 0;
    int guess=0; //接收猜的数字
    // 拿时间戳来设置随机数的生成起始点
    // time_t time(time_t *timer)
    // RAND_MAX 32767
    // 生成1-100随机数
    ret = rand()%100+1;
    // printf("%d\n", ret);
    // 2.猜数字
    while (1)
    {
        printf("请开始猜数字:>");
        scanf("%d", &guess);
        if (guess>ret)
        {
            printf("猜大了\n");
        }else if (guess<ret)
        {
            printf("猜小了\n");
        }else{
            printf("猜对了\n");
            Sleep(1000);
            system("cls");
            break;
        }
    }
}
int main()
{
    system("chcp 65001");
    system("cls");
    int inp = 0;
    // srand定义一次就可以
    srand((unsigned int)time(NULL));

    do
    {
        printf("--------------------------------------------------------\n");
        printf("----------    1.开始游戏         0.退出游戏    ---------\n");
        printf("--------------------------------------------------------\n");
        scanf("%d", &inp);
        switch (inp)
        {
        case 1:
            game();
            break;
        case 0:
            over();
            break;
        default:
            printf("输入错误\n");
            break;
        }
    } while (inp);
    return 0;
}