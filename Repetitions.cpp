/**
 *    author:   abhijayrajvansh
 *    created:  10.04.2022 22:44:56
**/
#include <bits/stdc++.h>
using namespace std;

int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    s = '_' + s + '_';
    int c = 0, ans = 0;
    for(int i = 0; i < s.size(); i++){
        ans = max(ans, c);
        if(s[i - 1] == s[i]){
            c++;
        }
        else{
            c = 1;
        }
    }
    cout << ans << '\n';
    return 0;
}