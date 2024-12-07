//December 3rd, 2024

#include <bits/stdc++.h>
 
 
using namespace std;
 
 
 
int main(){
    int n;
    cin >> n;
    
    int a[n];
    int pref[n+1];
    int rollsum=0;
    pref[0] = 0;
    for (int i=0; i<n; i++){
        cin >> a[i];
        if (a[i] <0){
            a[i] = n- abs(a[i])% n;
        } else{
        a[i] = a[i] % n;
        }    
        rollsum+=a[i];
        rollsum = rollsum % n;
        pref[i+1]=rollsum;
    }
    long long ans = 0;
   //cout << n << x << endl;
    map<int, int > ocr;
    for (int i=0; i< n+1; i++){
        ocr[pref[i]]++;
    }
    map<int,int>::iterator i;
    for (i=ocr.begin(); i!=ocr.end(); i++){
        //cout << i->first << " " << i->second << endl;
        ans+=(long long ) i->second*(i->second-1)/2;
        
    }
   
    
    cout << ans << endl;
 
    return 0;
}
