#include <stdio.h>
/*
    ���ڿ� ���� ����� �Լ�
    1. puts(���ڿ�) : ���ڿ� ������ ����ϴ� �Լ�
    2. gets(������) : ���ڿ� ������ �Է¹޴� �Լ�
*/
int main(void) {

    char ch[30];
    gets(ch);
    puts(ch);
    // ���ڿ� ��� ��, �ڵ����� �ٹٲ�
    printf("���� ��\n");
    
    return 0;
}