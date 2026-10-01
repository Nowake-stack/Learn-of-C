//printf函数与scanf函数使用
#include <stdio.h>

int main()
{
    int number = 3;
    char name[20] = "tom";
    printf("请输入一个整数：\n"); //参数文本输出到屏幕上，‘f’表示format（格式化）
    printf("there are %d apples\n",number); //%d-占位符-整数
    printf("%s will come topnight\n",name); //%s-占位符-字符串
    printf("%%\n"); //%%-输出一个百分号
    printf("there are %5d apples\n",number);    //%5d-输出整数，宽度为5，右对齐
    printf("there are %-5d apples\n",number);   //%-5d-输出整数，宽度为5，左对齐
    printf("there are %+d apples\n",number);    //%+d-输出正数，带符号
    printf("%f\n",3.14);    //%f-占位符，默认输出六位小数
    printf("%12f\n",3.14);  //%12f-输出浮点数，宽度为12，右对齐
    printf("%.2f\n",3.14);  //%.2f-输出两位小数-当位数不足时，会自己四舍五入
    printf("%10.2f\n",3.14);   //%10.2f-输出两位小数，宽度为10，右对齐
    printf("%*.*f\n",10,2,3.14);    //%*.*f-输出浮点数，宽度为10，小数位为2，右对齐
    printf("%s\n","hello");
    printf("%.3s\n","hello");   //%.3s-输出字符串，最多输出3个字符
    printf("%10s\n","hello"); //%10s-输出字符串，宽度
    return 0;
}

