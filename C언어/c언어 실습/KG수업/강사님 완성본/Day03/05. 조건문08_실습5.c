#include <stdio.h>

int main(void) {
	int sc1; int sc2; int sc3;
	double avg;
	char rank;
	printf("국어 점수 입력 >> ");
	scanf_s("%d", &sc1);
	printf("영어 점수 입력 >> ");
	scanf_s("%d", &sc2);
	printf("수학 점수 입력 >> ");
	scanf_s("%d", &sc3);
	avg = (sc1 + sc2 + sc3) / 3.0;
	// 범위가 있는 형태의 조건식일 경우 팁
	// - 제일 좁은 것부터 건다.
	if (avg >= 90) rank = 'A';
	else if (avg >= 80) rank = 'B';
	else if (avg >= 70) rank = 'C';
	else if (avg >= 60) rank = 'D';
	else rank = 'F';
	// C언어의 출력은 포맷팅처리가 항상 기본이다.
	// 문자열은....제한사항이 많다.
	printf("등급 : %c등급\n", rank);
	printf("평균 : %.1f점\n", avg);
	return 0;
}