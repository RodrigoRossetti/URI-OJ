#include <bits/stdc++.h>
using namespace std;

struct FastStack { 
    stack<int> s; 
    long min; 

    void printMin() { 
        if (s.empty()) {
            printf("EMPTY\n");
            return;
        }
        printf("%ld\n", min);
    } 

    void pop() { 
        if (s.empty()) {
            printf("EMPTY\n");
            return;
        }
        long t = s.top(); 
        s.pop(); 
        if (t < min) min = 2 * min - t; 
    } 
  
    void push(long x) { 
        if (s.empty()) { 
            min = x; 
            s.push(x); 
            return;
        } 
        if (x < min) { 
            s.push(2 * x - min); 
            min = x; 
            return;
        } 
        s.push(x); 
    } 
}; 

int main() {
    FastStack st;
    long n, x;
    string s;
    scanf("%ld%*c", &n);
    while (n--) {
        cin >> s;
        if (s == "PUSH") scanf("%ld%*c", &x), st.push(x);
        else if (s == "POP") st.pop();
        else if (s == "MIN") st.printMin();
    }
    return 0;
}