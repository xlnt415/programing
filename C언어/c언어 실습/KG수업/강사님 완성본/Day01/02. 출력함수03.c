#include <stdio.h>

int main(void) {
	// 이스케이프문자 : 특수(기능)문자
	// 화폐기호를 국제키보드표준배열 기준으로, 역슬래시라고 읽는다.
	// 역슬래시 \, 슬래시 /
	// \n : 줄바꿈 90%
	printf("줄바꿈!%c", '\n'); // 2개의 합쳐져서 단일문자로 취급된다.
	printf("줄\n\n바\n꿈\n!!\n"); // 일반적인 사용방식. 원하는 만큼 쓴다.

	// \t : 탭문자 5%
	// -> 정렬용으로 사용한다.
	printf("이름\t나이\t취미\n");
	printf("%s\t23\t코딩\n","최강자");
	printf("이름\t: 홍길동\n");
	printf("꿈\t: 프로그래머!\n");
	
	// \", \', \\ : 문자로 출력하기 3%
	// -> \, ", ' : 약속된 기능이 있는 문자라서, 그냥 출력이 안된다.
	printf("\"이것\", \'저것\' 가격 : \\6800\n");
	return 0;
}