#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"no of rows: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
        cout<<" ";
        }
        for(char k=65;k<=i+64;k++){
        cout<<k;
        }
        cout<<endl;
    }
}