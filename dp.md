# Classical Competitive Programming Problems in Dynamic Programming (DP) 🧠

Dynamic Programming is an algorithmic technique that solves complex problems by breaking them down into simpler subproblems. It's primarily used when a problem has **overlapping subproblems** and **optimal substructure**.

---

## 1. Sequence and Array DP 📏

These problems involve computing solutions based on prefixes or suffixes of a sequence, array, or string.

| Problem Type | Concept | DP State Example |
| :--- | :--- | :--- |
| **Longest Increasing Subsequence (LIS)** | Find the length of the longest subsequence in a given sequence such that all elements of the subsequence are sorted in increasing order. | $$DP[i]$$ = length of the LIS ending at index $i$. |
| **Coin Change/Knapsack (Unbounded)** | Find the minimum number of coins (of given denominations) to make a certain sum. | $$DP[j]$$ = minimum number of coins needed to make sum $j$. |
| **Maximum Subarray Sum (Kadane's Algorithm)** | Find the contiguous subarray within a one-dimensional array of numbers which has the largest sum. | $$DP[i]$$ = maximum sum of a subarray ending at index $i$. |
| **Common CP Challenge:** | Optimizing the LIS solution from $O(N^2)$ to $O(N \log N)$ using **binary search** to maintain an array representing the smallest tail of all increasing subsequences of length $k$. |

---

## 2. Grid and Path DP 🗺️

These problems typically involve moving through a 2D matrix (grid) and calculating the optimal path or value at each cell.

| Problem Type | Concept | DP State Example |
| :--- | :--- | :--- |
| **Minimum Path Sum / Counting Paths** | Find the path from the top-left corner $(0,0)$ to the bottom-right corner $(R-1, C-1)$ with the minimum sum of cell values, moving only right or down. | $$DP[i][j]$$= minimum cost to reach cell$$(i, j)$$. |
| **Shortest Common Supersequence (SCS)** | Find the shortest sequence that contains two given sequences as subsequences. | $$DP[i][j]$$ = length of SCS of string $A[1..i]$ and $B[1..j]$. |
| **Common CP Challenge:** | Problems like the **"Traveling Salesperson Problem (TSP)"** (often solved with **bitmask DP**) where the state must include the set of visited nodes. For small grids, this can be solved with **Profile DP** or **Broken Profile DP**.  |

---

## 3. Knapsack Problems (The Classic Reduction) 🎒

Knapsack problems are canonical examples of DP, used to decide which items to include in a collection to maximize total value while staying within a fixed capacity.

| Algorithm | Problem Type | Concept |
| :--- | :--- | :--- |
| **0/1 Knapsack** | **Item Selection** (e.g., maximizing profit on items that can be taken only once) | Given $N$ items, each with a weight $w_i$ and value $v_i$, determine the maximum value that can be collected in a knapsack of capacity $W$. Each item can be used **at most once**. |
| **Bounded/Unbounded Knapsack** | **Resource Allocation** (e.g., maximizing yield on resources that can be reused) | Similar to 0/1, but each item $i$ can be used up to $c_i$ times (**Bounded**) or an infinite number of times (**Unbounded**). |
| **DP State:** | $$DP[i][w]$$ = maximum value using a subset of the first $i$ items with a total weight of exactly $w$. |
| **Common CP Challenge:** | Reducing the space complexity of 0/1 Knapsack from $O(NW)$ to $O(W)$ by noticing that the $i$-th row only depends on the $$(i-1)$$-th row, allowing a 1D array optimization. |

---

## 4. Tree and Graph DP 🌳

DP applied to tree structures, typically solved using recursion where the subproblems are rooted at the children of a node.

| Problem Type | Concept | DP State Example |
| :--- | :--- | :--- |
| **Tree Diameter** | Find the longest path between any two nodes in the tree. (Often solved with two DFS passes, but the max distance from a node to its children is a DP step). | $$DP[u]$$ = the longest path starting at $u$ and going down into its subtree. |
| **Maximum Weight Independent Set (MWIS) on a Tree** | Select a subset of nodes with maximum total weight such that no two selected nodes are adjacent. | $$DP[u][0]$$= max weight in the subtree of $u$ if node $u$ is **NOT** selected.$$DP[u][1]$$ = max weight in the subtree of $u$ if node $u$ **IS** selected. |
| **Common CP Challenge:** | Rooting the DP at an arbitrary node and then using a **rerooting** technique (or **Tree DP on a Rerooted Tree**) to find the answer if the tree were rooted at *every* possible node. |

---

### **Next Steps for Practice**

DP is challenging because it requires defining the **correct state** and the **transition relation**. Would you like me to focus on the **0/1 Knapsack transition** formula, or find a practice problem involving **Maximum Subarray Sum**?
