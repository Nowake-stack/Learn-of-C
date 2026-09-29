#include <stdio.h>

// int main()
// {
//     int a =  10;
//     //a = a + 1;
//     //a += 1;
//     //a++;
//     ++a;
//     //以上四种写法都让a自增1
//     printf("%d\n",a);
//     return 0;
// }
//单目运算符
// int main()
// {
//     int a = 10;
//     int b = a++;    //先使用，在自增
//     int c = ++a;    //先自增，再加一 
//     printf("%d\n",a);
//     printf("%d\n",b);
//     printf("%d\n",c);
//     return 0;
// }
//强制类型转换
int main()
{
    //int a = 3.14;   //a为int,3.14为double,两边类型不同，编译器会警告
    int a = (int)3.14;
    return 0;
}