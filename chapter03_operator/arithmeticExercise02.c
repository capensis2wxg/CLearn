#include <stdio.h>

int main() {

    //���绹��97��ż٣��ʣ�xx��������xx��

    //˼·
    //1. ����һ�� days ���� ����
    //2. ���� week ���� ����õ�����
    //3. ���� leftDays ���� ʣ�������
    //4  ʹ�� % ��  /


    //����
    int days = 97;
    int week = days / 7;
    int leftDays = days % 7;

    /*
    ����һ���������滪���¶ȣ������¶�ת�������¶ȵĹ�ʽΪ��
    5/9*(�����¶�-100),����������¶ȶ�Ӧ�������¶�

    ˼·
    1. �� huaShi �����¶�
    2. �� sheShi �����¶�
    3. ʹ�ù�ʽ������ת�� 5/9*(�����¶�-100)
    */

    double huaShi = 146.7;
    double sheShi = 5.0 / 9 * (huaShi - 100);

    printf("\n �����¶� %.2f ��Ӧ�������¶��� %.2f", huaShi, sheShi);
    printf("\n�� %d��������%d�� �ż�", week, leftDays);

}