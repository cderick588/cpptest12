#include<iostream>
#include<cstdio>
#include<string>
#define int long long 

using namespace std;

struct student{
    long long hao;
    string name;
    int sclass;
    bool exi;
};

student a[100000];
int p=0,t;
char cao;
string iname;
int ihao,iclass;
int temo;

int main(){
    freopen("student.in", "r", stdin);
    freopen("student.out", "w", stdout);
    cin>>t;
    for(int i=0;i<t;i++){
        long long haha;
        cin>>cao;
        if(cao=='1'){
            cin>>ihao;
            cin>>a[ihao].name>>a[ihao].sclass;
            a[ihao].exi=true;
        }
        if(cao=='2'){
            cin>>ihao;
            a[ihao].exi=false;
        }
        if(cao='3'){
            cin>>ihao;
            if(a[ihao].exi==true) cout<<"yes"<<endl;
            else cout<<"no"<<endl;
        }
        if(cao='4'){
            cin>>iclass;
            for(int i=0;i<100001;i++){
                if(a[i].sclass==iclass) temo++;
            }
            cout<<temo<<endl;
        }
    }
    return 0;
}