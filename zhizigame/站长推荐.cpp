#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std; 
string a,b,c;
int cnt,n,d,r,t,f=1,s[1000];
int main(){
	cout<<"��ӭ����վ���Ƽ���Ϸ"<<endl;
	sleep(1);
	while(1==1){
		cout<<"��������Ҫ��ʲô 1.������Ϸ(���Կ�bug��ף���ҵ�) 2.�Լ���ĺ������������� 3.������ 4.�˳�"<<endl;
		cin>>n;
		if(n==1){
			cout<<"�Ǻã������������������"<<endl;
			sleep(1);
			r=rand()%8+1;
			cout<<r<<"�ı���"<<endl;
			sleep(1);
			cout<<"��ʼ"<<endl;
			for(int i=1; ;i++){
				if(f==1){
					cout<<"�㱨:";
					cin>>d;
					if(d%r==0){
						cout<<"�㱨����"<<endl;
						break;
					}
					else{
						cout<<"��ȷ"<<endl; 
						t=1;
						f=0;
					}
				}
				else{
					cnt=rand()%i+100;
					while(cnt%r==0){
						cnt=rand()%i+100;
					}
					cout<<"�ұ���:"<<cnt<<endl;
					sleep(1);
					t=0;
					f=1;
				}
			}
		}
		else if(n==2){
			cout<<"�������һ������:";
			cin>>c;
			cout<<"��ʼ"<<endl;
			sleep(1);
			for(int i=1; ;i++){
				if(i==1){
					cout<<"�������:";
					cin>>a;
					if(a[1]!=c[c.length()]){
						cout<<"������"<<endl;
						sleep(1);
						system("cls");
						break;
						f=1;
					}
				}
				else{
					if(f==1){
						cout<<"�������:";
						cin>>b;
						if(b[1]==a[a.length()]){
							cout<<"��ȷ"<<endl;
							f=0;
						}
						else{
							cout<<"������"<<endl;
							break;
						}
					}
					else{
						cout<<"�������:";
						cin>>a;
						if(a[1]==b[b.length()]){
							cout<<"��ȷ"<<endl;
							f=1;
						}
						else{
							cout<<"������"<<endl;
							break;
						}
					}
				}
			}
		}
		else if(n==3){
			system("start ������.exe"); 
		}
		else if(n==4){
			return 0;
		}
		else{
			cout<<"����"<<endl;
		}
	}
}
