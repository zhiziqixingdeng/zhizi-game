#include <iostream>
#include <cstdlib>
#include <unistd.h> 
using namespace std;
int a,b,cnt,ans,n;
char x;
int main(){
	cout<<"欢迎来到画东西"<<endl;
	string name;
	cout<<"请输入你的名字:";
	cin>>name;
	while(1==1){
		cout<<name<<"你想画什么 1.三角 2.正方 3.小树"<<endl;
		cin>>n;
		if(n==1){
			cout<<"请输入底:";
			cin>>a;
			cout<<"请输入高:";
			cin>>b;
			cout<<"请输入填充的字符:";
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
			cout<<"请输入长:";
			cin>>a;
			cout<<"请输入宽:";
			cin>>b;
			cout<<"请输入填充字符:";
			cin>>x;
			for(int i=1;i<=a;i++){
				for(int j=1;j<=b;j++){
					cout<<x;
				}
				cout<<endl;
			} 
		}
		else if(n==3){
			cout<<"请输入要几层的树叶"<<endl;
			cin>>a;
			cout<<"请输入树干要有几层"<<endl;
			cin>>b;
			cout<<"请输入填充的:";
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
