#include <iostream>
#include <string>
#include <vector>

#include "Graph.h"
#include "LinkedBagDS/LinkedBag.h"
#include "Product.h"

using namespace std;
int main() {
	// Create a list of Users
	// Add 10 distinct products to the vector
	// TO DO 

	// Initialize a graph with n vertices (where n is the number of Products) 
	//	 Indicate whether it is directed or undirected 
	// TO DO 


	// Add 15-20 edges (productA, productB, weight)
	// TO DO 

	// Print the adjacency list
	// Graph<string> productGraph(5);
	// productGraph.addEdge(0, 1, "This is a weight");
	// productGraph.addEdge(0, 2, "This is another weight");
	// productGraph.addEdge(1, 4, "I am a weight");
	// productGraph.addEdge(3, 4, "520");
	productGraph.printGraph();

	vector<Product> products;
	// products.push_back(Product("Tree", "A tree", 8.8, 10));
	// products.push_back(Product("Dog", "A dog", 7.8, 120));
	// products.push_back(Product("Temp", "A temp", 3.8, 0));
	// products.push_back(Product("Computer", "A computer", 8.3, 102));
	// products.push_back(Product("Desk", "A desk", 9.9, 3));

	// Depth First traversal should print product information not just indices
	int start = 0;
	// Call DFT 
	productGraph.DFT(start, products);


	// bool found = false;
	// // Depth First search
	// string prodName1 = ""; //replace with a product nanme that exists 
	// // Call DFS 
	// // TO DO:  
	// // found = productGraph.DFS(prodName1, ...);
	// if(found){
	// 	cout << prodName1 << " has been found in the graph!" << endl;
	// }else{
	// 	cout << prodName1 << " has not been found in the graph!" << endl;
	// }

	// string prodName2 = ""; //replace with a product nanme that DOES NOT exist 
	// // Call DFS 
	// // TO DO:
	// // found = productGraph.DFS(prodName2, ...);
	// if(found){
	// 	cout << prodName2 << " has been found in the graph!" << endl;
	// }else{
	// 	cout << prodName2 << " has not been found in the graph!" << endl;
	// }

	return 0;
}
