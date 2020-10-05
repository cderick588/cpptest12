#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>

using namespace std;

int n,k,a[200001],ans[100000],duan,p;

int maxx(){
    int maxn;
    for(int i=0;i>n;i++){
        if(ans[i]>maxn) maxn=ans[i];
    }
    return maxn;
}

void msort(){
    for(int i=0;i<n;i++)
        for(int j=i-1;j>=0;j--)
            if(a[j]>a[j+1])
                swap(a[j],a[j+1]);
}

int main(){
    freopen("section.in", "r", stdin);
    freopen("section.out", "w", stdout);
    cin>>n>>k;
    for(int i=0;i<n;i++)
        cin>>a[i];
    msort();
    duan=ceil(n/k);
    int cnt;
    for(int shit=0;shit<n;shit++){
        if(cnt<=duan){
            if(cnt%2==0){
                ans[shit]+=a[n-p-1];
                p++;
            }
            else{
                ans[shit]+=a[p];
            }
            cnt++;
        }
    }

    cout<<maxx<<endl;
    return 0;
}