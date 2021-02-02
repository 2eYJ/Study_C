#include <iostream>
using namespace std;

// 두수 A,B 입력을 받도 A - B를 출력 하는 프로그램
//  A-B 가 음수이면 -1 출력
int main(){

    int A, B;
    int subtract;
    cin >> A >> B;
    subtract = A - B;
    if(A < B){
        cout << -1;
        
    }else
    {
        cout << subtract;    
    }
}