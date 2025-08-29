#include<bits/stdc++.h>
using namespace std;

// void digits_concept(int N){
//     int n=N;
//     while(n>0){
//         int lastdigit = n%10;
//         cout<<lastdigit<<endl;
//         n=n/10;
//     }
    
// }

// void digits_problem(int n){
//     int cnt=0;
//     while(n>0){
        
//         n=n/10;
//         cnt++;
        
//     }
//     cout<<cnt<<endl;
// }

// void opt_digit_problem(int n){
//     int cnt = (int)(log10(n)+1);
//     cout<<cnt<<endl;

// }

// void armstrong(int n){
//     int original = n;
//     int num = 0;
//     while(n!=0){
//         int lastdigit = n%10;
//         num = num + (lastdigit*lastdigit*lastdigit);
//         n=n/10;
//     }
//      if(num == original){
//             cout<<"Armstrong"<<endl;
//         }else{
//             cout<<"Not Armstrong"<<endl;
//         }
    
    
// }

// void printdivisions(int n){
//     for(int i = 1; i<=n; i++){
//         if(n%i==0){
//             cout<<i<<endl;
//         }
//     }
    

// }

// void optimised_printdiv(int n){
//     vector<int> ls;
//     for(int i=1; i<=sqrt(n); i++){
//         if(n%i==0){
//             ls.push_back(i);
//             if((n/i) != i){
//                 ls.push_back(n/i);
//             }
//         }
//     }
//     sort(ls.begin(), ls.end());
//     for(auto i : ls){
//         cout<<i<<" ";
//     }
// }

void eculadian(int n1, int n2) {
    while(n1 > 0 && n2 > 0){
        if(n1 > n2) n1 = n1 % n2;
        else n2 = n2 % n1;
    }
    if(n1 == 0) cout<<n2;
    else cout<<n1;
}
int main(){
    // digits_concept(7789);
    // digits_problem(4);
    // digits_problem(14);
    // digits_problem(1467);
    // digits_problem(0);
//     opt_digit_problem(4);
//     opt_digit_problem(14);
//     opt_digit_problem(145);
//     opt_digit_problem(0);
// 
    // armstrong(153);
    // armstrong(35);
    // printdivisions(36);

    // optimised_printdiv(36);
    eculadian(20, 15);

}