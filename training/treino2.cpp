/*  goldStack
*   Emanuel Alves da Silva E Souza
*   Gabriel Toffanetto França da Rocha
*   Willian Ferraz Gobira
*   Universidade Federal de Itajubá - Campus Itabira
*   Maratona de Programação -- 2020 -- WarmUp
*/

#include <bits/stdc++.h>

using namespace std;

int fatorial[] = {1,1,2,6,24,120,720,5040,40320,362880};

int main()
{
    int n,nfat=0;;
    cin >> n;
    int fats=0;

    while(n!=nfat){
        for(int i=9;i>=0;i--){
            if(fatorial[i]>n)
                continue;
                else if(nfat+fatorial[i]<=n){
                    fats++;
                    nfat+=fatorial[i];
                    i++;
                }
            if(nfat==n)
                break;
                
        }
    }

    cout << fats << endl;

}
