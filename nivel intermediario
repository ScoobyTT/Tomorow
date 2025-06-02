TREVAMATA

#include <iostream>
#include <vector>
#include <utility>
#include <string>
using namespace std;

int main(){

    int N, C, i;
    
    struct pessoa{
        string Nome;
        int K;
    };
    
    vector<pessoa> amigos_bilbo;
    pessoa p;
    vector<string> amigos_tragedia;
    
    cin >> N;
    
    for(i = 0; i < N; i++){
        cin >> p.Nome >> p.K;
        amigos_bilbo.push_back(p);
    }
    
    cin >> C;
    
    for(i=0; i<N; i++){
        if(amigos_bilbo[i].K > C){
            amigos_tragedia.push_back(amigos_bilbo[i].Nome);
        }else{
            continue;
        }
    }
    
    if(amigos_tragedia.size() > 0){
        cout << "Vamos virar almoço de aranhas gigantes!" << endl;
        for(i=0; i<amigos_tragedia.size(); i++){
            cout << amigos_tragedia[i] << endl;
        }
    }else{
        cout << "Vamos todos encontrar a montanha!" << endl;
    }
    
    return 0;
}

----------------------------------------------------------

ORI

#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main(){

    int N, M, A, P = 0, i;
    vector<pair<int, int>> missoes(100);
    pair<int, int> missao;

    //missoes cumpriddas
    cin >> N;
 
    //entradas do xp de cada missão 
    for (i=0; i<N; i++){
        cin >> missoes[i].first;
    }
    
    //entradas do bonus de cada missão
    for (i=0; i<N; i++){
        cin >> missoes[i].second;
    }
    
    //total de xp para subir o nivel
    //bonus adicional
    cin >> M >> A;
    
    //calculo da pontuação total
    for(i=0; i<N; i++){
        P += missoes[i].first * (missoes[i].second+A);
    }
    
    //verificação
    if(P>=M){
        cout << "Upou de Nivel!" << endl;
    }else{
        cout << "Nao foi dessa vez!" << endl;
    }

    return 0;
}

---------------------------------------------

YODA

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

struct jedi{
    string nome; //nome do Jedi (5 caracteres, letras maiusculas, sem espaço)
    int M; //missões atribuidas inicialmente
    int P; //missões que faltaram cumprir 
};

//função de comparação
bool cmp(jedi a, jedi b){
    return (a.nome < b.nome || a.nome == b.nome && a.P < b.P);
}

int main(){
    int N, C, i; //C = missões completadas

    //qtde de jovens interessados em ser um Jedi
    cin >> N;

    jedi j;
    vector<jedi> jedis;

    //entradas
    for(i=0; i < N; i++){
        cin >> j.nome >> j.M >> j.P;
        jedis.push_back(j);
    }

    //função de ordernação
    stable_sort(jedis.begin(), jedis.end(), cmp);

    //saidas
    for(i=0; i < N; i++){
        C = jedis[i].M - jedis[i].P;
        cout << jedis[i].nome << " " << C << endl;
    }
    
    return 0;

}

--------------------------------------------

DARK

#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

struct data{
    int D;
    int M;
    int A;
};

//função de comparação
bool cmp(data a, data b){
    return (a.A < b.A || a.A == b.A && a.M < b.M || a.A == b.A && a.M == b.M && a.D < b.D);
}

int main(){

    int e = 0, i;
    data d;
    vector<data> datas;

    //entradas
    while(cin >> d.D >> d.M >> d.A){
        datas.push_back(d);
        e++;
    }
    
    //ordernação
    stable_sort(datas.begin(), datas.end(), cmp);

    //saidas
    for(i=0; i < e; i++){
        cout << datas[i].D << " " << datas[i].M << " " << datas[i].A << " " << endl;
    }
    
    return 0;

}

-----------------------------------------

FEITIÇOS 

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int N, M, C, i;
    string a;
    vector<string> fg(10000); //feitiços gerais
    vector<string> fp(10000); //feitiços proibidos
    vector<string> cf(100000); //consultas a serem feitas

    //n° de feitiços gerais
    cin >> N;

    //lista de feitiços gerais
    for(i=0; i < N; i++){
        cin >> fg[i];
    }

    //n° de feitiços proibidos
    cin >> M;

    //lista de feitiços proibidos
    for(i=0; i < M; i++){
        cin >> fp[i];
    }

    //n° consultas a serem feitas
    cin >> C;

    //lista de consultas a serem feitas
    for(i=0; i < C; i++){
        cin >> cf[i];
    }
    
    //ordenação do vetor de feitiços gerais
    stable_sort(fg.begin(), fg.end());
    
    //ordenação do vetor de feitiços proibidos
    stable_sort(fp.begin(), fp.end());

    //saidas
    for(i=0; i < C; i++){
        if(binary_search(fg.begin(), fg.end(), cf[i])){
            cout << "Geral" << endl;
        }else if(binary_search(fp.begin(), fp.end(), cf[i])){
            cout << "Proibido" << endl;
        }
    }
    
    return 0;
    
}

------------------------------------

COLONOS

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

struct candidato{
    int nota;
    int id;
};

//ordenação decrescente das notas e crescente do id
bool cmp(candidato a, candidato b){
    return (a.nota > b.nota || a.nota == b.nota && a.id < b.id);
}

int main(){
    
    int N, Q, C, i, p;
    candidato c;
    vector<candidato> candidatos;
    vector<candidato> consultas;
    vector<candidato>::iterator it;
    
    //qtde candidatos que serão selecionados e qtde total de candidatos
    cin >> N >> Q;
    
    //entradas de notas e id
    for(i = 0; i < Q; i++){
        cin >> c.nota >> c.id;
        candidatos.push_back(c);
    }
    
    //qtde de consultas que serão feitas pelos candidatos
    cin >> C;
    
    //entradas das consultas
    for(i=0; i < C; i++){
        cin >> c.nota >> c.id;
        consultas.push_back(c);
    }
    
    //ordenação do vetor de candidatos
    stable_sort(candidatos.begin(), candidatos.end(), cmp);
    
    //saidas
    for(i=0; i < consultas.size(); i++){
        it = lower_bound(candidatos.begin(), candidatos.end(), consultas[i], cmp);
        //encontrando a posição dos elementos em "consultas" no vetor candidatos
        p = it - candidatos.begin();
        if(p < N){
            cout << "Sim" << endl;
        }else{
            cout << "Nao" << endl;
        }
    }
    
    return 0;
    
}

----------------------------------

POKEMON

#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main(){
    int N, M, i, j;
    set<int> X; //codigos dos pokemons já encontrados
    vector<int> X2; //codigos dos pokemons escondidos

    //qtde de pokemons encontrados
    cin >> N; 

    //inserindo os codigos pokemons encontrados no conjunto
    for(i=0; i < N; i++){
        cin >> j;
        X.insert(j);
    }

    //qtde de pokemons escondidos
    cin >> M;

    //inserindo os codigos dos pokemons escondidos no vetor
    for(i=0; i < M; i++){
        cin >> j;
        X2.push_back(j);
    }

    //saida
    for(i=0; i < X2.size(); i++){
        if(X.count(X2[i])){
            cout << "Repetido" << endl;
        }else{
            cout << "Temos que pegar!" << endl;
            X.insert(X2[i]);
        }
    }
}

-----------------------------

CLASH ROYALE

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(){
    int N, L, i, j, c = 0, a;
    queue<int> meus_monstros;
    queue<int> advers_monstros;
    
    //número de monstros na minha fila de cartas
    cin >> N;
    
    //poder dos monstros da minha fila
    for(i=0; i < N; i++){
        cin >> j;
        meus_monstros.push(j);
    }
    //número de rodadas
    cin >> L;
    
    //poder dos monstros do adversário
    for(i=0; i < L; i++){
        cin >> j;
        advers_monstros.push(j);
    }
    
    //combate
    while(!meus_monstros.empty() && !advers_monstros.empty()){
        if(meus_monstros.front() >= advers_monstros.front()){
            a = meus_monstros.front();
            meus_monstros.pop();
            meus_monstros.push(a);
            advers_monstros.pop();
        }else{
            meus_monstros.pop();
            advers_monstros.pop();
            c++;
        }
    }
    
    //numero de monstros mortos
    cout << c << endl;
    
    return 0;
}

-------------------------------------
Samwell Tarly

#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <iterator>
#include <utility>
using namespace std;

int main(){
    int N, M, i;
    map<string, string> d;
    string p, t, j;
    vector<string> f;
    map<string, string>::iterator it;
    
    //qtde de palavras no dicionario
    cin >> N;
    
    //adicionando palavras no dicionario
    for(i=0; i < N; i++){
        cin >> p >> t;
        d[p] = t;
    }
    
    //qtde de palavras a serem traduzidas
    cin >> M;
    
    //frase a ser traduzida
    for(i=0; i < M; i++){
        cin >> j;
        f.push_back(j);
    }
    
    //tradução
    for(i=0; i < f.size(); i++){
        it = d.find(f[i]);
        if(d.count(f[i])){
            cout << it->second << " ";
        }else{
            cout << f[i] << " ";
        }
        
    }
}

---------------------------------------

TETRES

#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
    int N, M, i = 0, p = 0;
    string b, a1, a2;
    stack<string> blocos;
    
    cin >> N >> M;
    
    while(i < N && blocos.size() < M){
        cin >> b;
        
        if(blocos.empty()){
            blocos.push(b);
        }else{
            a1 = b;
            a2 = blocos.top();
            
            if(a1[0] != a2[0] && a1[1] != a2[1] && a1[2] != a2[2]){
                blocos.pop();
                p += 10;
            }else{
                blocos.push(a1);
            }
        }
        
        i++;
        
        if(blocos.size() >= M){
            cout << "game over" << endl;
            return 0;
        }
    }
    
    cout << p << endl;
    return 0;
}

-------------------------------

ARMAZEM

#include <iostream>
#include <queue>
#include <utility>
#include <string>
#include <vector>
using namespace std;

int main(){
    int D, X, N, i, j;
    priority_queue<pair<int, string>> fila;
    pair<int, string> p;
    
    //número de dias de atendimento
    cin >> D;
    
    //atendimentos por dias
    cin >> X;
    
    for(i=0; i < D; i++){
        //qtde de pessoas aguardando em cada dia
        cin >> N;
        
        //inserindo o nome e a idade no priority_queue
        for(j=0; j < N; j++){
            cin >> p.second >> p.first;
            fila.push(p);
        }
        
        j = 0;
        
        //saidas
        while(j < X){
            cout << fila.top().second << endl;
            fila.pop();
            j++;
        }
    }
}

---------------------------------

LEPRECHAUN

#include <iostream>
#include <set>
using namespace std;

int main(){
    int N, i=0, a, l;
    set<int> n;
    
    //numero de bolas que serão colocados na caixa
    cin >> N;
    
    //numeros do primeiro leprechaun
    for(i=0; i < N/2; i++){
        cin >> a;
        n.insert(a);
    }
    
    //números do segundo leprechaun
    for(i=0; i < N/2; i++){
        cin >> a;
        n.insert(a);
    }
    
    //saidas
    if(n.size() == N){
        cout << "Sortudo, ganhou os dois potes" << endl;
    }else if(n.size() >= (N/2)+1 && n.size() <= N-1){
        cout << "Ganhou um pote" << endl;
    }else if(n.size() == N/2){
        cout << "Azarado" << endl;
    }
}
