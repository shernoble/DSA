#include<iostream>

using namespace std;

// pair <data_type1, data_type2> Pair_name

int main(){
    pair<int,string> p;
    p=make_pair(1,"lol");
    cout<<p.first<<" "<<p.second<<"\n";

    pair<int,int> p1[3];
    p1[0]={1,2};
    p1[1]={4,5};
    p1[2]={6,7};
    cout<<p1[0].first<<"\n";
}
