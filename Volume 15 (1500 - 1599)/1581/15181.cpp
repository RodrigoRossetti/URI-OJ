#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, z;
    string s;
    vector<string> v;
    cin >> n;
    while (n--) {
        v.clear();
        z = 1;
        cin >> k;
        for (int i = 0; i < k; i++) {
            cin >> s;
            v.push_back(s);
        }
        for (int i = 1; i < k; i++) {
            if (v[i] != v[i-1]) {
                z = 0;
                break;
            }
        }
        z ? cout << v.front() << endl : cout << "ingles\n";
    }
    return 0;
}