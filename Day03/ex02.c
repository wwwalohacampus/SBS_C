#include <stdio.h>

int main(void) {
    int age;
    char name[10];          // �迭 ����
    // �迭�� �̸� = �ּ�

    printf("���̿� �̸��� �Է��غ����� \n");
    scanf("%d %s", &age, name);
    printf("���� : %d \n", age );
    printf("�̸� : %s \n", name );

    return 0;
}