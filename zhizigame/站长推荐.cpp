#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std; 
string a,b,c;
int cnt,n,d,r,t,f=1,s[1000];
int main(){
	cout<<"欢迎来到站长推荐游戏"<<endl;
	sleep(1);
	while(1==1){
		cout<<"请输入你要玩什么 1.报数游戏(可以卡bug，祝你找到) 2.自己玩的胡编乱造词语接龙 3.井字棋 4.退出"<<endl;
		cin>>n;
		if(n==1){
			cout<<"那好，我们输入的数不能是"<<endl;
			sleep(1);
			r=rand()%8+1;
			cout<<r<<"的倍数"<<endl;
			sleep(1);
			cout<<"开始"<<endl;
			for(int i=1; ;i++){
				if(f==1){
					cout<<"你报:";
					cin>>d;
					if(d%r==0){
						cout<<"你报错了"<<endl;
						break;
					}
					else{
						cout<<"正确"<<endl; 
						t=1;
						f=0;
					}
				}
				else{
					cnt=rand()%i+100;
					while(cnt%r==0){
						cnt=rand()%i+100;
					}
					cout<<"我报了:"<<cnt<<endl;
					sleep(1);
					t=0;
					f=1;
				}
			}
		}
		else if(n==2){
			cout<<"请输入第一个词语:";
			cin>>c;
			cout<<"开始"<<endl;
			sleep(1);
			for(int i=1; ;i++){
				if(i==1){
					cout<<"输入词语:";
					cin>>a;
					if(a[1]!=c[c.length()]){
						cout<<"你输了"<<endl;
						sleep(1);
						system("cls");
						break;
						f=1;
					}
				}
				else{
					if(f==1){
						cout<<"输入词语:";
						cin>>b;
						if(b[1]==a[a.length()]){
							cout<<"正确"<<endl;
							f=0;
						}
						else{
							cout<<"你输了"<<endl;
							break;
						}
					}
					else{
						cout<<"输入词语:";
						cin>>a;
						if(a[1]==b[b.length()]){
							cout<<"正确"<<endl;
							f=1;
						}
						else{
							cout<<"你输了"<<endl;
							break;
						}
					}
				}
			}
		}
		else if(n==3){
			system("start 井字棋.exe"); 
		}
		else if(n==4){
			return 0;
		}
		else{
			cout<<"错误"<<endl;
		}
	}
}
