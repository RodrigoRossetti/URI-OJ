#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout << fixed << setprecision(1);
    double n1, n2, n3, n4, media, exame;
	cin >> n1 >> n2 >> n3 >> n4;
    media = ((n1 * 2.0) + (n2 * 3.0) + (n3 * 4.0) + (n4 * 1.0))/10.0;
    cout << "Media: " << media << endl;
    if (media >= 7) cout << "Aluno aprovado.\n";
    else if (media < 5) cout << "Aluno reprovado.\n";
    else {
		cout << "Aluno em exame.\n";
        cin >> exame;
        cout << "Nota do exame: " << exame << endl;
        media = (media+exame) / 2;
		cout << "Aluno " << (media >= 5 ? "aprovado." : "reprovado.") << endl;
        cout << "Media final: " << media << endl;
    }
    return 0;
}