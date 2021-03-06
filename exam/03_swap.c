
/*
    main 함수에서 변수 2개를 선언하고,
    swap이라는 이름의 함수를 정의해서
    swap 함수를 호출하면서, 2개의 인자를 전달하고
    전달받은 두 변수를 값을 교환하는 코드를 swap 함수에 작성하시오.

    main 함수에서 2개의 변수를 출력하고,
    swap 함수를 호출하고,
    이후에 main 함수에서 2개의 변수를 출력하여,
    두 변수의 값이 변경된 결과를 확인하시오.

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

    // 함수 호출
    swap(&a, &b);

    printf("2\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
