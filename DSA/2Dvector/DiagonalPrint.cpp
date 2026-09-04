#include<iostream>
#include<vector>
using namespace std;

//Variation-1 -> diagonally down
void diagonal(vector<vector<int>>& mat) {

    int m = mat.size();
    int n = mat[0].size();

    // Start diagonals from top row
    for(int startCol = 0; startCol < n; startCol++) {

        int i = 0;
        int j = startCol;

        while(i < m && j < n) {
            cout << mat[i][j] << " ";
            i++;
            j++;
        }

        cout << endl;
    }

    // Start remaining diagonals from left column
    for(int startRow = 1; startRow < m; startRow++) {

        int i = startRow;
        int j = 0;

        while(i < m && j < n) {
            cout << mat[i][j] << " ";
            i++;
            j++;
        }

        cout << endl;
    }
}


//Variation-2 -> diagonally up
void diagonal(vector<vector<int>>& mat) {

    int m = mat.size();
    int n = mat[0].size();

    // Start from left column
    for(int startRow = 0; startRow < m; startRow++) {

        int i = startRow;
        int j = 0;

        while(i >= 0 && j < n) {
            cout << mat[i][j] << " ";
            i--;
            j++;
        }

        cout << endl;
    }

    // Start from bottom row
    for(int startCol = 1; startCol < n; startCol++) {

        int i = m - 1;
        int j = startCol;

        while(i >= 0 && j < n) {
            cout << mat[i][j] << " ";
            i--;
            j++;
        }

        cout << endl;
    }
}


