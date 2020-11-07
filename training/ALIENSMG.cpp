/*  goldStack
*   Gabriel Toffanetto França da Rocha
*   Universidade Federal de Itajubá - Campus Itabira
*   Maratona de Programação -- 2020 -- treinamento
*   ALIENSMG - Alienígenas -- SPOJ
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;

    while(cin >> n && n!=0){
    cin >> ws;
    set<string> mdnas;

    for(int i=0;i<n;i++){
        string aux;
        
        getline(cin,aux);

        sort(aux.begin(),aux.end());
        mdnas.insert(aux);
    }

    cout << mdnas.size() << endl;
    }
}