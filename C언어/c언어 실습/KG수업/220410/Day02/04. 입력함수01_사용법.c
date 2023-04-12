#include <stdio.h>

int main(void) {
	// SCANF_S : scan formatted securly
	// -printf의 반대방향으로 작동한다
	/*int num = 100;
	printf("값 : %d\n", num);
	//값 불러오기 -> 문자열에 배치 -> 화면 출력
	// 화면 -> 문자열과 일치하는 내용 탐색 -> 변수에 저장
	scanf_s("값 : %d", &num); // 출력되지 않는다.
	printf("입력된 값 : %d\n", num);*/
	// 서식문자만 배치하여 입력받아 사용하는 구조
	// printf의 보조가 필요하다
	int num;
	printf("정수 입력해주세요 >> ");
	//대입연산을 이용하지 않는다.
	// -> 변수의 위치를 값으로 넘겨준다.
	// & : 주소연산자. 변수의 메모리주소를 꺼내주는 연산자
	scanf_s("%d", &num);
	printf("\n값 : %d\n", num);

	return 0;


}