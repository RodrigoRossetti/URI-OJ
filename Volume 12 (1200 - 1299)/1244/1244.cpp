#include <bits/stdc++.h>
using namespace std;

bool comp(string s1, string s2) {
    return s1.length() > s2.length();
}

int main() {
    int n;
    vector<string> v;
    string s;
    cin >> n >> ws;
    while (n--) {
        getline(cin, s), v.clear();
        stringstream ss(s);
        while (ss >> s) v.push_back(s);
        stable_sort(v.begin(), v.end(), comp); // Stable sort não muda a ordem se o tamanho das strings forem iguais
        for (int i = 0; i < v.size()-1; i ++) cout << v[i] << " ";
        cout << v[v.size()-1] << endl;
    }
    return 0;
}