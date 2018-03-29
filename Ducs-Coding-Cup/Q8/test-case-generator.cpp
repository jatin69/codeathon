#include <bits/stdc++.h>
using namespace std;

void printSolution(int color[], int V);

/* A utility function to check if the current color assignment
is safe for vertex v */
bool isSafe(int v, bool **graph, int V, int color[], int c) {
  for (int i = 0; i < V; i++)
    if (graph[v][i] && c == color[i])
      return false;
  return true;
}

/* A recursive utility function to solve m coloring problem */
bool graphColoringUtil(bool **graph, int V, int m, int color[], int v) {
  /* base case: If all vertices are assigned a color then
  return true */
  if (v == V)
    return true;

  /* Consider this vertex v and try different colors */
  for (int c = 1; c <= m; c++) {
    /* Check if assignment of color c to v is fine*/
    if (isSafe(v, graph, V, color, c)) {
      color[v] = c;

      /* recur to assign colors to rest of the vertices */
      if (graphColoringUtil(graph, V, m, color, v + 1) == true)
        return true;

      /* If assigning color c doesn't lead to a solution
      then remove it */
      color[v] = 0;
    }
  }

  /* If no color can be assigned to this vertex then return false */
  return false;
}

/* This function solves the m Coloring problem using Backtracking.
It mainly uses graphColoringUtil() to solve the problem. It returns
false if the m colors cannot be assigned, otherwise return true and
prints assignments of colors to all vertices. Please note that there
may be more than one solutions, this function prints one of the
feasible solutions.*/
bool graphColoring(bool **graph, int V, int m) {
  // Initialize all color values as 0. This initialization is needed
  // correct functioning of isSafe()
  int *color = new int[V];
  for (int i = 0; i < V; i++)
    color[i] = 0;

  // Call graphColoringUtil() for vertex 0
  if (graphColoringUtil(graph, V, m, color, 0) == false) {
    printf("-1");
    return false;
  }

  // Print the solution
  printSolution(color, V);
  return true;
}

/* A utility function to print solution */
void printSolution(int color[], int V) {
  //	printf("Solution Exists:"
  //			" Following are the assigned colors \n");

  for (int i = 0; i < V; i++)
    printf("%d\n", color[i]);
}

// driver program to test above function
int main() {
  /* initialize random seed: */
  srand(time(NULL));
  /* Create following graph and test whether it is 3 colorable
  (4)----(3)
   | \ /
   |  /\
   | /  \
  (1)---(2)
  */

  // generate S, make SxS symmetric matrix of 0 and 1
  // generate a symmetric graph
  //	bool graph[V][V] = {
  //		{0, 1, 1, 1},
  //		{1, 0, 0, 1},
  //		{1, 0, 0, 1},
  //		{1, 1, 1, 0},
  //	};

  // random dimensions
  // int V = 4;
  int V = rand() % 50 + 1;
  cout << V << "\n";

  bool **graph = new bool *[V];
  for (int i = 0; i < V; ++i) {
    graph[i] = new bool[V];
  }
  // random graph
  for (int i = 0; i < V; ++i) {
    for (int j = 0; j < V; ++j) {

      if (i < j) {
        graph[i][j] = rand() % 2;
        graph[j][i] = graph[i][j];
      } else if (i == j) {
        graph[i][j] = 0;
      }
      cout << graph[i][j] << " ";
    }
    cout << "\n";
  }

  // random number of colors
  // int m = 4; // Number of colors
  int m = rand() % V + 2;
  cout << m << "\n";

  printf("\n");
  graphColoring(graph, V, m);

  return 0;
}
