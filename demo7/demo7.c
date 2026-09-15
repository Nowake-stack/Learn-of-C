#include <stdio.h>
#include <stdbool.h>

// int main()
// {
//     bool flag = true; // 使用 _Bool 类型表示布尔值
//     if(flag)
//         printf("Flag is true\n");
//     return 0;
// }

//sizeof 计算结果要用%zu 来输出
// int main()
// {
//     printf("Size of bool: %zu bytes\n", sizeof(bool));  //Size of bool: 1 bytes
//     printf("Size of char: %zu bytes\n", sizeof(char));  //Size of char: 1 bytes
//     printf("Size of unsigned char: %zu bytes\n", sizeof(unsigned char));    //Size of unsigned char: 1 bytes
//     printf("Size of int: %zu bytes\n", sizeof(int));    //Size of int: 4 bytes
//     printf("Size of long: %zu bytes\n", sizeof(long));    //Size of long: 4 bytes  C23标准中long类型在32位系统上是4字节，在64位系统上是8字节
//     printf("Size of long long: %zu bytes\n", sizeof(long long));    //Size of long long: 8 bytes
//     printf("Size of short int: %zu bytes\n", sizeof(short int));    //Size of short int: 2 bytes
//     printf("Size of float: %zu bytes\n", sizeof(float));    //Size of float: 4 bytes
//     printf("Size of double: %zu bytes\n", sizeof(double));  //Size of double: 8 bytes
//     printf("Size of long double: %zu bytes\n", sizeof(long double));    //Size of long double: 16 bytes
// }

// int main()
// {
//     int num = 100;
//     printf("%zu\n",sizeof(int)); // 输出 int 类型的大小
//     printf("%zu\n",sizeof(num)); // 输出 num 变量的大小
//     printf("%zu\n",sizeof num); // 变量可以省略括号
//     return 0;
// }

int main()
{
    short s = 12;
    int b = 10;
    printf("%zu\n",sizeof(s = b + 1));   //sizeof 运算符不会计算表达式的值，而是计算表达式的类型所占的字节数，所以这里输出的是 short 类型的大小，即 2
    printf("s = %d\n",s);
    return 0;
}