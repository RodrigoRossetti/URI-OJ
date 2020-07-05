#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, flag;
    string dieta, cafe, almoco;
    priority_queue<char, vector<char>, greater<char>> pq;
    cin >> n >> ws;
    while (n--) {
        flag = 1;
        getline(cin, dieta);
        getline(cin, cafe);
        getline(cin, almoco);
        for (int i = 0; i < cafe.length() && flag; i++) {
            auto c = dieta.find(cafe[i]);
            if (c != string::npos) dieta.replace(c, 1, "");
            else {
                flag = 0;
                break;
            }
        }
        for (int i = 0; i < almoco.length() && flag; i++) {
            auto c = dieta.find(almoco[i]);
            if (c != string::npos) dieta.replace(c, 1, "");
            else {
                flag = 0;
                break;
            }
        }
        if (flag) {
            for (int i = 0; i < dieta.length(); i++) pq.push(dieta[i]);
            while (!pq.empty()) {
                cout << pq.top();
                pq.pop();
            }
            cout << endl;
        }
        else printf("CHEATER\n");
    }
    return 0;
}
