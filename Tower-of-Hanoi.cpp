/**
 *    author:   abhijayrajvansh
 *    created:  10.04.2022 15:24:16
**/
#include <bits/stdc++.h>
using namespace std;
/*
void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod)
{
    if (n == 0)
    {
        return;
    }
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
    cout << "Move disk " << n << " from rod " << from_rod << " to rod " << to_rod << endl;
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}
*/
void solve(int n, char source, char destination, char helper){

    if(n == 0){
        return;
    }

    solve(n - 1, source, helper, destination);
    cout << source << " " << destination << '\n';
    solve(n - 1, helper, destination, source);

}

int main (){
    int n;
    cin >> n;
    cout << pow(2, n) - 1 << '\n';
    solve(n, '1', '3', '2');
    return 0;
}