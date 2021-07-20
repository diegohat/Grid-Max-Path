#include "matrix.h"

void MatrixInitialize(const int rows, const int cols, int matrix[rows][cols])
{
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            /*if(rand()%RANDOM_SIZE % 2 == 0)
            {
                matrix[i][j] = rand()%RANDOM_SIZE * -1;
            }
            else*/
            {
                matrix[i][j] = rand()%RANDOM_SIZE;
            }
        }
    }
}

void MatrixPrint(const int rows, const int cols, int matrix[rows][cols])
{
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            printf("[%i][%i] = %i\t", i, j, matrix[i][j]);
        }
        printf("\n");
    }    
}

int MaxValue(int a, int b)
{
    if(a > b) return a;
    else return b;
}

int MatrixWalk(const int rows, const int cols, int matrix[rows][cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if(i == 0 && j != 0) 
            {
                matrix[i][j] += matrix[i][j-1];
            }
            if(i != 0 && j == 0)
            {
                matrix[i][j] += matrix[i-1][j];
            }
            if(i != 0 && j != 0)
            {
                matrix[i][j] += MaxValue(matrix[i-1][j], matrix[i][j-1]);
            }
        }
        
    }
    
    return matrix[rows-1][cols-1];
}