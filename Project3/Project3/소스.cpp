#include <stdio.h>

void copy_array(int a[], int b[], int len) {
	int i;
	for (i = 0; i < len; i++)
		b[i] = a[i];
}
void copy_variable(int a, int b) {
	b = a;
}
¡¦
int A[5] = { 10, 20, 30 };
int B[5], i, x = 2018, y = 0;
copy_array(A, B, 5);