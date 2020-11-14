/*  goldStack
*   Emanuel Alves da Silva E Souza
*   Gabriel Toffanetto França da Rocha
*   Willian Ferraz Gobira
*   Universidade Federal de Itajubá - Campus Itabira
*   Maratona de Programação -- 2020 -- 1a fase
*   
*/

#include <bits/stdc++.h>

#define mod 1000000007
#define num 5782344


using namespace std;

typedef pair<long long int,long long int> ponto;

typedef unsigned long long int ll;

bool dentro(const ponto &p, const ponto &m){
    return(p.first>=m.first && p.second>=(m.second-(p.first-m.first)/2) && p.second<=(m.second+(p.first-m.first)/2));    
}

void calculaXY(ponto &metralhadora, const int &p)
{
    metralhadora.first = -1-( p + metralhadora.first)%mod;
    metralhadora.second = ( p + metralhadora.second)%mod;
}

ll somatorio(vector<ponto> inimigos, const ponto &metralhadora)
{
    ll total = 0;
    int j=0;
    for(int i=0;i<inimigos.size();i++){
        if(dentro(inimigos.at(i),metralhadora)){
            cout << "dentro" << endl;
            total = int(total +(i+1)*pow(num,j) )%mod;
            j++;
        }
    }
    return total;
}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int  n, q;
    ll x, y, p = 0;

    vector<ponto> inimigos;
    ponto metralhadora;

    cin >> n >> q;

    for(int i=0;i<n;i++){
        cin >> x >> y;
        inimigos.push_back(make_pair(x,y));
    }
    
    while(q--){
        cin >> metralhadora.first >> metralhadora.second;

        calculaXY(metralhadora, p);
        cout << "Metralhadora: " << metralhadora.first << " " << metralhadora.second << endl;
        p = somatorio(inimigos, metralhadora);
        cout << p << endl;
        
    }

}