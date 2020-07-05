#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    deque<int> deck;
    while (cin >> n && n) {
        deck.clear();
        for (int i = n; i > 0; i--) deck.push_back(i);
        cout << "Discarded cards: ";
        while (deck.size() != 2) {
            x = deck.back();
            cout << x << ", ";
            deck.pop_back();
            x = deck.back();
            deck.pop_back();
            deck.push_front(x);
        }
        x = deck.back();
        cout << x << endl;
        deck.pop_back();
        x = deck.back();
        deck.pop_back();
        deck.push_front(x);
        cout << "Remaining card: " << deck.back() << endl;
    }
    return 0;
}