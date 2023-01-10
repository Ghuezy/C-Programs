#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

#define M 8
#define N 8

int main(void) {
  // create matrix f with random values from 0-255
  int f[M][N];
  srand(time(NULL));  // seed the random number generator
  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++) {
      f[i][j] = rand() % 256;  // generate a random value from 0-255
    }
  }

  // create filter v and get its values from the keyboard
  int v[3][3];
  printf("Enter values for 3x3 filter v: \n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      scanf("%d", &v[i][j]);
    }
  }

  // create matrix g to store the results of the filter process
  int g[M][N];

  // apply filter v to all elements of matrix f, except the edge elements
  for (int i = 1; i < M - 1; i++) {
    for (int j = 1; j < N - 1; j++) {
      g[i][j] = 0;
      for (int k = -1; k <= 1; k++) {
        for (int l = -1; l <= 1; l++) {
          g[i][j] += v[k + 1][l + 1] * f[i + k][j + l];
        }
      }
    }
  }

  // print the resulting matrix g
  printf("Matrix g: \n");
  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++) {
      printf("%d ", g[i][j]);
    }
    printf("\n");
  }

  getch();
  return 0;
}