#include <stdio.h>
#include <string.h>
/*
    # ����ü �迭
    : ����ü�� �̷���� �迭
      (�迭�� ��Ұ� ����ü �ڷ����� �迭)

    * �迭 : ���� �ڷ����� ���� ���� �����͸� �����ϴ� ����

*/

// ����ü ����
struct person {
    // �̸�, ����
    char name[30];
    int age;
};


int main(void) {
    // ����ü �迭 ����
    struct person boy[3] = {
        {"���ڵ�", 12},
        {"���ڵ�", 14},
        {"���ڵ�", 16}
    };

    // ����ü �迭 ����
    struct person girl[3];
    strcpy( girl[0].name, "���ڵ�");
    strcpy( girl[1].name, "���ڵ�");
    strcpy( girl[2].name, "���ڵ�");

    girl[0].age = 10;
    girl[1].age = 20;
    girl[2].age = 30;

    for (int i = 0; i < 3; i++){
        // ���
        printf("boy �� �̸��� %s, ���̴� %d \n", boy[i].name, boy[i].age);
        printf("girl �� �̸��� %s, ���̴� %d \n", girl[i].name, girl[i].age);
        printf("\n");
    }

    return 0;
}