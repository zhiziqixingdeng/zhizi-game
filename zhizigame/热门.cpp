#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std;
int a,b,c,d,r,w,cnt;
int main(){
	while(1==1){
		cout<<"请输入你要玩什么 1.摸鱼 2.狼人杀 3.比大小扑克牌 4.画东西 5.关于作者"<<endl;
		cin>>r;
		if(r==1){
			cout<<"请输入你要玩什么 1.猜数游戏 2.算数"<<endl;
			cin>>w;
			if(w==1){
				cout<<"范围:1~100"<<endl;
				b=rand()%99+1;
				while(a!=b){
					cin>>a;
					if(a>b){
						cout<<"大了"<<endl;
					}
					if(a<b){
						cout<<"小了"<<endl;
					}
				}
				cout<<"你猜对了!"<<endl;
			}
			else if(w==2){
				cout<<"请输入你要玩几局:";
				cin>>cnt;
				for(int i=1;i<=cnt;i++){
					a=rand()%100;
					b=rand()%a;
					c=rand()%2;
					if(c==0){
						cout<<a<<"+"<<b<<"=";
						cin>>d;
						if(d==a+b){
							cout<<"正确"<<endl;
						}
						else{
							cout<<"错误"<<endl;
						}
					}
					else if(c==1){
						cout<<a<<"-"<<b<<"=";
						cin>>d;
						if(d==a-b){
							cout<<"正确"<<endl;
						}
						else{
							cout<<"错误"<<endl;
						}
					}
					else{
						cout<<a<<"x"<<b<<"=";
						cin>>d;
						if(d==a*b){
							cout<<"正确"<<endl;
						}
						else{
							cout<<"错误"<<endl;
						}
					}
				}
			}
		}
		else if(r==2){
			cout<<"欢迎玩狼人杀"<<endl;
			sleep(1);
			system("start 狼人杀.exe");
		} 
		else if(r==3){
			cout<<"欢迎玩比大小"<<endl;
			sleep(1);
			system("start 比大小.exe"); 
		}
		else if(r==4){
			cout<<"欢迎画东西"<<endl;
			sleep(1);
			system("start 画画.exe"); 
		}
		else{
			cout<<"错误"<<endl;
		}
	} 
} 
