#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, x;
    while (cin >> n >> k && n && k) {
        int total = 0, perg[101] = {0};
        while (n--) {
            cin >> x;
            perg[x]++;
            if (perg[x] >= k) {
                total++;
                perg[x] = INT_MIN;
            }
        }
        cout << total << endl;
    }
    return 0;
}