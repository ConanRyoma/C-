/*
��һ��ϰ��6
����a,b,c����ֵ����������
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
    if(x > y)middle = x; // �����if ... else ������治Ҫд��if��int x > int y������ǰ���ظ��ˣ�ǰ���Ѿ�������������
    else middle = y;
    if(middle > z)m = middle;
    else m = z;
/*
���߿��Ըĳɣ�
int m;
if (x>y)m=x;
    else m=y;
if(m<z)m=z;
���д���ǲο��α��ο��𰸵ĵõ�����һ��д��
*/
    return m;
}
