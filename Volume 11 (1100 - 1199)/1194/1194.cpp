#include<bits/stdc++.h>
using namespace std; 

int busca(char s[], int x, int n) { 
	for (int i = 0; i < n; i++) 
		if (s[i] == x) 
			return i; 
	return -1; 
} 
 
void imprime(char in[], char pre[], int n) { 
	int raiz = busca(in, pre[0], n); 
	if (raiz != 0) 
		imprime(in, pre + 1, raiz); 
	if (raiz != n - 1) 
		imprime(in + raiz + 1, pre + raiz + 1, n - raiz - 1); 
	cout << pre[0]; 
} 

int main() {
    int c, n;
    cin >> c;
    while (c--) {
        cin >> n;
        char in[n], pre[n];
        cin >> pre >> in;
        imprime(in, pre, n); 
        cout << endl;
    } 
	return 0; 
} 
