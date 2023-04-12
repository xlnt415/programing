#include <stdio.h>
int input_data(void) {
	int num;
	printf("정수 하나 입력 >> ");
	scanf_s("%d", &num);
	return num;
}
int make_sum(int num) {
	int result = 0;
	while (num > 0) {
		result += num;
		num--;
	}
	return result;
}
void show_result(int result) {
	printf("결과 : %d\n", result);
}

int main(void) {
	// 4형식 : 프로그램 그 자체
	// 3형식 : 자료
	// 2형식 : 정보
	// 1형식 : 처리
	// -> 코드를 용도별로 구분해서 나누고
	//   해당 구간을 그대로 복붙한 다음
	//   값의 흐름만 파악하여 매개변수/return을
	//   추가하면 작동한다!
	int num = input_data();
	int result = make_sum(num);
	show_result(result);
	return 0;
}