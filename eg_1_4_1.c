// Chapter 1.4.1 ����1.1��Ҫ������Ļ�������This is a C program��

// ����file��·����������ģ��ᵼ���޷���������bug�����Ա���·��ȫΪӢ������

#include<stdio.h> //���Ǳ���Ԥ����ָ��
/*
    ʹ�ú������е������������ʱ������Ҫ�ṩ�йش˺�������Ϣ���������Щ������������������ͺ�Ķ��塢ȫ�����Ķ���
    �� #include<stdio.h> ��stdio.h ��ϵͳ�ṩ��һ���ļ�����stdio�ǡ�standard input & output������д��.h��ͷ�ļ�����˼����Ϊ��Щ�ļ��Ƿ��ڳ�����ļ�ģ��Ŀ�ͷ
    ���������������Ϣ�����Ѿ���stdio.h�ļ��У�ʹ�� #include ����Ԥ����ָ�� ����Щ��Ϣ����ʹ�ã�

    ����ע�������֣�һ���ǵ���ע��//����һ���ǿɵ��пɶ���ע�� �������õ������Ҳ������ʽע��
    �ڳ������Ԥ���봦����ʱ�򣬻Ὣÿ��ע���滻Ϊһ���ո������ڱ���ʱע�Ͳ��־Ͳ������Ŀ�����
*/
int main() // main�Ǻ���������ʾ��������int��ʾ����������Ϊ���ͣ���ִ�����������õ�һ������ֵ�����ֵ������
{
    printf("This is a C program.\n"); // printf�����������˫Ʋ�ţ�������\n�ǻ��з������λ��������һ�п�ͷ

    printf("//how do you do!\n");

    printf("/*how do you do!*/\n");

    // ����ǵڶ������ֱ�д��ʽʹ��ע�ͣ��ᱻʶ��Ϊ�ַ�����������ע��

/*
    eg 1.2 ��ĿҪ������������֮��
*/
    int a,b,sum; // �������֣�����a,b,sum��Ϊ���ͱ���
    a = 10;
    b = 20; // ��ֵ���
    sum = a + b;

    printf("sum is %d.\n",sum); // ������ַ�����sum is��������ĸ�ʽ��%d ʮ����������������ı���������sum��

    return 0; // ��ʾ��main����ִ�н���ǰ���Ὣ����0��Ϊ����ֵ�����ص����ú�������
    // ����������������ʱ���õ��ĺ���ֵ��0����ִ��main���������쳣�����ʱ������ֵΪ�������������ǿ������ò���ָ����main�����ķ���ֵ���ж�main�����Ƿ�������ִ��
}
// output �е�Press any key to continue.����˼�� ��������������һ����
// ������������������֮����Ļ������ʾ���н�������Ƿ��س��򴰿ڣ��Ա��ڽ�����һ����������ĳ���
