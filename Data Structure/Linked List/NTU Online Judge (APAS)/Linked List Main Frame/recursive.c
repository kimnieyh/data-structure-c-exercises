#include <stdio.h>

void printRecursive(int* i) {
	if (*i == 0) {
		printf("\n");
		return;
	}

	int j = *i;
	printf("%d ", j--);
	printRecursive(&j);
	printf("%d ", j);

	// 얘가 들어온 파라미터(11줄의 &j)를 바꿔주고 있음. 얘 없으면 쌓인 스택대로 j값 출력
	*i = j;
}

int main() {

	int i = 9;
	printRecursive(&i);

	return 0;
}