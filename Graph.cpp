#include <iostream>
#include "Graph.h"
#include "Product.h"
#include "LinkedBagDs/LinkedBag.h"

using namespace std; 
// Constructor
template <typename T>
Graph<T>::Graph(int vertices, bool directed)
    : V(vertices), directed(directed) {
    adjList.resize(V);
}

// Add an edge
template <typename T>
void Graph<T>::addEdge(int u, int v, T weight) {
    if (u != v) { // if the vertices are not the same (a loop)
        adjList[u].append({v, weight});
        if (!directed) {
            adjList[v].append({u, weight});
        }
    }
    else {
        cout << "This graph does not allow self edges.";
    }
}

// Get number of nodes
template <typename T>
int Graph<T>::getNumVertices() const{
	return V;
}

// Print the adjacency list
template <typename T>
void Graph<T>::printGraph() const {
    for (int i = 0; i < V; ++i) {
        cout << "Vertex " << i << ": ";
        vector<pair<int, T>> temp = adjList[i].toVector(); // convert the linkedbag to a vector for iterating
        for (auto it = temp.begin(); it != temp.end(); ++it) { // uses an iterator to traverse the list
            cout << "(" << it->first << ", " << it->second << ") ";
        }
        cout << endl;
    }
}

// Get neighbors of a vertex
template <typename T>
const LinkedBag<pair<int, T>>& Graph<T>::getNeighbors(int vertex) const {
    return adjList[vertex];
}


// DFS Traversal (Recursive approach)
template <typename T>
void Graph<T>::DFT(int start, vector<Product>& productInfo) const {
    vector<bool> visited(V, false); // To keep track of visited vertices
    DFTRecursive(start, visited, productInfo);
    cout << endl;
}

// Utility function for DFS (Recursive)
template <typename T>
void Graph<T>::DFTRecursive(int v, vector<bool>& visited, vector<Product>& productInfo) const {
    visited[v] = true;
    cout << productInfo[v] << "\n"; // Visit the current vertex

    // Recur for all the vertices adjacent to this vertex
    vector<pair<int, T>> temp = adjList[v].toVector(); // convert the linkedbag to a vector for iterating
    for (auto it = temp.begin(); it != temp.end(); ++it) {
        if (!visited[it->first]) {
            DFTRecursive(it->first, visited, productInfo);
        }
    }
}

// -----------------------------------------------------
// Depth First Search (by username)
// TO DO 
// Add DFS implementation 
// Add DFSRecursive implementation 
