#include <stdio.h>
//����������Ҫ��ͷ�ļ�(�û�ͷ�ļ�)
#include "../myfun.h"

int main() {
    //ʹ��myCal ��ɼ�������
    int n1 = 10;
    int n2 = 50;
    char oper = '-';
    double res;
    //����myfun.c �ж���ĺ��� myCal
    res = myCal(n1, n2, oper);

    printf("\nres=%.2f", res);

    sayHello();

}