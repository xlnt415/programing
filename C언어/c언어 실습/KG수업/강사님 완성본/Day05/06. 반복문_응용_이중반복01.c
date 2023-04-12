#include <stdio.h>

int main(void) {
	// 이중반복 : 반복문이 중첩된 형태
	// 쓰는 이유 : 단일반복으로 처리가 안되는 것들이 있다.
	char shape[100];
	int size;
	printf("모양 >> "); scanf_s("%s", shape, 100);
	printf("크기 >> "); scanf_s("%d", &size);
	// 단일반복 돌려도 되지만, 경우에 따라선 연동시키기 어렵다...
	//for (int i = 1; i <= size*size; i++) {
	//	printf(shape);
	//	if (i % size == 0) printf("\n");
	//}
	
	// 이중 반복은 파악하는 과정에서 일정한 내용이 반복된다.
	// 그 내부에서 작은 반복형태가 나타난다.
	for (int y = 1; y <= size; y++) {
		// 가로축/세로축이 등장한다.
		// 외부반복은 세로축을 담당(시간의 분단위)
		// 내부반복은 가로축을 담당(시간의 초단위)
		for (int x = 1; x <= size; x++) {
			printf(shape);
			// printf("(%d, %d) ", y, x);
		}
		printf("\n");
	}
	return 0;
}