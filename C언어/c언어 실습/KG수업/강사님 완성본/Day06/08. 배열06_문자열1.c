#include <stdio.h>
// 4형식 : 별개의 코드를 분리해서 정리하는 용도
void EX1(void) {
	char word[100]; // 문자변수 100개를 만들어서 묶었음.
	word[0] = 'A';
	word[1] = 'p';
	word[2] = 'p';
	// C언어의 문자열은 배열의 문자값을 연속출력한 결과물이다.
	printf("%c", word[0]);
	printf("%c", word[1]);
	printf("%c\n", word[2]);
	// 함수에 배열을 넘겨주면, 그 크기를 구할 수 없음.
	// -> 가장 마지막에 뚜겅을 닫는 형식으로 값을 하나 저장한다.
	// '\0', 0
	word[3] = '\0'; // 0;
	printf("%s\n", word);
}
void EX2(void) {
	// 문자열의 끝이 설정되어야 하기 때문에
	// 글자수 + 1만큼의 크기가 설정되어야 한다.
	char word[11] = "ABCDEFGHIJ"; // 10글자만 저장가능
	// 10번 인덱스에는 '\0'가 저장된다.
	printf("%s\n", word);
	char word1[11] = "가나다라마"; // 한글은 2로 나눠야 한다.
	// -> 5글자 -> 한글은 글자수 * 2 + 1만큼의 공간이 필요하다.
	printf("%s\n", word1);
	printf("%c", word1[0]); // 개별문자는 의미없음
	printf("%c", word1[1]); // 이어붙여주면 한글로 완성된다.
}

int main(void) {
	// EX1(); EX2();

	// 어떻게 효율적으로 준비합니까? 크기 설정안하면 그만이다.
	int arr[] = { 1,2,3 }; // 저장값을 이용한 크기 자동설정
	char word1[] = "Apple"; // 문자열도 동일하게...
	printf("arr : %d Bytes\n", sizeof(arr));
	printf("word1 : %d Bytes\n", sizeof(word1));
	// -> 저장할 값이 있고, 그 이상의 공간은 필요없을 경우

	// 최대글자수가 정해진 내용을 입력받을 경우, 직접 설정한다.
	char word2[21]; // 한글 10글자 * 2 + 1 = 21

	// 이런 상태에서 scanf_s는 배열의 크기값을 요구한다.
	// -> sizeof() 연산이나 크기값을 저장한 변수를 이용한다.
	// -> 별개 코드가 아닌, 연동되는 코드이다!
	printf("word1 입력 >> "); scanf_s("%s", word1, sizeof(word1));
	printf("word2 입력 >> "); scanf_s("%s", word2, sizeof(word2));
	// -> 이를 이용해 필요한 만큼의 값만 저장하고, 그 외에는 저장을 거부한다.
	//    저장에 실패하면 배열의 변수를 모두 0으로 채워버린다.
	printf("word1 : %s\n", word1);
	printf("word2 : %s\n", word2);
	return 0;
}