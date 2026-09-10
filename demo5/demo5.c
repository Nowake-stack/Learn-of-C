#include <stdio.h>
#include <string.h>

// int main() {
//     printf("%C\n",'X');
//     printf("\130\n");  //八进制
//     printf("\x58\n");  //十六进制
//     printf("%c\n",88);  //十进制
//     return 0;
// }

//\0 \ddd
// int main(){
//     printf("\0\n");  //空字符 字符串结束标志
//     printf("%d\n",71);  //十进制数字
//     printf("%c\n",71);  //字符
//     printf("%d\n",071);  //八进制
//     return  0;
// }

int main() {
    // int a = strlen("abc");  //计算字符串长度
    //strlen统计的是\0之前的字符个数，不包含\0
    int a = strlen("C:\test\16\test.c");  //计算字符串长度 -- 13
    //转义字符算作一个字符
    printf("%d\n",a);
    return 0;
}

