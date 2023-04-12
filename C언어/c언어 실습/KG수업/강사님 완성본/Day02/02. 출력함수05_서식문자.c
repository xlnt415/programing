#include <stdio.h>

int main(void) {
	// 1. 내가 준비한 출력양식에 맞춰서 값을 배치하여 보여준다
	double fnum = 3.14;
	printf("결과 : %f\n", fnum);
	// 2. 내가 준비한 출력서식에 맞춰서 값을 변형한다
	printf("서식을 적용한 상태 : %.2f\n", fnum);

	// %X.Y서식문자
	// 서식문자 : c, s, d, f 등등
	// X : 폭 설정. 정밀하게 정렬하는 용도
	int num = 56;
	printf("->%d<-\n", num); // 기본상태(0)
	printf("->%3d<-\n", num); // 폭 설정(3칸) & 우측정렬
	printf("->%-3d<-\n", num); // 폭 설정(3칸) & 좌측정렬
	// .Y : f 서식문자에 적용하고, 소수점 조절.
	// - 소수점 2자리면 충분하다.
	double value = 3.456;
	printf("%f\n", value);
	printf("%.3f\n", value); // 세번째까지
	printf("%.2f\n", value); // 두번째까지
	printf("%.1f\n", value); // 첫번째까지
	printf("%.0f\n", value); // 소수점 없음
	return 0;
}