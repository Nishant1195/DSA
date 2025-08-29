#include<bits/stdc++.h>
using namespace std;

int cnt = 1;
int sum_dig = 0;
void sum(int n){
    if(cnt < n){
        sum_dig += cnt;
        cnt++;
        sum(n);
    }
}

int main(){
    sum(3);
    cout<<sum_dig;
}