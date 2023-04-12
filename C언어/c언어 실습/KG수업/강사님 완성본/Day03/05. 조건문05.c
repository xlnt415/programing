#include <stdio.h>

int main(void) {
	int num1; int num2;
	printf("정수 2개 입력 >> ");
	scanf_s("%d%d", &num1, &num2);
	// 사용방법3. else 에 종속조건문 추가하기.
	// -> 버린 경우의 수중 필요한 것을 건져올려 쓰는 방법.
	
	// 문법 : 종속문이 한줄이면, 중괄호를 없앨 수 있다.
	// else if : 규칙에 따라서 중괄호를 없애면 나오는 결과물
	if (num1 > num2) printf("첫번째가 더 큽니다.\n");
	// (num1 <= num2) && (num2 > num1)
	else if (num2 > num1) printf("두번째가 더 큽니다.\n");
	// (num1 <= num2) && (num2 <= num1)
	else printf("서로 같습니다.\n");
	
	// 마지막에 else가 없다 -> 사용방법1
	// else가 있다 -> 사용방법2
	return 0;
}