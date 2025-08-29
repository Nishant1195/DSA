#include<bits/stdc++.h>
using namespace std;

// void vectordemo(){
//     vector<int> v;
//     v.emplace_back(10);
//     v.emplace_back(20);
//     v.emplace_back(30);
//     v.emplace_back(40);
//     v.emplace_back(50);
//     v.erase(v.begin());
//     v.insert(v.end(),2, 60);
//     v.pop_back();
//    for(auto it : v){
//     cout<<it<<" ";
//    }
//    cout<<endl;
//    cout<<v.size()<<endl;
//    v.clear();
//    cout<<v.empty()<<endl;

// }

// void listdemo(){
//     list<int> l;
//     l.push_back(2);
//     l.push_front(1);
//     l.emplace_back(4);
//     l.emplace_front(3);
//     for(auto it : l){
//         cout<<it<<" ";
//     }

// }

// void stackdemo(){
//     stack<int> st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     cout<<st.top()<<endl;
//     st.pop();
//     cout<<st.top()<<endl;
    
// }

// void priorityqueuedemo(){
//     priority_queue<int, vector<int>, greater<int>> pq;
//     pq.push(2);
//     pq.push(5);
//     pq.push(8);
//     pq.push(11);
//     cout<<pq.top();



// }

// void setdemo(){
//     set<int> s;
//     s.emplace(5);
//     s.emplace(5);
//     s.emplace(4);
//     s.emplace(3);
//     for(auto it : s){
//         cout<<it<<" ";
//     }
//     cout<<endl;
//     cout<<*(s.lower_bound(3))<<endl;
//     cout<<*(s.upper_bound(3));
// }

// void multisetdemo(){
//     multiset<int> muls;
//     muls.emplace(1);
//     muls.emplace(1);
//     muls.emplace(1);
//     muls.emplace(2);
    
//     for(auto it : muls){
//         cout<<it<<" ";
//     }
    
// }

// void mapdemo(){
//     map<pair<int, int>, int> mpp;
//     mpp.emplace(make_pair(1,1),2);
//     mpp.emplace(make_pair(3,3),4);
//     mpp.emplace(make_pair(5,5),6);
//     for(auto it : mpp){
//         cout<<it.first.first<<"&"<<it.first.second<<" : "<<it.second<<endl;
//     }

// }

// bool comp(pair<int, int> p1, pair<int, int> p2){
//     if(p1.second<p2.second) return true;
//     if(p1.second>p2.second) return false;
//     if(p1.second==p2.second){
//         if(p1.first<p1.second) return true;
//     }
// }

// void sortdemo(){
//     pair<int, int> pai[] = {{1,2}, {2,2}, {4,5}, {5,4}} ;
//     int n = 4;
//     sort(pai, pai+n, comp);
//     for( auto it : pai){
//         cout<<it.first<<" : "<<it.second<<endl;
//     }
// }

void additional_algo(){
    int num = 2;
    int cnt = __builtin_popcount(num);
    cout<<cnt;
    string s = "213";
    do{
        cout<<s<<endl;
    }while(next_permutation(s.begin(), s.end()));
}
int main(){
    additional_algo();
    // sortdemo();
    // mapdemo();
    // multisetdemo();
    // setdemo();
    // priorityqueuedemo();
    // listdemo();
    // stackdemo();
    // vectordemo();
}