#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, flag;
    string s, atual;
    priority_queue<string> aux;
    priority_queue<string, vector<string>, greater<string>> pq;
    cin >> n >> ws;
    while (n--) {
        getline(cin, s);
        stringstream c(s);
        while (c >> atual) aux.push(atual);
        pq.push(aux.top());
        aux.pop();
        while(!aux.empty()) {
            atual = aux.top();
            aux.pop();
            if (atual != pq.top()) pq.push(atual);
        }
        atual = "";
        while(pq.size() > 1) {
            cout << pq.top() << " ";
            pq.pop();
        }
        cout << pq.top() << endl;
        pq.pop();
    }
    return 0;
}