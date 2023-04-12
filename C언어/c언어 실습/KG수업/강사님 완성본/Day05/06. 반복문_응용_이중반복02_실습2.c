#include <stdio.h>

int main(void) {
	// 이중반복 만들기는 단일반복과 동일한 절차다.
	// 반복 코드 작성/운용은 문제가 안된다.
	// - 무엇이 변하냐?
	// - 얼마만큼 변하냐?
	// - 어디서 변하냐?
	// - 변한 것이 어디서 사용되냐?
	int size;
	printf("계단 단수 >> "); scanf_s("%d", &size);
	for (int y = 1; y <= size; y++) {
		for (int x = 1; x <= y; x++) {
			printf("ㅁ");
		}
		printf("\n");
	}
	// 단일 반복으로는 못한다...너무 어렵다...
	int count = 0;
	for (int i = 1; i <= size; i++) {
		count += i;
	}
	int count1 = 0;
	int limit = 1;
	for (int i = 1; i <= count; i++) {
		printf("ㅁ");
		count1++;
		if (count1 == limit) {
			count1 = 0;
			limit++;
			printf("\n");
		}
	}
	return 0;
}