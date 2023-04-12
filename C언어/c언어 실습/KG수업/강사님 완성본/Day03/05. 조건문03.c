#include <stdio.h>

int main(void) {
	int num;
	printf("짝수는 홀수로, 홀수는 짝수로...");
	scanf_s("%d", &num);
	// 사용법2. else 추가하기. 무조건 둘 중 하나를 선택한다.
	// - 보고 싶은 경우의 수 외의 것을 모두 일괄로 처리할 수 있다.
	// 주의사항 : 같은 것을 포함시키지 않는다.
	//           달라지는 것을 달라지도록 하는게 목적이다.
	if (num % 2 == 0) {
		// num++;
		num++;
	}
	// 단독사용불가
	else {
		// num++;
		num--;
	}
	// 결과 변화/바꾸기 가능
	if (num % 5 == 0) {
		printf("5의 배수입니다.\n");
		printf("바뀐 값 : %d\n", num);
	}
	else {
		printf("5의 배수가 아닙니다.\n");
		printf("안보여줍니다.\n");
	}
	// +@ : else는 바로 위의 if만 담당한다.
	
	return 0;
}