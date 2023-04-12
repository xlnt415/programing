#include <stdio.h>

int main(void) {
    //printf : print formatted(양식에 맞춰서 출력한다.)
    //1.기본사용 : 문자열 출력만 가능
    printf("문자열만 출력이 된다.\n");
    printf("새로운 내용을 추가로 작성할 수 있다!\n");

    //2. 실제사용 : 다양한 종류의 값을 서식문자를 이용해 필요한 곳에 배치하여 출력한다.
    //출력시 %c, %s, %d, %f 4가지를 이용한다.
    char ch: ch = 'A';
    double fnum = 3.14;
    char word[100] = "APPLE"; //배열이라는 구조. 문자변수 100개짜리.


    // %c : 문자만 가능
    printf("변수에 저장된 문자값 : %c\n", ch);
//서식문자는 필요한 만틈 늘릴 수 있다.
    printf("%c %c %c\n", ch, 'B', ch);
    // %s : 문자열만 가능
    //서식에 맞춰서 보여주는 것이 목적이다!

    printf("%s : 사과\n", word);
    return 0;
}