//December 3rd, 2024

#include <bits/stdc++.h>
 
using namespace std;
 
 
int main(){
    int n;
    cin >> n;
    int pow=5;
    int ans = 0;
    while (pow<=n){
        ans+= n/pow;
        pow*=5;
    }
 
    cout << ans;
 
 
    return 0;
}
