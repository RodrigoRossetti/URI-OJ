#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int d = 0, h = 0, m = 0, s = 0;
    int df = 0, hf = 0, mf = 0, sf = 0;
    char trash[20];
    
    cin.get(trash, 4);
    cin >> d;
    cin >> h;
    cin.get(trash, 3);
    cin >> m;
    cin.get(trash, 3);
    cin >> s;
    cin.getline(trash, 0);
    cin.get(trash, 4);
    cin >> df;
    cin >> hf;
    cin.get(trash, 3);
    cin >> mf;
    cin.get(trash, 3);
    cin >> sf;
    
    long dur = (df*86400 + hf*3600 + mf*60 + sf) - (d*86400 + h*3600 + m*60 + s);
    cout << dur/86400 << " dia(s)\n";
    cout << (dur%86400)/3600 << " hora(s)\n";
    cout << ((dur%86400)%3600)/60 << " minuto(s)\n";
    cout << ((dur%86400)%3600)%60 << " segundo(s)\n";
}