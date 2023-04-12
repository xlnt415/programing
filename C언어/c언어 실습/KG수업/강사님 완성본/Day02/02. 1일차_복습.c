#include <stdio.h>

// 프로그램은 컴퓨터의 RAM공간을 이용하여 작동한다.
// RAM공간의 관리를 컴퓨터(운영체제)에게 이양했음.
// -> 운영체제가 관리해주고 할당해주는 공간을 이용하는 계획을 수립하는 것
// -> 받은 공간을 다시 한번, 계획을 수립하여 용도/필요한 만큼 쓰는 것
//    -> 각 영역으로 자동분류된다.

// C언어 : 절차지향(절차식) 프로그래밍
// 세부적인 것들을 요구하고, 순서를 맞춰 진행할 것을 요구하는 구조
int main(void) {
	// 변수 : 내가 직접 식별하고, 관리하기 위한 공간을 요청하여 받은 것
	int num;
	double fnum; // 변수의 선언
	char ch;
	char word[100];
	// 상수 : 내가 직접 준비하는, 문법에 의하여 식별 및 자동저장처리되는 값
	123; 3.14;
	'A'; "ABC"; // 혼용 안됨
	// 변수에 최초로 값을 저장 : 초기화(내부 정리가 동반되는 과정)
	// printf("%d", num); 선언된 변수에는 쓰레기값이 들어있다.
	num = 123;
	fnum = 3.14;
	ch = 'A';
	// word = "ABC"; 문자열변수는 특별한 방법이 아니면 초기화 불가능
	char word1[100] = "ABC"; // 선언&초기화 동시 진행

	printf("%s %d\n%c\n%f\n", word1, num, ch, fnum);
	// 1. 코드의 실행은 Ctrl + F5
	//    F5로 실행은 가능하지만, 약간 반응이 굼뜨고, 느리거나, 멈출 수 있다.
	// 2. 소스파일 추가할 때 파일명이 틀려도 만들어지고, 고칠 수 있다!
	//    단, 처음 만들 때 오타가 날 경우, 항목형식이 <빌드에 참여안함>이 된다.
	//    이를 <C/C++ 컴파일러> 로 고쳐야 코드를 처리해준다.
	return 0;
}