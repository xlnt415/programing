#include <stdio.h>

int main(void) {
	// 이스케이프문자는 나중에 추가하는 편이 편하다.
	// printf는 한줄당 하나씩을 기본으로 하자.
	// -> 예외 : 너무 짧으면 합친다.
	printf("The \'QUICK\' brown fox\n");
	printf("jump over\n\"The\" Lazy Dog!\n");
	printf("\\n 은 줄바꿈, \\t 는 탭문자\n");
	printf("\\\' 는 작은 따옴표\n");
	printf("\\\" 는 큰 따옴표\n");
	return 0;
}