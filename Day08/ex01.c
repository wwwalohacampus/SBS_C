#include <stdio.h>

// �迭
// : ���� �ڷ����� ���� ���� ���� ���� �����ϴ� ����
/*
  ex) ���� : int a1 = 100;
            int a2 = 90;
            int a3 = 80;
            int sum = a1 + a2 + a3;
            double avg = (double) sum / 3;

        �迭 : int arr[5] = {10,20,30,40,50}; 
               char str[10] = "�ȳ��ϼ���";
*/
//  �迭 ����   : �ڷ��� ������[�迭����];
//  �迭 ���   : �迭�� �����ϴ� ������ ����
//  �迭 ����   : ����� ����
//  �迭 ��� ����  : ������ȣ(index) �� �迭 ����� ��ġ�� ����
//      �ε���(index) �� 0 ���� �����ϰ�, ���� ������ ���´�.
//      ex) 30  -->  arr[2]

int main(void) {
    // 10���� �л��� ������ �Է¹޾�, 
    // �հ� �� ����� ���Ͽ� ����Ͻÿ�.
    int sum = 0;
    int student[10];

    // �ݺ����� i : 0~9
    // �Է�
    for (int i = 0; i < 10; i++) {
        scanf("%d", &student[i]);
    }

    // ���
    for (int i = 0; i < 10; i++) {
        // �����հ�
        // (�����հ�) = (�����հ�) + (���);
        // sum = sum + student[i];
        sum += student[i];
        // printf("%d ", student[i]);
    }

    double avg = 0.0;
    avg = (double) sum / 10;
    printf("�հ� : %d\n", sum);
    printf("��� : %f\n", avg);
    
    
    return 0;
}