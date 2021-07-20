#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>

#define MAX_SIZE 7
#define RANDOM_SIZE 100

void MatrixInitialize(const int rows, const int cols, int matrix[rows][cols]);
void MatrixPrint(const int rows, const int cols, int matrix[rows][cols]);
int MaxValue(int a, int b);
int MatrixWalk(const int rows, const int cols, int matrix[rows][cols]);