
/*
    main �Լ����� ���� 2���� �����ϰ�,
    swap�̶�� �̸��� �Լ��� �����ؼ�
    swap �Լ��� ȣ���ϸ鼭, 2���� ���ڸ� �����ϰ�
    ���޹��� �� ������ ���� ��ȯ�ϴ� �ڵ带 swap �Լ��� �ۼ��Ͻÿ�.

    main �Լ����� 2���� ������ ����ϰ�,
    swap �Լ��� ȣ���ϰ�,
    ���Ŀ� main �Լ����� 2���� ������ ����Ͽ�,
    �� ������ ���� ����� ����� Ȯ���Ͻÿ�.

*/

#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {

    int a = 10, b = 20;
    printf("1\n");
    printf("a = %d, b = %d\n", a, b);

    // �Լ� ȣ��
    swap(&a, &b);

    printf("2\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
