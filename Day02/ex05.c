#include <stdio.h>   // ǥ��������� �ٷ�� �������
#include <string.h>  // ���ڿ��� �ٷ�� �������

int main(void) {
    char phone[10] = "Samsung"; // [s][a][m][s][u][n][g][][][]

    printf("����Ʈ�� �̸� : %s \n", phone);
    // ���ڿ� ���� �Լ� - strcpy
    // strcpy(������� ����, ������ ���ڿ�);
    strcpy(phone, "IPhone 12");
    printf("����Ʈ�� �̸� : %s \n", phone);
    
    return 0;
}