#include <stdio.h>

int main(void) {

    int score = 0;
    char grade = 'F';
    printf("성적 : ");
    scanf("%d", &score);

    if( score <= 100 && score >= 90 ) {
        grade = 'A';
    }
    else if( score >= 80 ) {
        grade = 'B';
    }
    else if( score >= 70 ) {
        grade = 'C';
    }
    else if( score >= 60 ) {
        grade = 'D';
    }
    else {
        grade = 'F';
    }
    
    printf("등급은 %c 입니다.", grade);

    return 0;
}