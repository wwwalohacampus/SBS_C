#include <stdio.h>

// max
int max(int* arr) {
    int max = arr[0];
    for (int i = 0; i < 5; i++) {
        if( max < arr[i] )
            max = arr[i];
    }
    return max;
}

// min
int min(int* arr) {
    int min = arr[0];
    for (int i = 0; i < 5; i++) {
        if( min > arr[i] )
            min = arr[i];
    }
    return min;
}

int main(void) {
    // 1. ���� 5�� �Է�
    int arr[5];
    printf("���� 5�� �Է� : ");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    int result1 = max(arr);
    int result2 = min(arr);

    printf("�ִ� : %d\n", result1);
    printf("�ּڰ� : %d\n", result2);

    return 0;
}