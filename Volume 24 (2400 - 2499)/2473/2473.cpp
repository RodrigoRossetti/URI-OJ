#include<bits/stdc++.h>
using namespace std;

int main(){
    int l1[6], l2[6], i, j, total = 0;
    for (i = 0; i < 6; i++)
        cin >> l1[i];
    for (i = 0; i < 6; i++)
        cin >> l2[i];
    for (i = 0; i < 6; i++)
        for (j = 0; j < 6; j++)
            if (l1[i] == l2[j])
                total++;
    if (total == 3) cout << "terno\n";
    else if (total == 4) cout << "quadra\n";
    else if (total == 5) cout << "quina\n";
    else if (total == 6) cout << "sena\n";
    else cout << "azar\n";
    return 0;
}