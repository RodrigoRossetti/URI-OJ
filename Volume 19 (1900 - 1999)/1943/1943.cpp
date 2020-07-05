#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    if (n == 1) cout << "Top 1\n";
    else if (n <= 3) cout << "Top 3\n";
    else if (n <= 5) cout << "Top 5\n";
    else if (n <= 10) cout << "Top 10\n";
    else if (n <= 25) cout << "Top 25\n";
    else if (n <= 50) cout << "Top 50\n";
    else if (n <= 100) cout << "Top 100\n";
    return 0;
}