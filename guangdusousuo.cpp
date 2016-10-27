#include<iostream>
using namespace std;
struct node{
    int x;
    int y;
    int s;
};
int p=4,q=3;
int head,tail;
int a[6][5]={{0,0,0,0,0},{0,0,0,1,0},{0,0,0,0,0},{0,0,0,1,0},{0,0,1,0,0},{0,0,0,0,1}};
int book[10][10]={0};
int main(){
    int next[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
    int tx,ty;
    head=1;
    tail=1;
    struct node que[200];
    que[head].x=1;
    que[head].y=1;
    que[head].s=1;
    book[1][1]=1;
    tail++;
    int flag=0;
    while(head<tail){
        for(int i=0;i<4;i++){
            tx=que[head].x+next[i][0];
            ty=que[head].y+next[i][1];
            if(tx<1 || ty<1 || tx>5 || ty>4)
            continue;
            if(book[tx][ty]==0 && a[tx][ty]==0){
                que[tail].x=tx;
                que[tail].y=ty;
                book[tx][ty]=1;
                que[tail].s=que[head].s+1;//记录步数
                tail++;
            }
            if(tx==p && ty ==q){
                flag=1;
            }
            if(flag){
                break;
            }
            
        }
        que[tail].s++;
        head++;
    }
    cout<<"总共用了"<<que[head-1].s<<"步."<<endl;
    return 0;

}
