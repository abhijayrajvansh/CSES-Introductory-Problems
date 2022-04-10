/**
 *    author:   abhijayrajvansh
 *    created:  10.04.2022 22:33:52
**/
#include <bits/stdc++.h>
using namespace std;

int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin >> n;
    long long total = (n * (n + 1)) / 2;
    long long sum = 0;
    for(long long i = 0; i < n - 1; i++){
        long long val;
        cin >> val;
        sum += val;
    }
    cout << total - sum << '\n';
    return 0;
}