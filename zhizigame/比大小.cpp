#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std;
string name;
int w,r,ans,cnt,a,b;
struct pai{ 
	int dian;
	int zai;
}p[7];
struct ji{
	int dia;
	int za;
}rj[7];
int main(){
	cout<<"��ӭ�����ȴ�С"<<endl;
	sleep(1);
	cout<<"�������:";
	cin>>name;
	cout<<"���,"<<name<<",��ӭ�����ȴ�С"<<endl;
	while(1==1){
		cout<<"��ʼ������1"<<endl;
		cin>>w;
		if(w==1){
			cout<<"������"<<endl;
			sleep(1);
			for(int i=1;i<=6;i++){
				r=rand()%8+1;
				p[i].dian=r;
				p[i].zai=1;
				r=rand()%8+1;
				rj[i].dia=r;
				rj[i].za=1;
			}
			cout<<"�������"<<endl;
			for(int tt=1;tt<=6;tt++){
				cout<<"��������Ҫ��ʲô"<<endl;
				a=0;
				b=0;
			for(int i=1;i<=6;i++){
				if(p[i].zai==1){
					cout<<i<<":"<<p[i].dian<<endl;
				}
				else{
					cout<<i<<":"<<"�Ѿ�����"<<endl;
				}
			}
			cin>>r;
			if(p[r].zai==0){
				cout<<"�����ǰ�"<<endl;
				sleep(1);
				cout<<"�ټ�"<<endl;
				return 0;
			}
			else{
				a=r;
				p[a].zai=0;
				cout<<"���ֳ�����:";
				for(int i=1;i<=6;i++){
					if(rj[i].za==1){
						if(rj[i].dia>a){
							cout<<rj[i].dia<<endl;
							b=rj[i].dia;
							break;
						}
					}
				}
				if(b==0){
					cout<<"Ҫ����"<<endl;
					sleep(1);
					cout<<"��Ӯ��"<<endl;
					ans++;
				}
				if(b>a){
					cout<<"������"<<endl;
					sleep(1);
					cnt++;
				}
				else{
					cout<<"��Ӯ��"<<endl;
					ans++; 
				}
				sleep(1);
			}
			}
			sleep(1);
			if(ans>=3){
				cout<<"��ʤ����"<<endl;
			}
			else{
				cout<<"������"<<endl;
			}
		} 
		else{
			cout<<"�ȴ�����"<<endl;
		}
	} 
}
