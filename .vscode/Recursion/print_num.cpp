#include<bits/stdc++.h>
using namespace std;
// int cnt = 1;
// void print_n(int n){
//   if(cnt <= n){
//     cout<<cnt<<":"<<n<<endl;
//     cnt++;
//     print_n(n);
//   }
// }

void f(int i, int n){
    if(i>n) return;
    f(i+1, n);
    cout<<i<<endl;
}

int main(){
    // print_n(33);
    f(1,5);
}