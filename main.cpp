#include <iostream>
#include "tsp.h"
using namespace std;

int main()
{
	srand(time(NULL)); // random numbers

	Graph *graph = new Graph(5, 0);
	graph->addEdge(0, 1, 7);
	graph->addEdge(1, 2, 5);
	graph->addEdge(2, 3, 27);
	graph->addEdge(3, 4, 2);
	graph->addEdge(4, 0, 50);
	graph->addEdge(0, 2, 6);
	graph->addEdge(0, 3, 4);
	graph->addEdge(1, 4, 11);
	graph->addEdge(1, 3, 15);
	graph->addEdge(2, 4, 8);
	
	Genetic genetic(graph, 10, 1000, 5, true);

	const clock_t begin_time = clock(); // gets time
	genetic.run(); // runs the genetic algorithm
	cout << "\n\nTime for to run the genetic algorithm: " << float(clock () - begin_time) /  CLOCKS_PER_SEC << " seconds."; // shows time in seconds
	
	return 0;
}
