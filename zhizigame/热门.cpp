#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std;
int a,b,c,d,r,w,cnt;
int main(){
	while(1==1){
		cout<<"��������Ҫ��ʲô 1.���� 2.����ɱ 3.�ȴ�С�˿��� 4.������ 5.��������"<<endl;
		cin>>r;
		if(r==1){
			cout<<"��������Ҫ��ʲô 1.������Ϸ 2.����"<<endl;
			cin>>w;
			if(w==1){
				cout<<"��Χ:1~100"<<endl;
				b=rand()%99+1;
				while(a!=b){
					cin>>a;
					if(a>b){
						cout<<"����"<<endl;
					}
					if(a<b){
						cout<<"С��"<<endl;
					}
				}
				cout<<"��¶���!"<<endl;
			}
			else if(w==2){
				cout<<"��������Ҫ�漸��:";
				cin>>cnt;
				for(int i=1;i<=cnt;i++){
					a=rand()%100;
					b=rand()%a;
					c=rand()%2;
					if(c==0){
						cout<<a<<"+"<<b<<"=";
						cin>>d;
						if(d==a+b){
							cout<<"��ȷ"<<endl;
						}
						else{
							cout<<"����"<<endl;
						}
					}
					else if(c==1){
						cout<<a<<"-"<<b<<"=";
						cin>>d;
						if(d==a-b){
							cout<<"��ȷ"<<endl;
						}
						else{
							cout<<"����"<<endl;
						}
					}
					else{
						cout<<a<<"x"<<b<<"=";
						cin>>d;
						if(d==a*b){
							cout<<"��ȷ"<<endl;
						}
						else{
							cout<<"����"<<endl;
						}
					}
				}
			}
		}
		else if(r==2){
			cout<<"��ӭ������ɱ"<<endl;
			sleep(1);
			system("start ����ɱ.exe");
		} 
		else if(r==3){
			cout<<"��ӭ��ȴ�С"<<endl;
			sleep(1);
			system("start �ȴ�С.exe"); 
		}
		else if(r==4){
			cout<<"��ӭ������"<<endl;
			sleep(1);
			system("start ����.exe"); 
		}
		else{
			cout<<"����"<<endl;
		}
	} 
} 
