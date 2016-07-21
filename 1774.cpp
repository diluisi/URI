#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>

using namespace std;

class Aresta{
    int vertice1, vertice2, peso;
public:
    Aresta(int v1, int v2, int peso){
        vertice1 = v1;
        vertice2 = v2;
        this->peso = peso;
    }

    int obterVertice1(){
        return vertice1;
    }

    int obterVertice2(){
        return vertice2;
    }

    int obterPeso(){
        return peso;
    }

    //sobrescrita do operador "<"

    bool operator < (const Aresta& aresta2) const {
        return (peso < aresta2.peso);
    }

};

class Grafo{
    int V; // Número de Vértices
    vector<Aresta> arestas; //vetor de arestas
    vector<int> pai;
    vector<int> rank;
public:
    Grafo(int V){
        this->V = V;
    }
    //Função que adiciona uma aresta
    void adicionarAresta(int v1, int v2, int peso){
        Aresta aresta(v1, v2, peso);
        arestas.push_back(aresta);
    }
    void criapai(int x){
        pai.resize(x);
        rank.resize(x);
    }

    int FIND_SET(int x){
        if (x != pai[x]){
            pai[x] = FIND_SET(pai[x]);
        }
        return pai[x];
    }
    void UNION (int x, int y){
        LINK (FIND_SET(x), FIND_SET(y));
    }

    void MAKE_SET(int x){
        pai[x] = x;
        rank[x] = x;
    }
    void LINK (int x, int y){
        if (rank[x] > rank[y]){
            pai[y] = x;
        }
        else {
            pai[x] = y;
            if (rank[x] == rank[y]){
                rank[y]++;
            }
        }
    }
    void kruskal(int m){

        vector<Aresta> arvore;
        int size_arestas = arestas.size();

        for (int k = 0; k < m; ++k) {
            MAKE_SET(k);
        }
        // ordena arestas por peso
        sort(arestas.begin(), arestas.end());

        // aloca memória para criar "V" subconjuntos

        int * pai = new int [V];

        // inicializa todos os subconjuntos como conjuntos de um único elemento
        memset(pai, -1, sizeof(int)* V);

        for (int i = 0; i < size_arestas; ++i) {

            int v1 = FIND_SET(arestas[i].obterVertice1());
            int v2 = FIND_SET(arestas[i].obterVertice2());
            if (v1 != v2){
                //se forem diferentes é porque NÂO forma ciclo, insere no vetor
                arvore.push_back(arestas[i]);
                UNION(v1, v2);
            }
        }

        int size_arvore = arvore.size();
        int total = 0;
        // mostra as arestas selecionadas com seus respectivos pesos
        for (int j = 0; j < size_arvore; ++j) {
            //char v1 = 'A' + arvore[j].obterVertice1();
            //char v2 = 'A' + arvore[j].obterVertice2();
            total += arvore[j].obterPeso();
            //cout << "(" << v1 << ", " << v2 << ") =" << arvore[j].obterPeso() << endl;
        }

        cout << total << endl;
    }

};


int main() {

    //Cria array PAI

    // Cria array RANK
    int m;
    int n;

    int v, w, p;

    cin >> m;
    cin >> n;

    //scanf("%i", &m);
    //scanf("%i", &n);

    Grafo g(60); // grafo

    g.criapai(60);

    // adiciona arestas

    for (int i = 0; i < n; ++i) {
        cin >> v;
        cin >> w;
        cin >> p;
        g.adicionarAresta(v, w, p);
    }

    g.kruskal(m);

    return 0;
}