#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int ,int > p={1,2};
    cout<<p.first<<" "<<p.second<<endl;

    pair<int , pair<int , int >> q= {2,{4,6}};
    cout<<q.first<<" "<<q.second.first<<" "<<q.second.second;
    
}