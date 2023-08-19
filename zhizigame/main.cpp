#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std;
int n,w;
int main(){
	cout<<"欢迎来到zhizigame"<<endl;
	while(1==1){
		cout<<"请输入你要玩什么 1.热门游戏 2.站长推荐 3.关闭程序"<<endl; 
		cin>>n;
		if(n==1){
			system("start 热门.exe");
		}
		else if(n==2){
			system("start 站长推荐.exe");
		}
		else{
			return 0; 
		}
	}
}
