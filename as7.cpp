#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"no of rows: ";
    cin>>n;
    int m=n-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
        cout<<" ";
        }
        for(int k=1;k<=n;k++){
        cout<<"*";
        }
        cout<<endl;
    }
}