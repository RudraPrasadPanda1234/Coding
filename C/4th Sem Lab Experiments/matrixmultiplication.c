#include <stdio.h>

#define MAX_SIZE 100

int min_matrix_chain_order(int p[], int n, int m[][MAX_SIZE], int s[][MAX_SIZE]) {
  // Initialize diagonal elements of m table
  for (int i = 1; i <= n; i++) {
    m[i][i] = 0;
  }

  // Fill m and s tables using dynamic programming
  for (int l = 2; l <= n; l++) {
    for (int i = 1; i <= n - l + 1; i++) {
      int j = i + l - 1;
      m[i][j] = INT_MAX;
      for (int k = i; k < j; k++) {
        int q = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];
        if (q < m[i][j]) {
          m[i][j] = q;
          s[i][j] = k;
        }
      }
    }
  }

  return m[1][n]; // Minimum cost for entire chain
}

void print_optimal_parens(int s[][MAX_SIZE], int i, int j) {
  if (i == j) {
    printf("A%d", i);
  } else {
    printf("(");
    print_optimal_parens(s, i, s[i][j]);
    print_optimal_parens(s, s[i][j] + 1, j);
    printf(")");
  }
}

int main() {
  int n;
  printf("Enter the number of matrices: ");
  scanf("%d", &n);

  int p[n + 1];
  printf("Enter dimensions of matrices:\n");
  for (int i = 0; i <= n; i++) {
    scanf("%d", &p[i]);
  }

  int m[n + 1][MAX_SIZE], s[n + 1][MAX_SIZE];

  int min_cost = min_matrix_chain_order(p, n, m, s);

  printf("Minimum number of scalar multiplications: %d\n", min_cost);

  printf("Optimal parenthesization: ");
  print_optimal_parens(s, 1, n);
  printf("\n");

  return 0;
}
