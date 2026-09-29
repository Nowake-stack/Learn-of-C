#include <stdio.h>

// int main()
// {
//     int a = 10;
//     int b = 5;
//     printf("%d\n",10 * 12);
//     printf("%d\n",a + b);
//     return 0;
// }

// int main()
// {
//     int a = 10;
//     int b = 4;
//     printf("%d\n",a / b);
//     printf("%.3f\n",a / (float)b);  //有小数的除法，两端必须一个浮点数
//     return 0;
// }

//
// int main()
// {
//     int score = 5;
//     int score1 = (score /  20) *100;
//     int score2 = (score /  20.0) *100;  //不加浮点数格式，除出来的结果只会使0
//     printf("%d\n",score1);
//     printf("%d\n",score2);
//     return 0;
// }

// int main()
// {
//     int score = 9;
//     int score1 = score / 4;
//     int score2 = score % 4; // %-为取模运算符
//     printf("%d\n",score1);
//     printf("%d\n",score2);
//     return 0;
// }

int main()
{
    int a = 9;  //不叫赋值，叫初始化
    int b = 10;
    int c = 16;
    int score1; 

    // score1 = a * 4; //赋值
    // c = b = a + 7;  //连续赋值，极为不推崇
    a += 3; //复合赋值
    printf("%d\n",a); 
    a -= 3;
    printf("%d\n",a); 
    a *= 3;
    printf("%d\n",a); 
    a /= 3;
    printf("%d\n",a);
    a %= 3;
    printf("%d\n",a);
    return 0;
}
