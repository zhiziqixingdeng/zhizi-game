#include <iostream>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
using namespace std;
struct r{
	int si;
	int shen;
}ren[7];
struct piao{
	int hao;
	int piao;
}pj[7];
int a,n,b,c,d,r,cnt;
string name;
int main(){
	cout<<"请输入你的名字:";
	cin>>name;
	cout<<"你好啊,"<<name<<"！"<<endl;
	srand((unsigned int)time(NULL)); 
	while(1==1){
		cout<<"输入1开始游戏，输入2打开帮助，输入3退出"<<endl;
		cin>>n;
		if(n==1){
			r=rand()%5+1;
			ren[r].shen=1;
			cout<<"分配身份中"<<endl;
			sleep(1);
			cout<<"开始游戏"<<endl;
			if(ren[1].shen==1){
				cout<<"你是狼人"<<endl;
				sleep(1);
				cout<<"目标：干掉所有人并不被发现"<<endl;
			}
			else{
				cout<<"你是贫民"<<endl;
				sleep(1);
				cout<<"目标:找出狼人，并投出"<<endl;
			}
			cout<<"你是1号"<<endl;
			sleep(1);
			while(1==1){
				cout<<"天黑请闭眼"<<endl;
			sleep(1);
			cout<<"狼人请睁眼"<<endl;
			if(ren[1].shen==1){
				cout<<"请输入你要刀的人(2~6,不能已经死了)"<<endl;
				cin>>a;
				if(ren[a].si==1||a==1){
					cout<<"错误"<<endl;
					sleep(1);
				}
				else{
					cout<<"刀人成功"<<endl;
					ren[a].si=1;
				}
				sleep(1);
				d=a; 
			}
			else{
				r=rand()%5+1;
				while(ren[r].si==1||ren[r].shen==1){
					r=rand()%5+1;
				}
				ren[r].si=1;
				d=r;
				sleep(1);
			}
			cout<<"狼人请闭眼"<<endl;
			sleep(1);
			if(ren[1].si==1){
				cout<<"你死了,你被刀了"<<endl;
				sleep(1);
				break; 
			}
			cout<<"天亮了"<<endl;
			cout<<d<<"号被刀了"<<endl;
			cout<<"开始投票"<<endl;
			cout<<"需要清屏幕吗 1.要 2.不要"<<endl;
			cin>>b;
			if(b==1){
				system("cls");
			}
			else{
				cout<<"好吧"<<endl;
			}
			for(int i=1;i<=6;i++){
				pj[i].hao=i;
			}
			for(int i=1;i<=6;i++){
				if(i==1){
					cout<<"请输入你要投谁(2~6,不能是已经被淘汰的，9弃权)"<<endl;
					cin>>a;
					if(a>=2&&a<=6&&ren[a].si==0){
						cout<<"投票成功"<<endl;
						pj[a].piao++;
					}
					else if(a==9){
						cout<<"你弃权了"<<endl;
					}
					else{
						cout<<"错误"<<endl;
					}
				}
				else{
					r=rand()%5+1;
					while(ren[r].si==1||r==i){
						r=rand()%5+1;
					}
					pj[r].piao++;
					cout<<i<<"号"<<"投给了"<<r<<"号"<<endl;
					sleep(1);
					}
				}
				for(int i=1;i<=6;i++){
					for(int j=1;j<=6;j++){
						if(pj[j].piao<pj[j-1].piao){
							swap(pj[j].piao,pj[j-1].piao);
							swap(pj[j].hao,pj[j-1].hao);
						}
					}
				}
				cout<<pj[1].hao<<"被投出"<<endl;
				if(ren[pj[1].hao].shen==1){
					cout<<"他是狼人，好人胜利"<<endl;
					break;
				}
				else{
					cout<<"我们冤枉了他"<<endl;
				}
				if(ren[1].si==1){
					cout<<"你死了"<<endl;
					break;
				}
				for(int i=1;i<=6;i++){
					if(ren[i].si==0&&ren[i].shen==0){
						cnt++;
					}
				}
				if(cnt<3){
					cout<<"好人失败"<<endl;
					break;
				}
			}
		}
		else if(n==2){
			cout<<"按照规则来就行，我们这里只有贫民和狼人"<<endl;
		}
		else{
			return 0;
		}
	}
}
