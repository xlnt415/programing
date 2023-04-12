#include <stdio.h>

int main(void) {
	// 배열 : 값들을 하나의 변수명을 관리하기 위한 것
	// 주의사항 : 변수명만 간단해질 뿐, 물리적인 수량은 변동없다.
	
	// 배열의 선언 : 자료형 변수명(복수형)[변수의수량];
	int values[4]; // values라는 대표명으로 관리되는 변수 4개가 생성됨
	
	// 배열의 초기화 : 선언과 동시에 하던지, 개별 처리해야 한다.
	// values = 10; 불가능. 변수를 관리하기 위해 고정값으로 설정된 변수
	values[0] = 10; values[1] = 20; // 인덱스를 이용한다.
	values[2] = 30; values[3] = 40; // 0번부터 시작. 음수번호없음.

	// 같이 할 경우, 초기화목록표를 준비해서 저장한다.
	double fvalues[3] = { 3.1,3.2,3.3 }; // 배열 아님
	
	// 사용방식 : 배열변수는 쓸모없음. 주소값이며, 일반연산용도가 아님.
	printf("%p %p\n", values, fvalues);
	// 인덱싱한다. 인덱스범위 초과하지 않도록 주의...
	printf("%d %d %d %d\n", values[0], values[1], values[2], values[3]);
	printf("%.2f\n", fvalues[0]);
	printf("%.2f\n", fvalues[1]);
	printf("%.2f\n", fvalues[2]);

	// 배열에서는, 인덱스를 붙인 상태가 변수이고...
	// 이 변수에 대해서, 동일하게 배운 내용을 적용한다.
	printf("result1 : %d\n", values[0] + values[1]);
	// 변수를 만드는 방식, 쓰는 방식, 모양만 바뀌었고, 별 차이 없음.
	printf("실수값 3개 입력 >> ");
	scanf_s("%lf%lf%lf", &fvalues[0], &fvalues[1], &fvalues[2]);
	printf("%.2f\n", fvalues[0]);
	printf("%.2f\n", fvalues[1]);
	printf("%.2f\n", fvalues[2]);
	return 0;
}