#include <stdio.h>

#define MAX_SIZE 10  // MAX_SIZE 정의

void sub(int x, int arr[]) {
    x = 10;      // x 값은 main 함수에 영향을 미치지 않음
    arr[0] = 10; // arr[0] 값은 변경됨
}

void main() {
    int var = 0, list[MAX_SIZE];
    int list[0] = 0;
    int sub(var, list);
    printf("var: %d, list[0]: %d\n", var, list[0]);  // var는 여전히 0, list[0]은 10
}
