#include<cstdio>
#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main(){
    int n,minn,temp;
    long long x[100000],y[100000];
    freopen("pair.in", "r", stdin);
    freopen("pair.out", "w", stdout);
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>x[i]>>y[i];
    minn=pow((x[0]-x[1]),2)+pow((y[0]-y[1]),2);
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++){
            temp=pow((x[i]-x[j]),2)+pow((y[i]-y[j]),2);
            if(temp<minn) {
                minn=temp;
            }
        }
    cout<<minn<<endl;
    return 0;
}