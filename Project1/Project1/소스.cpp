#include <stdio.h>

#define MAX_SIZE 10  // MAX_SIZE ����

void sub(int x, int arr[]) {
    x = 10;      // x ���� main �Լ��� ������ ��ġ�� ����
    arr[0] = 10; // arr[0] ���� �����
}

void main() {
    int var = 0, list[MAX_SIZE];
    int list[0] = 0;
    int sub(var, list);
    printf("var: %d, list[0]: %d\n", var, list[0]);  // var�� ������ 0, list[0]�� 10
}
