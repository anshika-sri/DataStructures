
#include<bits/stdc++.h>
using namespace std;
template <typename T>
#include<queue>

class Graph{
    public:
    map<T, list<T>> adj;


    //addEdge
    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

     
    void bfs(T src) {
        map<T, bool> vis;
        queue<T> Q;

        Q.push(src);
        vis[src] = true;

        while(!Q.empty()) {
            T node = Q.front();
            cout<<node<<" ";
            Q.pop();
            for(auto neigh: adj[node]) {
                if(!vis[neigh]) {
                    Q.push(neigh);
                    vis[neigh] = true;
                }
            }
        }
    }
};

int main() {

    int t;
    int V,E,u,v;
    cin>>t;

    while(t>0) {
        
        Graph<int> g;

        // cin>>V>>E;
        // for(int i=0; i< E;i++) {
        //     cin>>u>>v;
        //     g.addEdge(u,v);    
        // }
        
        //to save time and run
        g.addEdge(0,1);
        g.addEdge(1,2);
        g.addEdge(0,4);
        g.addEdge(2,4);
        g.addEdge(2,3);
        g.addEdge(3,4);
        g.addEdge(3,5);
        cout<<"BFS using adjList is: ";
        g.bfs(0);
        t--;
    }

    return 0;
}


***************IO*************
1 //that is, only one test case
DFS using adjList is: 0 1 4 2 3 5 

