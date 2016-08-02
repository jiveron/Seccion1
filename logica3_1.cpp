/*
*Punto 3 de la seccion 1 del trabajo practico
*Dada una proposicion compuesta pide ingresar el valor de verdad de las proposiciones simples y muestra su valor de verdad
*30/7/2016
*/

#include <iostream>
using namespace std;

int main(){
  bool P, S, T, J;
  cout << "Dada la siguiente proposicion:\n\n(P^S^T)v(¬S^¬P^J)\n\nDar los valores de verdad de las proposiciones simples(1=verdadero ; 0=falso):\n\nP: ";
  cin >> P;
  cout << "S: ";
  cin >> S;
  cout << "T: ";
  cin >> T;
  cout << "J: ";
  cin >> J;

  if( (P and S and T) or (!S and !P and J) ){
    cout << "\nLa proposicion es verdadera.\n\n";
  }
  else{
    cout << "\nLa proposicion es falsa.\n\n";
  }
}
