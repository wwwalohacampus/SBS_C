#include <stdio.h>

int main(void) {
    int income = 0;                 // 수입
    double tax;                     // 세금
    const double tax_rate = 0.12;   // 세율
    // const : 상수를 선언하는 키워드
    //         상수는 선언과 동시에 초기화
    //         값을 바꿀수 없다
    // tax_rate = 0.20;  (error)

    income = 1000;
    tax = income * tax_rate;        // 1000원에 대한 12%

    printf("세금은 %.1lf 입니다. \n", tax);
    
    return 0;
}