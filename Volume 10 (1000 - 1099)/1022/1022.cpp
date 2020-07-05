#include <bits/stdc++.h>
using namespace std;

int mdc(int a, int b) { 
    if (b == 0) return a; 
    return mdc(b, a % b);  
} 

int main() {
    int n1, d1, n2, d2, nc, m;
    char t1, t2, o;
    cin >> nc;
    while (nc--) {
        cin >> n1 >> t1 >> d1 >> o >> n2 >> t2 >> d2;
        if (o == '+') {
            if ((n1*d2 + n2*d1) == 0) m = (d1*d2);
            else if ((d1*d2) == 0) m = (n1*d2 + n2*d1);
            else m = mdc((n1*d2 + n2*d1), (d1*d2));
            if ((n1*d2 + n2*d1) < 0 || (d1*d2) < 0) cout << "-";
            cout << abs(n1*d2 + n2*d1) << t1 << abs(d1*d2) << " = ";
            if (((n1*d2 + n2*d1)/m) < 0 || ((d1*d2)/m) < 0) cout << "-";
            cout << abs((n1*d2 + n2*d1)/m) << t2 << abs((d1*d2)/m) << endl;
        }
        else if (o == '-') {
            if ((n1*d2 - n2*d1) == 0) m = (d1*d2);
            else if ((d1*d2) == 0) m = (n1*d2 - n2*d1);
            else m = mdc((n1*d2 - n2*d1), (d1*d2));
            if ((n1*d2 - n2*d1) < 0 || (d1*d2) < 0) cout << "-";
            cout << abs(n1*d2 - n2*d1) << t1 << abs(d1*d2) << " = ";
            if (((n1*d2 - n2*d1)/m) < 0 || ((d1*d2)/m) < 0) cout << "-";
            cout << abs((n1*d2 - n2*d1)/m) << t2 << abs((d1*d2)/m) << endl;
        }
        else if (o == '*') {
            if ((n1*n2) == 0) m = (d1*d2);
            else if ((d1*d2) == 0) m = (n1*n2);
            else m = mdc((n1*n2), (d1*d2));
            if ((n1*n2) < 0 || (d1*d2) < 0) cout << "-";
            cout << abs(n1*n2) << t1 << abs(d1*d2) << " = ";
            if (((n1*n2)/m) < 0 || ((d1*d2)/m) < 0) cout << "-";
            cout << abs((n1*n2)/m) << t2 << abs((d1*d2)/m) << endl;
        }
        else if (o == '/') {
            if ((n1*d2) == 0) m = (n2*d1);
            else if ((n2*d1) == 0) m = (n1*d2);
            else m = mdc((n1*d2), (n2*d1));
            if ((n1*d2) < 0 || (n2*d1) < 0) cout << "-";
            cout << abs(n1*d2) << t1 << abs(n2*d1) << " = ";
            if (((n1*d2)/m) < 0 || ((n2*d1)/m) < 0) cout << "-";
            cout << abs((n1*d2)/m) << t2 << abs((n2*d1)/m) << endl;
        }
    }
    return 0;
}