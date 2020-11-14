/*  goldStack
*   Emanuel Alves da Silva E Souza
*   Gabriel Toffanetto França da Rocha
*   Willian Ferraz Gobira
*   Universidade Federal de Itajubá - Campus Itabira
*   Maratona de Programação -- 2020 -- 1a fase
*   
*/

#include <iostream>
#include <set>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
        cin.tie(NULL);

    int n;
    cin >> n;
    bool flag=true;
    int c,d,l,r;
    set<pair<int,int>> navios;

    for(int i=0;i<n;i++){
        cin >> d >> l >> r >>c;
        pair<int,int> pos;
        for(int j=0;j<l;j++){
            if(d==1){
                if(r+l-1>10)
                    flag = false;
                    pos = make_pair(r+j,c);
            }
            else{
                if(c+l-1>10)
                    flag = false;
                pos = make_pair(r,c+j);                
            }

            if(navios.find(pos)==navios.end())
                navios.insert(pos);
                else 
                    flag=false;
        }
    }

    if(flag)
        cout << "Y" << endl;
        else 
        cout << "N" << endl;

}