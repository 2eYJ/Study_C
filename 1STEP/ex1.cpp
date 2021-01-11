/*
선행처리문 #include와 #define문은 모두 선행처리기에 의해 처리됨
#include는 와부에 선언된 함수나 상수 등을 사용하기 위해서 헤더파일의
내용을 현재 파일에 포함할 떄 사용 함
#define 문은 함수나 상수를 단순화해주는 매크로를 정의할 때 사용합니다
*/

#include <iostream>

#define TEXT "Welcome to C++ Programming!!"

 
/*C++ 프로그램은 가장 먼저 main()함수를 찾고, 그곳에서부터 실행 시작
반드시 하나의 main()함수를 가지고 있어야함 없으면 컴파일 오류 발생 */
int main()

{
//명령문은 항상 ;으로 끝나야 됨
    std::cout << TEXT;

/* 
네임스페이스란 이름이 기억되는 영역을 뜻하며,이름이 소속된 공간을 의미
using namespace std; 쓰면
std:: 네임스페이스 이름을 붙이지 않아도 사용할 수 있음.
*/

/*반환문은 함수의 종료를 의미하며 함수를 호출한 곳으로 결과값을 
반환하는 역활 main() 함수가 반환되면, 프로그램 전체가 종료됨*/
    return 0;

}