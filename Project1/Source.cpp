#include <iostream>
#include <string>
#include <vector>
#include <queue>

#include "Graph.h"
#include "ModifiedBFS.h"
#include "FileReader.h"


/*	TODO:
	1. read keys without ""
	2. find out why there is an empty vertex at the end. (it read the last line, which was empty and used the last known key)
	*/




int main()
{
	Graph graph;

	std::string fileName;

	std::cout << "File name: ";
	std::cin >> fileName;

	Read(fileName, graph);


	std::string startingVertex;
	std::cout << "Starting vertex name: ";
	std::cin >> startingVertex;

	CheckPassableVertixes(graph, startingVertex);


	std::string output(fileName + ".dot");
	PrintGraph(graph, output);


	return 0;
}
