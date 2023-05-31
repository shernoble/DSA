#include <iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v1;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v1.push_back(x);
    }
    // cout<<v1[2];
    
    for(int i=0;i<n;i++){
        int flag=1;
        for(int j=0;j<n-1;j++){
            if(v1[j]>v1[j+1]){
                flag=0;
                swap(v1[j],v1[j+1]);
            }
        }
        if(flag){
            cout<<"i="<<i<<'\n';
            break;
        } 
        
    }
    for(int i=0;i<n;i++){
        cout<<v1[i]<<" ";
    }
    return 0;
    




}