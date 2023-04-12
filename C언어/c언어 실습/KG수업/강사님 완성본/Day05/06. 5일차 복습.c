#include <stdio.h>

int main(void) {
	// 제어문(Control Flow) : 코드의 진행을 제어한다.
	// 조건문 : 갈림길을 만들어서 진행한다.
	// 반복문 : 특정 지점을 설정한 다음 되돌아간다.

	// 무한반복 : 사용자의 입력에 따라서 반복의 종료여부가 결정된다.
	while (1) {
		// 비교할 수 없는 경우 조건식을 던져버릴 수 있다.
		int num;
		printf("양의 정수 입력 >> ");
		scanf_s("%d", &num);
		// 조건문 : 선택지중 하나를 선택하도록 만들어준다.
		if (num < 0) {
			printf("0이하의 값은 출력하지 않습니다.\n");
		}
		else if (num == 0) {
			printf("프로그램을 종료합니다.\n");
			break;
		}
		else {
			// 유한반복 : 정해진 만큼만 반복돌면 된다.
			for (int num1 = 1; num1 <= num; num1++) {
				printf("%d ", num1);
			} printf("\n");
		}
	}
	// while : if 단독사용의 연장선에 있지만...
	//        선택하는 용도로 쓰지 않는다. 반복실행이 목적이다.
	return 0;
}