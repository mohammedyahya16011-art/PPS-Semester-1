# Transpose Matrix

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a 2D integer array `matrix`, return  *the  **transpose**  of*  `matrix`.

The  **transpose**  of a matrix is the matrix flipped over its main diagonal, switching the matrix's row and column indices.

 

Original
C
 **Example 1:** 

```
Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [[1,4,7],[2,5,8],[3,6,9]]

```

 **Example 2:** 

```
Input: matrix = [[1,2,3],[4,5,6]]
Output: [[1,4],[2,5],[3,6]]

```

 

 **Constraints:** 

- m == matrix.length
- n == matrix[i].length
- 1 <= m, n <= 1000
- 1 <= m * n <= 105
- -109 <= matrix[i][j] <= 109

## Solution

**Language:** C  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 15.9 MB (beats 65.76%)  
**Submitted:** 2026-11-23T09:02:38.626Z  

```c
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
```

---

[View on LeetCode](https://leetcode.com/problems/transpose-matrix/)