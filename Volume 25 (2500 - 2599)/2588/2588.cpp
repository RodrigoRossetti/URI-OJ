#include <bits/stdc++.h>
using namespace std;

int main() {
    int impar, arr[26];
    string s;
    while (getline(cin, s)) {
        impar = 0;
        memset(arr, 0, sizeof(arr));
        for (int i = 0; i < s.length(); i++) arr[s[i]-'a']++;
        for (int i = 0; i < 26; i++) if (arr[i] % 2 != 0) impar++;
        if (impar == 0) printf("0\n");
        else printf("%d\n", impar-1);
    }
    return 0;
}