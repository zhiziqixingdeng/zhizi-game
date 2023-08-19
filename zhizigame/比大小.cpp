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
	cout<<"欢迎来到比大小"<<endl;
	sleep(1);
	cout<<"你的名字:";
	cin>>name;
	cout<<"你好,"<<name<<",欢迎来到比大小"<<endl;
	while(1==1){
		cout<<"开始玩输入1"<<endl;
		cin>>w;
		if(w==1){
			cout<<"分牌中"<<endl;
			sleep(1);
			for(int i=1;i<=6;i++){
				r=rand()%8+1;
				p[i].dian=r;
				p[i].zai=1;
				r=rand()%8+1;
				rj[i].dia=r;
				rj[i].za=1;
			}
			cout<<"分配完成"<<endl;
			for(int tt=1;tt<=6;tt++){
				cout<<"请输入你要出什么"<<endl;
				a=0;
				b=0;
			for(int i=1;i<=6;i++){
				if(p[i].zai==1){
					cout<<i<<":"<<p[i].dian<<endl;
				}
				else{
					cout<<i<<":"<<"已经出完"<<endl;
				}
			}
			cin>>r;
			if(p[r].zai==0){
				cout<<"犯规是吧"<<endl;
				sleep(1);
				cout<<"再见"<<endl;
				return 0;
			}
			else{
				a=r;
				p[a].zai=0;
				cout<<"对手出的牌:";
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
					cout<<"要不起"<<endl;
					sleep(1);
					cout<<"你赢了"<<endl;
					ans++;
				}
				if(b>a){
					cout<<"你输了"<<endl;
					sleep(1);
					cnt++;
				}
				else{
					cout<<"你赢了"<<endl;
					ans++; 
				}
				sleep(1);
			}
			}
			sleep(1);
			if(ans>=3){
				cout<<"你胜利了"<<endl;
			}
			else{
				cout<<"你输了"<<endl;
			}
		} 
		else{
			cout<<"等待命令"<<endl;
		}
	} 
}
