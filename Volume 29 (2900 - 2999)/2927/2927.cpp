#include<bits/stdc++.h>
using namespace std;

int main() {
    long long a, c, x, y;
    cin >> a >> c >> x >> y;
    if (c-x-y > a) cout << "Igor feliz!" << endl;
    else if (c-x-y <= a && x > y/2) cout << "Caio, a culpa eh sua!" << endl;
    else if (c-x-y <= a && x <= y/2) cout << "Igor bolado!" << endl;
    return 0;
}