#include<iostream> 
#include <vector> 
#include <queue> 
#include <stack> 
using namespace std; 
class Graph { 
public: 
Graph(int vertices); 
void addEdge(int u, int v); 
void DFS(int startVertex); 
void BFS(int startVertex); 
private: 
int vertices; 
vector<vector<int>> adjacencyList; 
}; 
Graph::Graph(int vertices) : vertices(vertices) { 
adjacencyList.resize(vertices); 
} 
void Graph::addEdge(int u, int v) { 
adjacencyList[u].push_back(v); 
} 
void Graph::DFS(int startVertex) { 
vector<bool> visited(vertices, false); 
stack<int> dfsStack; 
visited[startVertex] = true; 
dfsStack.push(startVertex); 
while (!dfsStack.empty()) { 
int vertex = dfsStack.top();
dfsStack.pop(); 
cout << vertex << " "; 
for (int adjacent : adjacencyList[vertex]) { 
if (!visited[adjacent]) { 
visited[adjacent] = true; 
dfsStack.push(adjacent); 
} 
} 
} 
} 
void Graph::BFS(int startVertex) { 
vector<bool> visited(vertices, false); 
queue<int> bfsQueue; 
visited[startVertex] = true; 
bfsQueue.push(startVertex); 
while (!bfsQueue.empty()) { 
int vertex = bfsQueue.front(); 
bfsQueue.pop(); 
cout << vertex << " "; 
for (int adjacent : adjacencyList[vertex]) { 
if (!visited[adjacent]) { 
visited[adjacent] = true; 
bfsQueue.push(adjacent); 
} 
} 
} 
} 
int main() { 
Graph graph(6);
graph.addEdge(0, 1);
graph.addEdge(0, 2); 
graph.addEdge(1, 3); 
graph.addEdge(2, 4); 
graph.addEdge(3, 5); 
cout << "Depth-First Search (DFS): "; 
graph.DFS(0); 
cout << endl; 
cout << "Breadth-First Search (BFS): "; 
graph.BFS(0); 
cout << endl; 
return 0; 
}