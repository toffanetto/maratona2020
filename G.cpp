/*  goldStack
*   Emanuel Alves da Silva E Souza
*   Gabriel Toffanetto França da Rocha
*   Willian Ferraz Gobira
*   Universidade Federal de Itajubá - Campus Itabira
*   Maratona de Programação -- 2020 -- 1a fase
*   
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    list<int> valores;
    int caixas,valor;
    cin >> caixas;
    int inicial=100;
    valores.push_back(inicial);
    for(int i=0;i<caixas;i++){

        cin >> valor;
        inicial+=valor;
        valores.emplace_back(inicial);
    }
    
    valores.sort();

    cout << valores.back() << endl;


}
