/**
 *    author:   abhijayrajvansh
 *    created:  10.04.2022 22:22:17
**/
#include <bits/stdc++.h>
using namespace std;

int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin >> n;
    cout << n << " ";
    while(n != 1){
        if(n % 2 == 0){
            n /= 2;
            cout << n << " ";
        }
        else{
            n *= 3;
            n++;
            cout << n << " ";
        }
    }
    return 0;
}