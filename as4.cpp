#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"no of rows: ";
    cin>>n;
    for(int i=1;i<=n+1;i++){
        if(i%2==0){
        for(char j=65;j<=i+64;j++){
        cout<<j;
        }
        }
        else{
            for(int k=1;k<=i;k++){
        cout<<k;
        }
        }
        cout<<endl;
    }
}