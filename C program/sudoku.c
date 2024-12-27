#include <stdio.h>

// Function to check if a number is valid to be placed in the given row, col
int is_valid(int grid[9][9], int row, int col, int num) {
    for (int i = 0; i < 9; i++) {
        if (grid[row][i] == num)
            return 0;
        if (grid[i][col] == num)
            return 0;
    }
    // check the box
    int start_row = row - row % 3;
    int start_col = col - col % 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (grid[i + start_row][j + start_col] == num)
                return 0;
        }
    }
    return 1;
}

// Function to solve the Sudoku puzzle using backtracking
int solve_sudoku(int grid[9][9]) {
    int row = -1;
    int col = -1;
    int found_empty = 0;
    // find an empty cell
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (grid[i][j] == 0) {
                row = i;
                col = j;
                found_empty = 1;
                break;
            }
        }
        if (found_empty)
            break;
    }
    // no empty cell found means puzzle is solved
    if (!found_empty)
        return 1;
    // try to place numbers from 1 to 9 in the cell
    for (int num = 1; num <= 9; num++) {
        if (is_valid(grid, row, col, num)) {
            grid[row][col] = num;
            // recursive call to solve the puzzle
            if (solve_sudoku(grid))
                return 1;
            // if no solution is found, reset the cell and backtrack
            grid[row][col] = 0;
        }
    }
    return 0;
}

// Function to print the grid
void print_grid(int grid[9][9]) {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            printf("%d ", grid[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int grid[9][9] = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };

    if (solve_sudoku(grid))
        print_grid(grid);
    else
        printf("No solution exists.");

    return 0;
} 