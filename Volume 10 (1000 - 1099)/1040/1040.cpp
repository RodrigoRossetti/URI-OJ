#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
 double n1, n2, n3, n4, nE, M, MF;

 cin>>n1>>n2>>n3>>n4;

  cout<<fixed;
    cout.precision(1);

 M=(n1*2+n2*3+n3*4+n4*1)/(2.0+3.0+4.0+1.0);

if(M>=7){
   cout<<"Media: "<<M<<endl;
   cout<<"Aluno aprovado."<<endl;
 }
 else if (M<5){
   cout<<"Media: "<<M<<endl;
   cout<<"Aluno reprovado."<<endl;
 }
 
 else if (M>=5 && M<7){
   cout<<"Media: "<<M<<endl;
   cout<<"Aluno em exame."<<endl;
   cout<<"Nota do exame: ";
   cin>>nE;

   MF=(nE+M)/2;
   cout << nE << endl;

   if(MF>=5){
     cout<<"Aluno aprovado."<<endl;
     cout<<"Media final: "<<MF<<endl;
   }
   else{
   cout<<"Aluno reprovado"<<endl;
   cout<<"Media final: "<<MF<<endl;
   }

 }

  return 0;
}