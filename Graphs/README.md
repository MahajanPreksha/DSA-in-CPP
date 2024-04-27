# Introduction
- A graph is a collection of nodes where each node might/might not point to other nodes.
- The nodes/vertices represent real-life entities and are connected by edges representing relationship between the nodes/entities.
- It is a non-linear data structure.
- Applications of Graphs:
    1. Folders in PC
    2. Google Maps
    3. Splitwise Apps
    4. Dependency Resolution
    5. Biology- Visualisation of protein-protein interaction and metabolic networks
    6. Electrical Engineering- Circuit organisation and resolution
    7. Computer and Telecom Networks
    8. Microsoft Excel

## Mathematical Definition of Graphs
- A graph is defined as a pair G = (V, E).
- A graph is an ordered pair of set V and set E representing Vertices and Edges respectively.
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
> In case of directed graph, we define indegree (total number of incoming edges) and outdegree (total number of outgoing edges) of vertex.

9. **Tree**: It is a connected graph with no cycles i.e. connected acyclic graph.
- If we remove all cycles from a graph, we get a tree.
- If we remove an edge from a tree, it no more remains connected and should be called a **Forest**.

10. **Connected Component**: If there is a disconnected graph, then the set of vertices which are connected forms a connected component.

> Important facts:
- In a tree, number of edges = number of vertices - 1
- In a forest, number of edges = number of vertices - 1 (max.)
- In a connected graph, number of edges = number of vertices - 1 (min.)
- In an undirected complete graph, number of edges = number of vertices C_2 (max.)
- In a directed complete graph, number of edges = number of vertices * (number of vertices - 1) (max.)