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
    //ios_base::sync_with_stdio(false);
    //    cin.tie(NULL);

    string str;
    int GL, GR, PL, PR;
    bool jogador;
 
    cin >> str;
    GL = GR = PL = PR = 0;
    jogador = true; // true é o da esquerda
    for (const char &ch : str)
    {
        if (GL < 2 && GR < 2)
        {
            if (ch == 'S')
            {
                if (jogador)
                {
                    PL++;
                    if ((PL >= 5 && PL - PR >= 2) || PL >= 10)
                    {
                        PL = PR = 0;
                        GL++;
                    }
                }
                else
                {
                    PR++;
                    if ((PR >= 5 && PR - PL >= 2) || (PR >= 10))
                    {
                        PL = PR = 0;
                        GR++;
                    }
                }
            }
            else if (ch == 'R')
            {
                if (jogador)
                {
                    PR++;
                    if ((PR >= 5 && PR - PL >= 2) || (PR >= 10))
                    {
                        PL = PR = 0;
                        GR++;
                    }
                }
                else
                {
                    PL++;
                    if ((PL >= 5 && PL - PR >= 2) || PL >= 10)
                    {
                        PL = PR = 0;
                        GL++;
                    }
                }
                jogador = !jogador;
            }
        }
        if (ch == 'Q')
        {
            if (GL == 2 || GR == 2)
            {
                if (GL > GR)
                {
                    cout << GL << " (winner) - " << GR;
                }
                else
                {
                    cout << GL << " - " << GR << " (winner)";
                }
                cout << endl;
            }
            else
            {
                cout << GL << " (" << PL;
                if (jogador)
                    cout << "*";
                cout << ") - " << GR << " (" << PR;
                if (!jogador)
                    cout << "*";
                cout << ")\n";
            }
        }
    }
}