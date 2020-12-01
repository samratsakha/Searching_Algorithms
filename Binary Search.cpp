#include<bits/stdc++.h>

using namespace std;

int binarysearch(int *arr,int l,int r,int k){
    int m;
    while(l<=r){
        m=l+(r-l)/2;
        if(arr[m]==k){
            return m;
        }
        else if(arr[m]<k){
            l=m+1;
        }
        else{
            r=m-1;
        }
    }
    return -1;
}

int main(){
    int arr[1001],n=0,k,ans;
    char ch;
    while(scanf("%d%c",&arr[n],&ch)>0 && ch!='\n'){
        n++;
    }
    n++;
    cin>>k;
    sort(arr,arr+n);
    ans=binarysearch(arr,0,n-1,k);
    if(ans!=-1){
        cout<<ans;
    }
    else{
        cout<<"N0"<<endl;
    }
}
