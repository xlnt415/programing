#include <stdio.h>

int main(void) {
	// 코드 작성시 주의사항
	// - 이게 될까 두려워하지 말고
	//   이게 된다는 생각으로 작성하자.
	// - 안되는 것? Ctrl+F5로 실행조자 안되는 것
	// - 잘못된 것? Ctrl+F5로 실행했는데, 원하는 결과가 안나옴...

	// 각 단은 반복에 의해서 처리되고
	// 전체는 다시 반복에 의해서 처리된다.
	for (int y = 1; y <= 9; y++) {
		for (int x = 1; x <= 9; x++) {
			printf("%d x %d = %d\n", y, x, y * x);
		} printf("\n");
	}
	return 0;
}