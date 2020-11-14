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

    int p,f;
    cin >> p >> f;
    int m[p][f];
    bool flag = true;
    for(int i=0;i<f;i++){
        int a,b;
        cin >> a >> b;
        m[a][b]=1;
    }
    
    if(flag)
        cout << "Y" << endl;
        else 
        cout << "N" << endl;

}