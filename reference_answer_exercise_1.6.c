// �鱾�Ĳο��� ��һ��ϰ��6
// �α�û�н���max����������ֱ�Ӷ�����һ���м���

#include<stdio.h>
int main()
{
    int a,b,c,max;
    printf("please input a,b,c:\n");
    scanf("%d,%d,%d",&a,&b,&c);
    // Ҳ��ʹ�������Աȵķ���
    max = a; // ���û���ⲽ�������if ���Ҫ���if ...else
    /*
      �磺
      if (a > b)
        max = a;
        else max = b;
      if (max < c)
        max = c;
    */
    if (max < b)
        max = b; // �ȶԱ�a��b
    if (max < c)
        max = c; // �ٶԱ� �ղŶԱȳ��Ľϴ��� ��c

    printf("The largest number is %d\n",max);
    return 0;
}
