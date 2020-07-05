#include <bits/stdc++.h>
using namespace std;

class grafo {
	int chave, v;
	vector<pair<int, int>> *adj;
	int vertice(string u);
	void dfsR(int raiz, vector<bool> &visitado);
	bool buscaCaminhoDfsR(int inicio, int fim, vector<bool> &visitado);
	void ordemStack(int u, vector<bool> &visitado, stack<int> &st);
public:
	unordered_map<string, int> mapa;
	grafo(int v);
	void aresta(string u, string w, int k);
	void aresta(int u, int w, int k);
	void imprime();
	grafo transpor();
	void bfs(int raiz);
	void dfs(int raiz);
	bool buscaAresta(int inicio, int fim);
	bool buscaCaminhoBFS(int inicio, int fim);
	bool buscaCaminhoDFS(int inicio, int fim);
	vector<int> dijkstra(int raiz);
	vector<int> bellmanFord(int raiz);
	vector<int> prim(int raiz);
	int kosaraju();
};

// Constructor da classe grafo
grafo::grafo(int v) {
	this->v = v; // Mais 1 de reserva por muitos grafos são iniciados em 1
	chave = 0;
	adj = new vector<pair<int, int>>[v];
}

// Método que cria/verifica uma equivalência de string para vértice
int grafo::vertice(string u) {
	auto pos = mapa.find(u);
	if (pos == mapa.end()) {
		mapa[u] = chave;
		chave++;
	}
	return mapa[u];
}

// Método que cria uma aresta de u para w com peso k (overload para strings)
void grafo::aresta(string u, string w, int k) {
	int a = vertice(u), b = vertice(w);
	adj[a].push_back(make_pair(b, k));
	adj[b].push_back(make_pair(a, k));
}

// Overload para inteiros
void grafo::aresta(int u, int w, int k) {
	adj[u].push_back(make_pair(w, k));
	adj[w].push_back(make_pair(u, k));
}

// Método que imprime o grafo para depuração
void grafo::imprime() {
	for (int i = 0; i < v; i++) {
		cout << i;
		for (auto w : adj[i]) cout << "-> " << w.first << "(" << w.second << ") ";
		cout << endl;
	}
}

// Gera a transposta de um grafo
grafo grafo::transpor() { 
    grafo g(v); 
    for (int u = 0; u < v; u++) 
        for(auto w : adj[u]) 
            g.adj[w.first].push_back(make_pair(u, w.second)); 
    return g; 
} 

// Realiza uma busca em largura e a imprime
void grafo::bfs(int raiz) {
	vector<bool> visitado(v, false);
	visitado[raiz] = true;
	queue<int> fila;
	fila.push(raiz);

	while (!fila.empty()) {
		raiz = fila.front();
		fila.pop();
		for (auto x : adj[raiz]) {
			if (!visitado[x.first]) {
				visitado[x.first] = true;
				fila.push(x.first);
			}
		}
	}
}

// Método recursivo da busca em profundidade que a imprime
void grafo::dfsR(int raiz, vector<bool> &visitado) {
    visitado[raiz] = true; 
    for (auto x : adj[raiz]) 
        if (!visitado[x.first]) 
            dfsR(x.first, visitado); 
}

// Inicializa a busca em profundidade por recursão
void grafo::dfs(int raiz) {
    vector<bool> visitado(v, false);
    dfsR(raiz, visitado);
} 

// Realiza uma busca para verificar se existe uma aresta do vértice inicio para o vértice fim
bool grafo::buscaAresta(int inicio, int fim) {
	for (auto x : adj[inicio])
		if (x.first == fim)
			return true;
	return false;
}

// Realiza uma BFS para verificar se existe um caminho conectando o vértice inicio ao vértice fim
// NOTE: É mais eficiente do que a versão de DFS por ser iterativo e não recursivo
bool grafo::buscaCaminhoBFS(int inicio, int fim) {
	if (inicio == fim) return true;
	vector<bool> visitado(v, false);
	visitado[inicio] = true;
	queue<int> fila;
	fila.push(inicio);

	while (!fila.empty()) {
		inicio = fila.front();
		fila.pop();
		for (auto x : adj[inicio]) {
			if (!visitado[x.first]) {
				if (x.first == fim) return true;
				visitado[x.first] = true;
				fila.push(x.first);
			}
		}
	}
	return false;
}

// Método auxiliar recursivo da busca de buscaCaminhoDFS()
bool grafo::buscaCaminhoDfsR(int inicio, int fim, vector<bool> &visitado) {
	if (inicio == fim) return true;
	visitado[inicio] = true;
    for (auto x : adj[inicio])
        if (!visitado[x.first])
            return buscaCaminhoDfsR(x.first, fim, visitado);
	return false;
}

// Inicializa a busca por um caminho conectando o vértice inicio ao vértice fim e chama a DFS
bool grafo::buscaCaminhoDFS(int inicio, int fim) {
	vector<bool> visitado(v, false);
	return buscaCaminhoDfsR(inicio, fim, visitado);
}

// Algoritmo de Dijkstra O(E*logV) que retorna um vetor com a distância mínima do vértice raiz
// aos outros vértices do grafo
// NOTE: não funciona para arestas com peso negativo
vector<int> grafo::dijkstra(int raiz) {
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
	vector<int> dist(v, INT_MAX);
	vector<bool> visitado(v, false);
	pq.push(make_pair(0, raiz));
	dist[raiz] = 0;
	while (!pq.empty()) {
		int u = pq.top().second;
		pq.pop();
		visitado[u] = true;
		for (auto w : adj[u]) {
			if (!visitado[w.first] && dist[u] != INT_MAX && dist[u] + w.second < dist[w.first]) {
				dist[w.first] = dist[u] + w.second;
				pq.push(make_pair(dist[w.first], w.first));
			}
		}
	}
	return dist;
}

// Retorna um vetor com a distância mínima do vértice raiz aos outros vértices do grafo utilizando o
// Algoritmo de Bellman-Ford . Complexidade: O(V*E). Funciona para arestas com peso negativo
vector<int> grafo::bellmanFord(int raiz) {
	vector<int> dist(v, INT_MAX);
	dist[raiz] = 0;

	for (int u = 0; u < v - 1; u++) {
		for (auto w : adj[u]) {
			if (dist[u] != INT_MAX && dist[u] + w.second < dist[w.first]) {
				dist[w.first] = dist[u] + w.second;
			}
		}
	}

	for (int u = 0; u < v - 1; u++) {
		for (auto w : adj[u]) {
			if (dist[u] != INT_MAX && dist[u] + w.second < dist[w.first]) {
				puts("O grafo contem ciclos negativos!");
				break;
			}
		}
	}
	return dist;
}

// Método auxiliar que ordena a pilha para ser usada no Algoritmo de Kosaraju
void grafo::ordemStack(int u, vector<bool> &visitado, stack<int> &st) { 
    visitado[u] = true; 
    for(auto w : adj[u]) 
        if(!visitado[w.first]) 
            ordemStack(w.first, visitado, st); 
    st.push(u); 
} 
  
// Algoritmo de Kosaraju O(V+E) que retorna o número de componentes fortemente conexos do grafo e os imprime
int grafo::kosaraju() { 
	int total = -1;
    stack<int> st; 
    vector<bool> visitado(v, false); 
    for(int i = 0; i < v; i++) 
        if(visitado[i] == false) 
            ordemStack(i, visitado, st); 
    grafo gt = transpor();
	visitado = vector<bool>(v, false);

    while (!st.empty()) { 
        int u = st.top(); 
        st.pop(); 
        if (!visitado[u]) { 
            gt.dfsR(u, visitado); 
			total++;
        } 
    } 
	return total;
} 

// Algoritmo de Prim O(E*LogV) que retorna um vetor com os pesos das arestas da árvore geradora mínima do grafo
vector<int> grafo::prim(int raiz) { 
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; 
    vector<int> dist(v, INT_MAX); 
    vector<int> mst(v, -1); 
    vector<bool> visitado(v, false); 
    pq.push(make_pair(0, raiz)); 
    dist[raiz] = 0; 

    while (!pq.empty()) { 
        int u = pq.top().second; 
        pq.pop(); 
		if(visitado[u] == true) continue;
        visitado[u] = true; 
        for (auto w : adj[u]) {  
            if (!visitado[w.first] && dist[w.first] > w.second) { 
                dist[w.first] = w.second; 
                pq.push(make_pair(w.second, w.first)); 
                mst[w.first] = u; 
            } 
        } 
    } 
    return dist;
} 

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, n, m, x, y;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		cin >> n >> m;
		grafo g(n);
		while (m--) {
			cin >> x >> y;
			g.aresta(x-1, y-1, 1);
		}
		int total = g.kosaraju();
		if (total == 0) cout << "Caso #" << i << ": a promessa foi cumprida\n";
		else cout << "Caso #" << i << ": ainda falta(m) " << total << " estrada(s)\n";
	}
	return 0;
}