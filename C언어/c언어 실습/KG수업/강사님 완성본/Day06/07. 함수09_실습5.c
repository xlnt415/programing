#include <stdio.h>

char upper(char ch) {
	if (ch >= 'a' && ch <= 'z') ch -= 32;
	return ch;
}
double get_avg(int count) {
	double avg = 0;
	int tmp;
	printf("%d개의 값 >> ", count);
	for (int i = 1; i <= count; i++) {
		scanf_s("%d", &tmp);
		avg += tmp;
	}
	return avg / 5;
}

int main(void) {
	// 조건1번 실행예시코드
	// 소문자 : 97(a) ~ 122(z), 대문자 : 65(A) ~ 90(Z)
	// 둘 차이는 32이고, 해당 범위가 문자 범위입니다.
	printf("안바뀐 값 : %c\n", upper('A')); // A
	printf("바뀐 값 : %c\n", upper('a')); // A
	printf("안 바뀐 값 : %c\n", upper('!')); // !

	// 조건2번 실행예시코드
	double avg = get_avg(5);
	printf("5번 입력을 받아 저장한\n정수들의 평균 : %.2f\n", avg);
	return 0;
}