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
	cout<<"�������������:";
	cin>>name;
	cout<<"��ð�,"<<name<<"��"<<endl;
	srand((unsigned int)time(NULL)); 
	while(1==1){
		cout<<"����1��ʼ��Ϸ������2�򿪰���������3�˳�"<<endl;
		cin>>n;
		if(n==1){
			r=rand()%5+1;
			ren[r].shen=1;
			cout<<"���������"<<endl;
			sleep(1);
			cout<<"��ʼ��Ϸ"<<endl;
			if(ren[1].shen==1){
				cout<<"��������"<<endl;
				sleep(1);
				cout<<"Ŀ�꣺�ɵ������˲���������"<<endl;
			}
			else{
				cout<<"����ƶ��"<<endl;
				sleep(1);
				cout<<"Ŀ��:�ҳ����ˣ���Ͷ��"<<endl;
			}
			cout<<"����1��"<<endl;
			sleep(1);
			while(1==1){
				cout<<"��������"<<endl;
			sleep(1);
			cout<<"����������"<<endl;
			if(ren[1].shen==1){
				cout<<"��������Ҫ������(2~6,�����Ѿ�����)"<<endl;
				cin>>a;
				if(ren[a].si==1||a==1){
					cout<<"����"<<endl;
					sleep(1);
				}
				else{
					cout<<"���˳ɹ�"<<endl;
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
			cout<<"���������"<<endl;
			sleep(1);
			if(ren[1].si==1){
				cout<<"������,�㱻����"<<endl;
				sleep(1);
				break; 
			}
			cout<<"������"<<endl;
			cout<<d<<"�ű�����"<<endl;
			cout<<"��ʼͶƱ"<<endl;
			cout<<"��Ҫ����Ļ�� 1.Ҫ 2.��Ҫ"<<endl;
			cin>>b;
			if(b==1){
				system("cls");
			}
			else{
				cout<<"�ð�"<<endl;
			}
			for(int i=1;i<=6;i++){
				pj[i].hao=i;
			}
			for(int i=1;i<=6;i++){
				if(i==1){
					cout<<"��������ҪͶ˭(2~6,�������Ѿ�����̭�ģ�9��Ȩ)"<<endl;
					cin>>a;
					if(a>=2&&a<=6&&ren[a].si==0){
						cout<<"ͶƱ�ɹ�"<<endl;
						pj[a].piao++;
					}
					else if(a==9){
						cout<<"����Ȩ��"<<endl;
					}
					else{
						cout<<"����"<<endl;
					}
				}
				else{
					r=rand()%5+1;
					while(ren[r].si==1||r==i){
						r=rand()%5+1;
					}
					pj[r].piao++;
					cout<<i<<"��"<<"Ͷ����"<<r<<"��"<<endl;
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
				cout<<pj[1].hao<<"��Ͷ��"<<endl;
				if(ren[pj[1].hao].shen==1){
					cout<<"�������ˣ�����ʤ��"<<endl;
					break;
				}
				else{
					cout<<"����ԩ������"<<endl;
				}
				if(ren[1].si==1){
					cout<<"������"<<endl;
					break;
				}
				for(int i=1;i<=6;i++){
					if(ren[i].si==0&&ren[i].shen==0){
						cnt++;
					}
				}
				if(cnt<3){
					cout<<"����ʧ��"<<endl;
					break;
				}
			}
		}
		else if(n==2){
			cout<<"���չ��������У���������ֻ��ƶ�������"<<endl;
		}
		else{
			return 0;
		}
	}
}
