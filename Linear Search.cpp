#include<iostream>

using namespace std;

int linear_search(int *arr,int n,int k){
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            return i;
        }
    }
    return -1;
}

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ind=linear_search(arr,n,k);
    if(ind!=-1){
        cout<<ind<<endl;
    }
    else{
        cout<<"Element is not present"<<endl;
    }
}
