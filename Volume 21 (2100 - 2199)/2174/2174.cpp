#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, total = 0;
    vector<string> v;
    string s;
    cin >> n;
    while (n--) {
        cin >> s;
        if(find(v.begin(), v.end(), s) != v.end()) continue;
        v.push_back(s);
        total++;
    }
    printf("Falta(m) %d pomekon(s).\n", 151-total);
    return 0;
}