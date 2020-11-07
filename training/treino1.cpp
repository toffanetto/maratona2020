/*  goldStack
*   Emanuel Alves da Silva E Souza
*   Gabriel Toffanetto França da Rocha
*   Willian Ferraz Gobira
*   Universidade Federal de Itajubá - Campus Itabira
*   Maratona de Programação -- 2020 -- WarmUp
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int capacidade, alunos, viagens;
    
    cin >> capacidade >> alunos;

    viagens = ceil(alunos/double((capacidade-1)));

    cout << viagens << endl;
    
} 
