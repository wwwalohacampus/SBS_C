#include <stdio.h>

int main(void) {
    int income = 0;                 // ����
    double tax;                     // ����
    const double tax_rate = 0.12;   // ����
    // const : ����� �����ϴ� Ű����
    //         ����� ����� ���ÿ� �ʱ�ȭ
    //         ���� �ٲܼ� ����
    // tax_rate = 0.20;  (error)

    income = 1000;
    tax = income * tax_rate;        // 1000���� ���� 12%

    printf("������ %.1lf �Դϴ�. \n", tax);
    
    return 0;
}