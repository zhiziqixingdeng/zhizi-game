#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std;
int n,w;
int main(){
	cout<<"��ӭ����zhizigame"<<endl;
	while(1==1){
		cout<<"��������Ҫ��ʲô 1.������Ϸ 2.վ���Ƽ� 3.�رճ���"<<endl; 
		cin>>n;
		if(n==1){
			system("start ����.exe");
		}
		else if(n==2){
			system("start վ���Ƽ�.exe");
		}
		else{
			return 0; 
		}
	}
}
