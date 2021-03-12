 #include <iostream>
 #include <ctime>
 #include <cstdlib>
 #include <string>
 using namespace std;
 
 int main(){
 	
 	
 	string list[] = {"곱창", "닭갈비",  "초밥", "돈까스", "조개구이", "치킨", "피자", "중국음식","인도음식",
 			"삼겹살", "국수", "순두부", "김치찌게","갈비","소고기","해장국","분식", "족발", "보쌈",
 			"감자탕", "순댓국","회", "양꼬치", "훠거", "감자탕", "칼국수","우동","제육","한식"};
	
	int list_size = sizeof(list)/sizeof(*list);		
	
	srand((unsigned int)time(0));
	int Num = rand()%list_size;
	int k = 0;
	while (1){
		cout << endl;
		cout<< "1. 진행" << "2. 종료" << endl;		
		cin >> k; 
		if(k == 1){
			cout << "오늘의 메뉴 5가지 뚜둥!!" << endl;
			for (int i = 0; i < 5; i++){
				Num = rand()%list_size;
				cout << Num << ". " << list[Num] << endl;	
			}
		}else{
			cout << "종료되었엉";
			break;
		}
			
			
		
	}
	
				  
	
 			
}
