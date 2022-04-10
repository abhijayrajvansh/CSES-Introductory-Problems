/**
 *    author:   abhijayrajvansh
 *    created:  10.04.2022 22:49:36
**/
#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    if(n == 2 || n == 3){
        cout << "NO SOLUTION" << '\n';
        return 0;
    }
    if(n == 4){
        cout << "2 4 1 3" << '\n';
        return 0;
    }
    for(int i = 1; i <= n; i += 2){
        cout << i << " ";
    }
    for(int i = 2; i <= n; i += 2){
        cout << i << " ";
    }
    return 0;
}