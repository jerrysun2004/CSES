//december 3rd, 2024

#include <bits/stdc++.h>
 
 
using namespace std;
 
 
 
int main(){
    int n,x;
    cin >> n >> x;
    
    int a[n];
    int pref[n+1];
    int rollsum=0;
    pref[0] = 0;
    for (int i=0; i<n; i++){
        cin >> a[i];
        rollsum+=a[i];
        pref[i+1]=rollsum;
    }
    int l=0; int r=0;
    int ans = 0;
   //cout << n << x << endl;
    for (int i=0; i<n+1; i++)
     //cout << pref[i] << endl;
    while (l<n+1 && r<n+1){
          while ((pref[r]-pref[l]) < x && r<n+1){
           // cout << l << "< x " << r << endl;
            r++;
        }
        if ((pref[r]-pref[l])==x){
            ans++;
           // cout << l << " = x" << r << endl;
            r++;
        }
        while ((pref[r]-pref[l]) > x && l< n+1){
            //did n+1 and it iddn't work or i just forgot to include the n
            // then when i did it it just didn't terminate the build immediately
           // cout << l << "> x" << r << endl;
            l++;
        }
      
    }
    
 
    cout << ans << endl;
 
    return 0;
}
