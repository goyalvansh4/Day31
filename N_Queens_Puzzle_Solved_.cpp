#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long int n;
        cin>>n;
        double res=pow(0.143*n,n);
        

        if(res-floor(res)<0.5){
            cout<<floor(res)<<endl;
        }
        else{
            cout<<floor(res)+1<<endl;
        }
    }
}