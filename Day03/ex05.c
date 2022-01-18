#include <stdio.h>
#define MAX 100

int main(void) {
    // 상수 
    //  : 프로그램 실행 동안 변하지 않는 값
    //  - 키워드 : cosnt
    int number = 3;
    const int NUM = 5;

    // 변수는 값을 변경할 수 있음
    number = 10;

    // 상수는 값을 변경할 수 없음
    // NUM = 10;  // (에러)

    printf("number(변수) : %d \n", number);
    printf("NUM(상수) : %d \n", NUM);
    printf("MAX(상수) : %d \n", MAX);

    return 0;
}