#include <iostream>
#include <cstdlib>
#include <unistd.h> 
using namespace std;
int a,b,cnt,ans,n;
char x;
int main(){
	cout<<"��ӭ����������"<<endl;
	string name;
	cout<<"�������������:";
	cin>>name;
	while(1==1){
		cout<<name<<"���뻭ʲô 1.���� 2.���� 3.С��"<<endl;
		cin>>n;
		if(n==1){
			cout<<"�������:";
			cin>>a;
			cout<<"�������:";
			cin>>b;
			cout<<"�����������ַ�:";
			cin>>x;
			for(int i=1;i<=b;i++){
				for(int j=1;j<=a;j++){
					cout<<x;
					a--;
				}
				cout<<endl;
			}
		}
		else if(n==2){
			cout<<"�����볤:";
			cin>>a;
			cout<<"�������:";
			cin>>b;
			cout<<"����������ַ�:";
			cin>>x;
			for(int i=1;i<=a;i++){
				for(int j=1;j<=b;j++){
					cout<<x;
				}
				cout<<endl;
			} 
		}
		else if(n==3){
			cout<<"������Ҫ�������Ҷ"<<endl;
			cin>>a;
			cout<<"����������Ҫ�м���"<<endl;
			cin>>b;
			cout<<"����������:";
			cin>>x;
			cnt=1;
			for(int i=1;i<=a;i++){
				for(int j=1;j<=i;j++){
						cout<<x;
					}
					cout<<endl; 
				}
			}
			for(int i=1;i<=b;i++){
				for(int j=1;j<=2;j++){
					cout<<x;
				}
				cout<<endl;
			}
		}
		sleep(1);
	} 
