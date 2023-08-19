#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <ctime>
using namespace std;
int a, b, t, f, cnt;
string name;
char x[3][3]; // 使用字符数组来表示棋盘

void initializeBoard() {
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            x[i][j] = '?';
        }
    }
}

void printBoard() {
    cout << "  1 2 3" << endl;
    cnt = 1;
    for(int i = 0; i < 3; i++){
        cout << cnt;
        for(int j = 0; j < 3; j++){
            cout << " " << x[i][j];
        }
        cout << endl;
        cnt++;
    }
}

bool checkWinner(char player) {
    // 检查是否有横向连续
    for(int i = 0; i < 3; i++){
        if(x[i][0] == player && x[i][1] == player && x[i][2] == player){
            return true;
        }
    }
    
    // 检查是否有纵向连续
    for(int j = 0; j < 3; j++){
        if(x[0][j] == player && x[1][j] == player && x[2][j] == player){
            return true;
        }
    }
    
    // 检查是否有斜向连续
    if(x[0][0] == player && x[1][1] == player && x[2][2] == player){
        return true;
    }
    
    if(x[0][2] == player && x[1][1] == player && x[2][0] == player){
        return true;
    }
    
    return false;
}

bool checkDraw() {
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(x[i][j] == '?'){
                return false;
            }
        }
    }
    return true;
}

int main(){
    cout << "欢迎来到井字棋" << endl;
    srand(static_cast<unsigned int>(time(NULL))); 
    cout << "输入你的名字: ";
    cin >> name;
    sleep(1);
    cout << "你好啊" << name << "！" << endl;
    int n;
    
    while(1){
        cout << "输入1开始游戏" << endl;
        cin >> n;
        if(n == 1){
            initializeBoard();
            cout << "开始游戏" << endl;
            
            while(1){
                printBoard();
            
                cout << "请输入坐标（1~3，如：2 1）: ";
                cin >> a >> b;
                if(x[a-1][b-1]=='?'){
                    x[a-1][b-1] = 'x';
                }
                else{
                    cout<<"错误"<<endl;
                    continue;
                }
                if(checkWinner('x')) {
                    cout << "恭喜你，你赢了！" << endl;
                    break;
                }
                if(checkDraw()) {
                    cout << "平局！" << endl;
                    break;
                }
                
                // 计算机生成随机坐标
                do {
                    t = rand()%3;
                    f = rand()%3;
                } while(x[t][f] != '?');
                
                x[t][f] = 'o';
                
                if(checkWinner('o')){
                    cout << "很遗憾，你输了！" << endl;
                    break;
                }
                if(checkDraw()) {
                    cout << "平局！" << endl;
                    break;
                }
            }
        }
    } 
    return 0;
}
