//December 3rd, 2024

#include <bits/stdc++.h>
 
using namespace std;
 
 
 
int main(){
    int n; 
    cin >> n;
     if (n==1){
        cout << 1;
        return 0;
     }
    if (n<=3 && n>1)
        cout << "NO SOLUTION";
    else{
        int k=2;
        while (k<=n){
            cout << k << " ";
            k+=2;
        }
        int a=1;
        while (a<=n){
            cout << a << " ";
            a+=2;
        }
    }
 
 
 
 
    return 0;
}

