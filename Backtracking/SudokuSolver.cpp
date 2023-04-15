#include <bits/stdc++.h>
using namespace std;

#define N 9



/* Checking Three Conditions:
   1.ROw
   2.Column
   3.3*3 Grid
*/
bool checkSafe(int grid[N][N], int row,
            int col, int num)
{
    // 1.Condition:checking row

    for (int x = 0; x <= 8; x++)
        if (grid[row][x] == num)
            return false;

    // 2.Condition:checking column

    for (int x = 0; x <= 8; x++)
        if (grid[x][col] == num)
            return false;

    // 3.Condition:checking 3X3 grid

    int startRow = row - row % 3,
        startCol = col - col % 3;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (grid[i + startRow][j +
                                   startCol] == num)
                return false;

    return true;
}

bool solveSudoku(int grid[N][N], int row, int col)
{

    // Base Condition Of Recursion
    if (row == N - 1 && col == N)
        return true;

    // Reset Columns to 0 if reach last
    if (col == N)
    {
        row++;
        col = 0;
    }

    // Checking if grid already contain element:Skip if true
    if (grid[row][col] > 0)
        return solveSudoku(grid, row, col + 1);

    for (int num = 1; num <= N; num++)
    {

        if (checkSafe(grid, row, col, num))
        {
            // Asign value if checkSafe=TRUE
            grid[row][col] = num;

            //  Checking for next possibility with next
            //  column
            if (solveSudoku(grid, row, col + 1))
                return true;
        }

        // Backtracking->Undoing Changes
        grid[row][col] = 0;
    }
    return false;
}
void printboard(int arr[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << "|" << arr[i][j];
            // cout << "__";
        }
        cout << "|";

        cout
            << endl;
    }
}
// Driver Code
int main()
{
    // 0 means unassigned cells
    int board[N][N] = {{3, 0, 6, 5, 0, 8, 4, 0, 0},
                      {5, 2, 0, 0, 0, 0, 0, 0, 0},
                      {0, 8, 7, 0, 0, 0, 0, 3, 1},
                      {0, 0, 3, 0, 1, 0, 0, 8, 0},
                      {9, 0, 0, 8, 6, 3, 0, 0, 5},
                      {0, 5, 0, 0, 9, 0, 6, 0, 0},
                      {1, 3, 0, 0, 0, 0, 2, 5, 0},
                      {0, 0, 0, 0, 0, 0, 0, 7, 4},
                      {0, 0, 5, 2, 0, 6, 3, 0, 0}};
    cout << "UnSolved Sudoku\n\n";
    printboard(board);
    cout << "\n******************************************************\n";
    cout << "Solved Sudoku\n\n";
    if (solveSudoku(board, 0, 0))
        printboard(board);
    else
        cout << "no solution  exists " << endl;

    return 0;
}