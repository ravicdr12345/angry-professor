#include<iostream>
#include <ostream>
using namespace std;
int main(){
    int n,i,m,k,x=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>m>>k;
        int a[m];
        for(int j=0;j<m;j++){
            cin>>a[j];
        }
        for(int j=0;j<m;j++){
            if(a[j]<0||a[j]==0){
                x++;
            }
        }
        if(x<k){
            cout<<"YES"<<endl;
            x=0;
        }
        if(x>k||x==k){
            cout<<"NO"<<endl;
            x=0;
        }
       
    }
}






