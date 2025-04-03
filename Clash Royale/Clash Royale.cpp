#include <queue>
#include <vector>
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;  // Corrigido de ciin para cin

    queue<int> fila;
    queue<int> fil;
    
    // Corrigido o loop para inserir os valores na fila
    for(int i = 0; i < n; i++) {
        int j;
        cin >> j;
        fila.push(j);
    }

    int l;
    cin >> l;  // Corrigido de cin l; para cin >> l;

    // Corrigido o loop para inserir os valores na segunda fila
    for(int i = 0; i < l; i++) {
        int j;
        cin >> j;
        fil.push(j);
    }

    // Corrigido a lógica de comparação entre as filas
    if(fila.size() >= fil.size()) {
        int a = fila.front();  // Corrigido para acessar corretamente o front
        fila.pop();             // Corrigido para usar o pop() corretamente
        fila.push(a);           // Corrigido para usar o push() corretamente
        cout << a << endl;
    } else {
        int cemiterio = fil.front();  // Corrigido para acessar corretamente o front
        fil.pop();                    // Corrigido para usar o pop() corretamente
        fil.push(cemiterio);          // Corrigido para usar o push() corretamente
        cout << cemiterio << endl;
    }

    return 0;
}
