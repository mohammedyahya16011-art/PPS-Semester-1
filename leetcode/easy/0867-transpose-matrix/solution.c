#include <stdlib.h>

int** transpose(int** matrix, int matrixSize, int* matrixColSize, int* returnSize, int** returnColumnSizes) {
    int rows = matrixSize;
    int cols = matrixColSize[0];

    *returnSize = cols;
    *returnColumnSizes = (int*)malloc(sizeof(int) * cols);

    int** ans = (int**)malloc(sizeof(int*) * cols);
    for (int j = 0; j < cols; ++j) {
        (*returnColumnSizes)[j] = rows;
        ans[j] = (int*)malloc(sizeof(int) * rows);
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            ans[j][i] = matrix[i][j];
        }
    }

    return ans;
}