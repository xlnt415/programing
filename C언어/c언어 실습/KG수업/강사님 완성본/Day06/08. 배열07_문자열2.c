#include <stdio.h>
#include <string.h> // 문자열과 관련된 함수가 들어있는 헤더파일

int main(void) {
	// 문자열의 비교? - 인덱스로 접근하는 문자변수의 1대1비교
	char word1[] = "Apple";
	char word2[] = "Apple";
	// printf("%d\n", word1 == word2); 공간비교라서 안된다.
	// 1대1 비교하면 되는데, 절차/그 결과의 이용이 너무 어렵다...
	for (int i = 0; ; i++) {
		if (word1[i] != word2[i]) {
			printf("이 둘은 같지 않습니다....\n");
			break;
		}
		if (word1[i] == '\0' || word2[i] == '\0') {
			printf("먼저 끝나버렸습니다..\n");
			break;
		}
	}
	// -> strcmp() 함수로 이용한다.
	printf("%d\n", strcmp(word1, word2));
	printf("%d\n", strcmp(word2, word1));
	// 함수 자체를 조건식으로 이용하면 된다.
	// 0이면 일치 / 0 이외의 값은 불일치

	// 문자열의 복사? - 인덱스로 접근하는 문자변수의 1대1복사
	// +@ : 상수문자열은 상수문자배열이다.
	char word3[15];
	/*
	for (int i = 0;; i++) {
		word3[i] = "Apple"[i];
		if ("Apple"[i] == '\0') break;
	}
	*/
	// 귀찮으니...strcpy_s 를 이용한다.
	strcpy_s(word3, sizeof(word3), "ThisIsSparta!");
	// - 저장될 공간의 크기를 요구한다.
	// - 복사해올 대상의 저장공간의 크기는 저장될 공간의 크기보다 크면 안됨
	printf("복사된 문자열 : %s\n", word3);
	return 0;
}