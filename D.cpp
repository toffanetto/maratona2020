/*  goldStack
*   Emanuel Alves da Silva E Souza
*   Gabriel Toffanetto França da Rocha
*   Willian Ferraz Gobira
*   Universidade Federal de Itajubá - Campus Itabira
*   Maratona de Programação -- 2020 -- 1a fase
*   D - Dança da Divisibilidade
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
        cin.tie(NULL);

    int n,m,k;
    cin >> n >> m >> k;

    queue<int> man;
    queue<int> woman;

    for(int i=0;i<k;i++){
        int aux;
        cin >> aux;
        woman.push(aux);
    }
    for(int i=0;i<k;i++){
        int aux;
        cin >> aux;
        man.push(aux);
    }

    for(int i=0;i<k;i++){
        woman.push(woman.front());
        woman.pop();
    }

    

}