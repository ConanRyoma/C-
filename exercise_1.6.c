/*
第一章习题6
输入a,b,c三个值，输出最大者
*/
#include<stdio.h>
int main()
{
    int max(int x,int y,int z);
    int a,b,c,result;
    printf("Input value of a, b, c.\n");
    scanf("%d,%d,%d",&a,&b,&c);
    result = max(a,b,c);
    printf("The maximum one is %d.",result);
    return 0;
}

int max(int x,int y,int z)
{
    int middle,m;
    if(x > y)middle = x; // 这里的if ... else 语句里面不要写成if（int x > int y），和前面重复了，前面已经声明过变量了
    else middle = y;
    if(middle > z)m = middle;
    else m = z;
/*
或者可以改成：
int m;
if (x>y)m=x;
    else m=y;
if(m<z)m=z;
这个写法是参考课本参考答案的得到的另一种写法
*/
    return m;
}
