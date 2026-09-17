#include <stdio.h>
#include <limits.h>
#include <float.h>

// int main()
// {
//     size_t num; // 定义一个 size_t 类型的变量 num,size_t 是 C 语言中用于表示对象大小的无符号整数类型，通常用于 sizeof 运算符的返回值类型。它的大小取决于平台和编译器，通常在 32 位系统上为 4 字节，在 64 位系统上为 8 字节。
//     int a = 10;
//     printf("%zu\n",num = sizeof(a)) 
//     return 0;
// }

// int  num1 = 0;  //全局变量

// int  main()
// {
//     int age = 18;   //局部变量
//     float weight = 65.5f;   // 定义一个 float 类型的变量 weight，初始化为 65.5f,加上f防止报错
//     double height = 175.5;  // 定义一个 double 类型的变量 height，初始化为 175.5
//     int _2B;    // 2B 是一个非法的标识符，不能以数字开头
//     return 0;
// }

// int num = 10;  //全局变量-社会共享单车

// int main()
// {
//     int num2 = 20;  //局部变量-校园共享单车
//     {
//         int num3 = 30;  //块级变量-自己的单车
//         printf("num3 = %d\n", num3);  // 输出块级变量
//     }
//         // printf("num3 = %d\n", num3); // 这里会报错，因为 num3 是块级变量，只在其所在的块内可见，出了这个块就无法访问了
//     printf("num2 = %d\n", num2);  // 输出局部变量
//     printf("num = %d\n", num);    // 输出全局变量
//     return 0;
// }

int num = 10;  //全局变量-社会共享单车

int main()
{
    int num = 20;  //局部变量-校园共享单车

    printf("num = %d\n", num);  // 输出局部变量-局部优先原则

    return 0;
}