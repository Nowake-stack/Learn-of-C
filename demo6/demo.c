#include <stdio.h>

int ADD(int x, int y) { 
    return x + y;
}

void print(int arr[], int size) {   //大括号里的语句构成复合语句
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    ;//空语句
    int a = 10;
    int b = 20;
    int sum = a + b;//表达式语句
    sum = ADD(a, b);//函数调用语句
    printf("The sum of %d and %d is: %d\n"/*输出结果*/, a, b, sum);//函数调用语句
    return 0;
}

/*注释方式1*/   //不支持嵌套，可一次注释多行，可夹在语句中间
//注释方式2

