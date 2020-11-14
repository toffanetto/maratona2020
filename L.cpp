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

typedef vector<string> vs;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int l, c, n;

    cin >> l >> c;
    
    vs palavras;

    vector<set<char>> letras;

    char m[l][c];


    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            cin >> m[i][j];
        }
    }
    
    cin >> n;
    
    for(int i=0;i<n;i++){
        set<char>letra;
        string str;
        cin >> str;
        sort(str.begin(), str.end()); // Ordenando a palavra
        palavras.emplace_back(str);   
        for(const char &ch:str) 
            letra.insert(ch);
        letras.push_back(letra);
    }

    vector<char> letrasRepiditas;
    for(char ch = 'A'; ch <= 'Z'; ch++)
    {
        int repitidas = 0;
        for(const set<char> &st:letras)
        {
            if(st.find(ch) != st.end())
                repitidas++;
            if(repitidas == 2) break;
        }
        if(repitidas == 2)  
            letrasRepiditas.push_back(ch);
    
    }

    sort(palavras.begin(), palavras.end()); // ordenando o vetor de palavras

}
