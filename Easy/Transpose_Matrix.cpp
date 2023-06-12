/*
https://www.algoexpert.io/questions/transpose-matrix
*/

#include <vector>
using namespace std;

vector<vector<int>> transposeMatrix(vector<vector<int>> matrix) {
  int rows = matrix.size();          // Rows in original matrix
  int col = matrix[0].size();        // Columns in original matrix
  vector<vector<int>> transpose(col, vector<int> (rows, 0));   // Transpose of the original matrix, rows and columns are inverted

  /* Iterate original matrix and add values to transpose */
  for(int i=0; i<rows; i++){
    for(int j=0; j<col; j++){
      transpose[j][i] = matrix[i][j];
    }
  }
  return transpose;
}
