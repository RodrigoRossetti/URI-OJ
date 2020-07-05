#include<bits/stdc++.h>
using namespace std;

int main() {
    int x;
    vector<int> p;
    for (int i = 0; i < 4; i++) {
        cin >> x;
        p.push_back(x);
    }
    sort(p.begin(), p.end());
    cout << min(abs((p[0]+p[2])-(p[1]+p[3])), abs((p[0]+p[3])-(p[1]+p[2]))) << endl;
    return 0;
}