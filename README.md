# MetroPathFinder
Implementation of the Shortest Path Finder for Delhi Metro using Djikstra's Algorithm.

This C++ program calculates the shortest route between two stations in the Delhi Metro system. Users can input the source and destination stations, and the program will display the shortest metro route.

Implementation
The program utilizes a Graph Data Structure to represent the metro network.

    Nodes: Each node represents a metro station, containing information such as the station name, metro corridor, and connecting lines.
    Edges: Edges represent the connections between stations, with the cost of each edge corresponding to the distance between the connected stations.

Algorithm
To determine the shortest path between the source and destination stations, Dijkstra's Shortest Path Algorithm is employed.
