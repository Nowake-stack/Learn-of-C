#include  <stdio.h>

// int main()
// {
//     //32~127的数字
//     for(int i = 32; i <= 127; i++)
//     {
//         printf("%c\n",i);
//     }
//     return 0;
// }

// int main()
// {
    
//     printf("%c\n",88);  //打印字符

//     return 0;
// }

//字符串的末尾隐藏一个'\0'，表示字符串的结束
// void main()
// {
//     printf("%s\n","yes");  //打印字符串

// }

//char 字符类型
//int 整形
void  main()
{
    char arr1[] = "abc";
    char arr2[] = {'a','b','c','\0'};
    printf("%s\n",arr1);  //打印字符串1
    printf("%s\n",arr2);  //打印字符串2
}
