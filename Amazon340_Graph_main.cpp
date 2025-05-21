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
	std::vector<Product> products = {
		/* 0 */ Product("Paper", "it's a stack of paper", 4.0, 1025),
		/* 1 */ Product("Pen", "it's a pen", 4.9, 1036),
		/* 2 */ Product("Book", "just some random book we found somewhere", 3.0, 1049),
		/* 3 */ Product("Cat", "feral", 5.0, 2599),
		/* 4 */ Product("Candy", "of some flavor", 2.5, 869),
		/* 5 */ Product("Video Game", "for nintendo", 2.8, 1330),
		/* 6 */ Product("Furniture", "a couch maybe", 3.1, 1859),
		/* 7 */ Product("Shirt", "camisa", 4.8, 29501),
		/* 8 */ Product("Pant", "the left half of a pair of pants", 4.6, 101185),
		/* 9 */ Product("Dog", "may or may not have rabies", 1.0, 115)
	};

	// Initialize a graph with n vertices (where n is the number of Products) 
	//	 Indicate whether it is directed or undirected 
	// TO DO 

	// Graph is undirected because it represents whether two products were purchased with each other,
	// which is a symmetric relationship
	Graph<int> productGraph(10, false);

	// Add 15-20 edges (productA, productB, weight)
	// TO DO 
	// Weights represent number of times products were purchased together
	productGraph.addEdge(0, 1, 10); // Paper, Pen
	productGraph.addEdge(1, 2, 6); // Pen, Book
	productGraph.addEdge(3, 9, 149); // Cat, Dog
	productGraph.addEdge(7, 8, 94); // Shirt, Pant
	productGraph.addEdge(4, 5, 5); // Candy, Video Game

	productGraph.addEdge(0, 2, 12); // Paper, Book
	productGraph.addEdge(3, 6, 1); // Cat, Furniture
	productGraph.addEdge(5, 7, 4); // Video Game, Shirt
	productGraph.addEdge(8, 9, 9); // Pant, Dog
	productGraph.addEdge(2, 4, 8); // Book, Candy

	productGraph.addEdge(3, 5, 19); // Cat, Video Game
	productGraph.addEdge(0, 5, 28); // Paper, Video Game
	productGraph.addEdge(2, 7, 14); // Book, Shirt
	productGraph.addEdge(4, 7, 104); // Candy, Shirt
	productGraph.addEdge(1, 8, 53); // Pen, Pant

	productGraph.addEdge(3, 4, 2); // Cat, Candy
	productGraph.addEdge(6, 8, 3); // Furniture, Pant

	// Print the adjacency list
	// Graph<string> productGraph(5);
	// productGraph.addEdge(0, 1, "This is a weight");
	// productGraph.addEdge(0, 2, "This is another weight");
	// productGraph.addEdge(1, 4, "I am a weight");
	// productGraph.addEdge(3, 4, "520");
	productGraph.printGraph();

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
