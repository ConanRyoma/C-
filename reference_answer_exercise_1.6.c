// 书本的参考答案 第一章习题6
// 课本没有建立max函数，而是直接定义了一个中间量

#include<stdio.h>
int main()
{
    int a,b,c,max;
    printf("please input a,b,c:\n");
    scanf("%d,%d,%d",&a,&b,&c);
    // 也是使用两两对比的方法
    max = a; // 如果没有这步，后面的if 语句要变成if ...else
    /*
      如：
      if (a > b)
        max = a;
        else max = b;
      if (max < c)
        max = c;
    */
    if (max < b)
        max = b; // 先对比a和b
    if (max < c)
        max = c; // 再对比 刚才对比出的较大数 与c

    printf("The largest number is %d\n",max);
    return 0;
}
