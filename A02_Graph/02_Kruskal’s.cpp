#include <iostream>
#include <algorithm>
using namespace std;

struct Edge {
    int u, v, w;
};

int find(int parent[], int i) {
    if (parent[i] == i)
        return i;
    return find(parent, parent[i]);
}

void unionSet(int parent[], int x, int y) {
    int xroot = find(parent, x);
    int yroot = find(parent, y);
    parent[xroot] = yroot;
}

int main() {
    int V = 4;
    int E = 5;

    Edge edges[E] = {
        {0, 1, 10},
        {0, 2, 6},
        {0, 3, 5},
        {1, 3, 15},
        {2, 3, 4}
    };

    sort(edges, edges + E, [](Edge a, Edge b) {
        return a.w < b.w;
    });

    int parent[V];
    for (int i = 0; i < V; i++)
        parent[i] = i;

    cout << "Edge \tWeight\n";
    int count = 0;

    for (int i = 0; i < E && count < V - 1; i++) {
        int u = edges[i].u;
        int v = edges[i].v;

        int setU = find(parent, u);
        int setV = find(parent, v);

        if (setU != setV) {
            cout << u << " - " << v << "\t" << edges[i].w << endl;
            unionSet(parent, setU, setV);
            count++;
        }
    }

    return 0;
}
