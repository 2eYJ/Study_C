 #include <iostream>
 #include <ctime>
 #include <cstdlib>
 #include <string>
 using namespace std;
 
 int main(){
 	
 	
 	string list[] = {"��â", "�߰���",  "�ʹ�", "���", "��������", "ġŲ", "����", "�߱�����","�ε�����",
 			"����", "����", "���κ�", "��ġ���","����","�Ұ��","���屹","�н�", "����", "����",
 			"������", "����","ȸ", "�粿ġ", "�̰�", "������", "Į����","�쵿","����","�ѽ�"};
	
	int list_size = sizeof(list)/sizeof(*list);		
	
	srand((unsigned int)time(0));
	int Num = rand()%list_size;
	int k = 0;
	while (1){
		cout << endl;
		cout<< "1. ����" << "2. ����" << endl;		
		cin >> k; 
		if(k == 1){
			cout << "������ �޴� 5���� �ѵ�!!" << endl;
			for (int i = 0; i < 5; i++){
				Num = rand()%list_size;
				cout << Num << ". " << list[Num] << endl;	
			}
		}else{
			cout << "����Ǿ���";
			break;
		}
			
			
		
	}
	
				  
	
 			
}
