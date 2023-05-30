#include<iostream>
#include<vector>
using namespace std;

void printVect(vector<int> &v){
    for (auto i = v.begin(); i != v.end(); ++i)
        cout << *i << " ";

}


int main(){
    vector<int> v1;

    for(int i=1;i<=5;i++){
        v1.push_back(i);
    }
    // cout << "Output of begin and end: ";
    // for (auto i = v1.begin(); i != v1.end(); ++i)
    //     cout << *i << " ";
    // using v1.size()
    cout<<"\nsize : "<<v1.size()<<"\n";//->O(1)
    v1.pop_back();//removes last element

    printVect(v1);

    vector<int> v2[5];//declares vector of size 5, all elements are 0
    vector<int> v3=v1;//can copy vector fully->O(n)

    // using iterators shortcut
    for(int value: v1){
        cout<<value<<" ";
    }


}