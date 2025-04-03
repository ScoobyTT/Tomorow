#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;

struct mandalorian{
    string nome; // nome do mandaloriano
    int m; // missoes atribuídas
    int j; // missoes longas
};

bool cmp(mandalorian a, mandalorian b){
    return (a.nome < b.nome || (a.nome == b.nome && a.m < b.j));
}

int main(){
    int n;
    
    cin >> n;

    mandalorian grog;
    vector<mandalorian> jed;

    // Entrada de dados
    for(int i = 0; i < n; i++){
        cin >> grog.nome >> grog.m >> grog.j;
        jed.push_back(grog);
    }

    // Ordenação dos mandalorianos
    stable_sort(jed.begin(), jed.end(), cmp);

    // Saída dos resultados
    for(int i = 0; i < n; i++){
        int m = jed[i].m - jed[i].j;  // Calculando a diferença de missões
        cout << jed[i].nome << " " << m << endl;
    }
    
    return 0;
}
