# Classical Competitive Programming Problems in Graph Theory

That's a great topic! Graph theory is fundamental in competitive programming (CP). Here are some classical problems, categorized by the core algorithm they use, along with a brief explanation and a common challenge type.

---

## 1. Shortest Path Problems 🛣️

These problems are about finding the path with the minimum total cost between two vertices.

### **a. Single-Source Shortest Path (SSSP) in Non-Negative Weighted Graphs**

| Algorithm | Problem Type | Concept |
| :--- | :--- | :--- |
| **Dijkstra's Algorithm** | **Road Network Navigation** (e.g., finding the fastest route between two cities) | Finds the shortest path from a single starting vertex to all other vertices in a graph where **all edge weights are non-negative**. |
| **Common CP Challenge:** | Finding the shortest path with an **additional constraint**, like a limited number of "special" edge uses or a budget. This often requires modifying Dijkstra's state (e.g., $$(distance, node, constraint\_value)$$) or using a $0/1$-BFS variation if applicable. |

### **b. All-Pairs Shortest Path (APSP)**

| Algorithm | Problem Type | Concept |
| :--- | :--- | :--- |
| **Floyd-Warshall Algorithm** | **Transitive Closure** (e.g., checking if every city can reach every other city) | Finds the shortest paths between **all pairs of vertices**. It can handle negative weights but **not negative cycles**. Good for smaller graphs ($N \le 400$). |
| **Common CP Challenge:** | Using the algorithm to detect **negative cycles** (a path where starting and ending at the same node yields a negative cost). If the shortest path from a node to itself is negative after the final iteration, a negative cycle exists. |

---

## 2. Minimum Spanning Tree (MST) 🌲

These problems focus on connecting all parts of a graph using the minimum possible total edge weight.

| Algorithm | Problem Type | Concept |
| :--- | :--- | :--- |
| **Prim's or Kruskal's Algorithm** | **Laying Cables/Pipes** (e.g., connecting all houses with minimum length of wire) | Find a subset of edges that connects all vertices, without cycles, and has the **minimum total weight**. |
| **Common CP Challenge:** | Finding the **$k$-th best** MST, or finding an MST where a **specific edge** must be included/excluded. This often involves combining the MST algorithm with data structures like **Disjoint Set Union (DSU)** or **binary search**.  |

---

## 3. Graph Traversal & Connectivity 🔗

These use basic traversals to discover the structure and connections within the graph.

### **a. Traversal**

| Algorithm | Problem Type | Concept |
| :--- | :--- | :--- |
| **Breadth-First Search (BFS)** | **Finding the path with the minimum number of edges** (unweighted shortest path) | Explores the graph layer by layer. Excellent for finding the shortest path in an **unweighted** graph. |
| **Depth-First Search (DFS)** | **Finding Connected Components** or **Cycle Detection** | Explores as far as possible along each branch before backtracking. Great for recursive exploration. |

### **b. Connectivity**

| Algorithm | Problem Type | Concept |
| :--- | :--- | :--- |
| **Topological Sort** (Kahn's or DFS-based) | **Task Scheduling** or **Course Prerequisites** | A linear ordering of vertices such that for every directed edge $u \to v$, vertex $u$ comes before $v$ in the ordering. Only possible on a **Directed Acyclic Graph (DAG)**. |
| **Strongly Connected Components (SCCs)** (Tarjan's or Kosaraju's) | **Grouping Interdependent Items** | A maximal set of vertices in a directed graph where every vertex is reachable from every other vertex in the set. Essential for simplifying a directed graph into a DAG (the **condensation graph**). |

---

## 4. Bipartite Matching 👫

This category is about finding the maximum number of pairings in a bipartite graph.

| Algorithm | Problem Type | Concept |
| :--- | :--- | :--- |
| **Max Flow (e.g., Hopcroft-Karp or Dinic's Algorithm)** | **Job/Resource Assignment** (e.g., matching students to projects) | Finds the maximum number of edges such that no two edges share a common vertex. A common reduction is to transform the problem into a **Max Flow/Min Cut** problem. |
| **Common CP Challenge:** | Using Max Flow to solve problems beyond simple matching, such as **Minimum Path Cover in a DAG** (which equals $\text{Nodes} - \text{Max Bipartite Matching}$). |

---

### **Next Steps for Practice**

To truly master these, you need to practice implementation. Would you like me to find a practice problem on one of these topics, or would you prefer a brief explanation of how to implement **Dijkstra's Algorithm** with a priority queue?
