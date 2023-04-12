#include <stdio.h>

int main(void) {
	// 이중반복 : 반복이 한번 중첩된 것
	for (int y = 1; y <= 21; y += 5) {
		for (int x = y; x <= y + 4; x++) {
			printf("%2d ", x);
		} printf("\n");
	}
	// 반복횟수에 집중해서 처리할 수 있다.
	int num = 1;
	for (int y = 1; y <= 5; y++) {
		for (int x = 1; x <= 5; x++) {
			printf("%2d ", num);
			num++;
		} printf("\n");
	}
	return 0;
}