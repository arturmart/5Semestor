#include <iostream>
#include <vector>

using namespace std;

class UnionFind {
public:
    UnionFind(int n) {
        parent.resize(n);
        rank.resize(n, 0);
        for (int i = 0; i < n; ++i) {
            parent[i] = i;
        }
    }

    
    int find(int x) {
        if (parent[x] != x) {
            parent[x] = find(parent[x]); 
        }
        return parent[x];
    }

    
    bool unionSets(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);

        if (rootX != rootY) {
            
            if (rank[rootX] > rank[rootY]) {
                parent[rootY] = rootX;
            } else if (rank[rootX] < rank[rootY]) {
                parent[rootX] = rootY;
            } else {
                parent[rootY] = rootX;
                rank[rootX]++;
            }
            return true;
        }
        return false;
    }

private:
    vector<int> parent; 
    vector<int> rank;   
};

int main() {
    
    int rows = 50;
    int cols = 600;

    
    int vertices = (rows + 1) * (cols + 1);

    
    UnionFind uf(vertices);

    int removableEdges = 0;

    
    for (int r = 0; r < rows; ++r) {
        for (int c = 0; c < cols; ++c) {
            
            int u = r * (cols + 1) + c;
            int v = r * (cols + 1) + (c + 1);
            if (!uf.unionSets(u, v)) {
                removableEdges++;  
            }

            
            if (r < rows - 1) {
                int u = r * (cols + 1) + c;
                int v = (r + 1) * (cols + 1) + c;
                if (!uf.unionSets(u, v)) {
                    removableEdges++;  
                }
            }
        }
    }

    
    int totalEdges = rows * cols + rows * (cols - 1); 

    
    cout << "Максимальное количество рёбер, которые можно удалить: " << removableEdges << endl;

    return 0;
}

