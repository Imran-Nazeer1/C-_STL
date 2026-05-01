#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(5);
    cout<<v[0]<<endl;
    //vector with data

    vector<int> v1={1,4};
    cout<<v1[0]<<endl;

    //intialization with some value at declaration 

    vector<int> v2(5,20);
    cout<<v2[2]<<endl;

    //iterator

    vector<int > iter={1,3,4,3,5,3};
    // cout<<*(iter.begin()+3);

    vector<int>:: iterator it=iter.begin();
    cout<<*it<<" ";
    it++;
    cout<<*it<<endl;

    //printing all element of array with iterator

    for(auto it=iter.begin();it!=iter.end();it++){
        cout<<*it<<" ";
    }
    return 0;

}