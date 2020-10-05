#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

char inc;
int a,n,but[20001],yuyue,ini,p=1;
bool play[20001];
int main(){
    freopen("butter.in", "r", stdin);
    freopen("butter.out", "w", stdout);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>inc>>ini;
        if(inc=='B') {
            but[p]=ini;
            p++;
            continue;
        }
        if(inc=='P'){
            if(play[p-ini]==0){
                yuyue+=but[p-ini];
                play[p-ini]=true;
            }
        }
    }
    cout<<yuyue<<endl;
    return 0;
}