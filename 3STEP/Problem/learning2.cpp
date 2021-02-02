#include <iostream>
using namespace std;
/*
짝수 판별 하기 
정수 N 을 받고 짝수인지 아닌지 판별하는 프로그램
*/
int main(){
    int N;
    cin >> N;
    
    if(N%2 == 0){
        cout << N << " even";
    }else{
        cout << N << " not even";

    }

}