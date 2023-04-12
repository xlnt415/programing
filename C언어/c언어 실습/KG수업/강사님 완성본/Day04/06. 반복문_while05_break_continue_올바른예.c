#include <stdio.h>

int main(void) {
	// 올바른 사용
	// 1. 유한반복시, 중간에 멈추거나, 넘길 때...
	// 2. 메뉴를 구현할 때...
	// -> 잘못된 값에 대해서 불필요한 과정은 밟지 않아야 한다.
	
	// 비교할 수 없으면 비교를 못해서 1을 배치한다.
	while (1) {
		int menu = 0;
		printf("1. HELLO출력\n2. GOOD BYE출력\n3. 종료\n>> ");
		scanf_s("%d", &menu);
		if (menu < 1 || menu>3) {
			printf("잘못된 선택입니다.\n");
			continue; // 조건이 만족되면 작동하는 소반복이 된다.
			// 굳이 반복문 다시 안만들어도 된다.
		}
		if (menu == 3) { 
			printf("종료합니다.\n");
			break; // 밑의 과정은 불필요해서 바로 종료한다.
			// 빠른 종료가 가능하다.
		}
		// 올바른 값이 들어왔으니, 그에 맞는 동작을 수행한다.
		if (menu == 1) printf("HELLO!\n\n");
		else if (menu == 2) printf("GOOD BYE!\n\n");
	}
	return 0;
}