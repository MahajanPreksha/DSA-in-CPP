# Graphs
A graph is a collection of nodes where each node might/might not point to other nodes.

The nodes/vertices represent real-life entities and are connected by edges representing relationship between the nodes/entities.

It is a non-linear data structure.

Applications of Graphs:
1. Folders in PC
2. Google Maps
3. Splitwise Apps
4. Dependency Resolution
5. Biology- Visualisation of protein-protein interaction and metabolic networks
6. Electrical Engineering- Circuit organisation and resolution
7. Computer and Telecom Networks
8. Microsoft Excel

## Mathematical Definition of Graphs
A graph is defined as a pair G = (V, E).

A graph is an ordered pair of set V and set E representing Vertices and Edges respectively.
- V = {V1, V2, V3, _ _ _, Vn}
- E = {{V1, V2}, {V2, V3}, {V3, V4}, _ _ _, {Vn-1, Vn}}

> Ordered pair: where ordering matters

## Types of Graphs
### Based on Direction
1. Undirected Graph
2. Directed Graph

### Based on Edge Weights
1. Weighted Graph
2. Unweighted Graph

> There can be cross-combinations among various types of graphs.

## Terminologies of Graphs
1. **Multigraph**: It is an undirected graph in which multiple edges and loops are allowed between 2 nodes.

2. **Simple Graph**: It is an undirected graph in which both multiple edges and loops/self-loops are not allowed.

3. **Complete Graph**: It is a graph in which every node is **directly** connected to the every other node.
> A direct edge must exist for every possible node pair.

4. **Connected Graph**: It is a graph in which we have a direct or indirect path for every possible pair of vertex.
> Complete graph is a special case of Connected graph.

5. **Path**: A path (Pn) is a graph whose vertices can be arranged in a sequence.

6. **Cycle**: A cycle (Cn) is a graph whose vertices can be arranged in a cyclic sequence.
> Cycle is a special case of Path.

7. **DAG (Directed Acyclic Graph)**: It is a directed graph without any cycle.

8. **Degree**: Degree of a vertex in a graph is the total number of edges incident to it or away from it.
> In case of a directed graph, we define indegree (total number of incoming edges) and outdegree (total number of outgoing edges) of vertex.

9. **Tree**: It is a connected graph with no cycles i.e. connected acyclic graph.
- If we remove all cycles from a graph, we get a tree.
- If we remove an edge from a tree, it no more remains connected and should be called a **Forest**.

10. **Connected Component**: If there is a disconnected graph, then the set of vertices which are connected forms a connected component.

> Important facts:
> - In a tree, number of edges = number of vertices - 1
> - In a forest, number of edges = number of vertices - 1 (max.)
> - In a connected graph, number of edges = number of vertices - 1 (min.)
> - In an undirected complete graph, number of edges = number of vertices C_2 (max.)
> - In a directed complete graph, number of edges = number of vertices * (number of vertices - 1) (max.)

## Graph Implementation
2 main elemental parts of graph are:
1. Vertices
2. Edges

Cleanest form of graph implementation is using an Edge List implementation but it is not a good method.

**Adjacency List**: In this approach, we represent a graph as an array of linked list.
- Array represents vertices [ith index represents neighbour of ith vertex.].
- Linked List: This neighbour information is stored in Linked List.

> Neighbour is any node having direct edge from a vertex.

> For directed weighted and undirected weighted graphs, instead of storing an integer in the linked list, we can store a pair. First parameter will represent neighbour vertex and second parameter will represent weight.

**Adjacency Map**: In this approach, we represent a graph in the form of array of hashmap/unordered map.
- Array represents vertices [ith index represents data of its vertex.].
- Hashmap stores neighbour information with key as its neighbour and value as its weight.
> If the graph is unweighted, we can use Hashset instead of Hashmap.

> This approach is efficient in case of query whether b is a neighbour of a.

**Adjacency Matrix**: In this approach, we represent a graph in the form of a 2D array or matrix of v*v dimensions where v is the number of vertices.
- If ```adj[i][j] = 1```, there is an edge from i to j vertex.
- If ```adj[i][j] = 0```, there is no edge from i to j vertex.
> In case of weighted graphs, you can store pair of {1, weight} or weight instead of 1.

> **Dense Graphs**: Number of edges are more compared to the volume of vertices.

> **Sparse Graphs**: Number of edges are less compared to the volume of vertices.

**Incidence Matrix**: In this approach, we represent a graph in the form of a 2D array or matrix of v*e dimensions where v is the number of vertices and e is the number of edges.
- If ```M[i][j] = 1```, ith vertex belongs to the ith edge.

> This approach is better for undirected graphs.

> For directed graphs, preference is given to the vertex on which the edge is incident.

> For weighted graphs, we can store weight instead of 1.

> Column sum will always be 2. To maintain it, we can consider the value of self-loop as 2.
> Row sum = degree
---
Most **optimised** graph implementation is of **Adjacency List**.

## Graph Traversals
To read any graph, we have two major techniques:
1. Depth First Traversal/Search (DFS)
2. Breadth First Traversal/Search (BFS)

### Depth First Traversal/Search
It is an approach with recursive nature.

> *Important Points*:
> - Simplest solution for any path problem would be if source and destination are neighbours.
> - If there is a path from neighbour to destination, then there will be a path from source to destination via the neighbour.

### Breadth First Traversal/Search
In BFS, we travel the immediate neighbours of a node first together.

It can be used to find shortest path in case of unweighted graphs.

We use queues to implement BFS.

It is an approach with iterative nature.

#### Connected Component
It is a subset of the given graph that has vertices between which there is always a path.

Vertices present in two different connected components don't have a path.

> *Note*: Number of connected components = Number of times BFS/DFS for the graph is called.

## Graph Questions
1. [Print adjacency list](https://www.geeksforgeeks.org/problems/print-adjacency-list-1587115620/1)

2. [Find whether path exist](https://www.geeksforgeeks.org/problems/find-whether-path-exist5238/1) OR [1971. Find if Path Exists in Graph](https://leetcode.com/problems/find-if-path-exists-in-graph)

3. [Shortest Path in Undirected](https://www.geeksforgeeks.org/problems/shortest-path-in-undirected-graph-having-unit-distance/0) OR [847. Shortest Path Visiting All Nodes](https://leetcode.com/problems/shortest-path-visiting-all-nodes)

4. [Connected Components in an Undirected Graph](https://www.geeksforgeeks.org/problems/connected-components-in-an-undirected-graph/1) OR [323. Number of Connected Components in an Undirected Graph](https://leetcode.com/problems/number-of-connected-components-in-an-undirected-graph)

5. [Number of Good Components](https://geeksforgeeks.org/problems/number-of-good-components--170647/0) OR [2685. Count the Number of Complete Components](https://leetcode.com/problems/count-the-number-of-complete-components)

6. [Find the number of islands](https://www.geeksforgeeks.org/problems/find-the-number-of-islands/0) OR [Find the number of islands](https://www.geeksforgeeks.org/problems/find-the-number-of-islands/1) OR [Number Of Islands](https://www.geeksforgeeks.org/problems/number-of-islands/0) OR [200. Number of Islands](https://leetcode.com/problems/number-of-islands)