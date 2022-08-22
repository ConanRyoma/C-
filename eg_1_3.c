/*
    eg 1.3 题目要求：求两个整数中的较大值
*/

#include<stdio.h>

int main()
{

/*  自己写错的代码
    int a,b,max;
    a = 10;
    b = 20;
    if a > b, {max = a;}
        else {max = b;}
    printf("The bigger one is %d.\n",max);
*/
    // 课本上的：自定义一个max函数


    int max(int x,int y); // 对被调用函数max的声明
/*
    为什么要声明函数？
    原因：主函数里要使用max函数，但max函数的定义是在main函数的后面，程序是自上而下编译，当程序编译至c=max（a,b）时，系统并不知道max是啥
    所以为了使编译系统可以识别max函数，就要在调用max函数前使用 int max（int x,int y）对max函数进行声明，告诉编译系统max是啥
*/
    int a,b,c;
    // 让用户输入变量a和变量b的值
    printf("a = ? .\n");
    scanf("%d",&a); // scanf 和printf 是C语言的输入输出函数；& 是地址符，&a代表 变量a的地址；这行代码的意思是，用户输入变量a的值，键盘读取a的值，并将其送到变量a的地址处
    printf("b = ? .\n");
    scanf("%d",&b);

    // 书本里用的另一种合起来的：scanf（“%d，%d”,&a,&b）; 输入的时候是比如：8，5（用逗号区分

    c = max(a,b); // 调用max函数并执行，将返回的值（z）赋予变量c
    printf("max = %d\n",c);

    return 0;

}

// 自定义的max函数
// 自定义函数的int max（）的括号里定义的是输入的变量，而不是输出的变量
// max函数里面定义输出变量，注意，不要又重新定义一次输入变量，会有bug
// 自定义函数要放在独立于main函数的外面
int max(int x,int y)
{
    int z;
    if(x>y)z=x; // if ...else 语句的正确用法
    else z=y; // max函数的逻辑和我最开始自己写的是一样的，但是语法和写的方式是错的
    return(z); // 执行max函数后，返回结果z；返回值是通过函数名max带回main函数的
    // 只有用return语句才可以将求出来的z值 作为函数的值 & 返回到调用它的位置
}

