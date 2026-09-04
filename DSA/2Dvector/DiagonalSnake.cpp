#include<iostream>
#include<vector>
using namespace std;

//Variation 1 -> 1 2 5 9 6 3 4 7 10 13 14 11 8 12 15 16
void diagonalSnake1(vector<vector<int>>& mat) {

    int m = mat.size();
    int n = mat[0].size();

    for(int d = 0; d < m + n - 1; d++) {

        if(d % 2 == 0) {

            // bottom -> top
            int i = min(d, m - 1);
            int j = d - i;

            while(i >= 0 && j < n) {
                cout << mat[i][j] << " ";
                i--;
                j++;
            }

        }
        else {

            // top -> bottom
            int j = min(d, n - 1);
            int i = d - j;

            while(j >= 0 && i < m) {
                cout << mat[i][j] << " ";
                i++;
                j--;
            }
        }
    }
}



//Variation-2 -> 1 5 2 3 6 9 13 10 7 4 8 11 14 15 12 16
void diagonalSnake2(vector<vector<int>>& mat) {

    int m = mat.size();
    int n = mat[0].size();

    for(int d = 0; d < m + n - 1; d++) {

        if(d % 2 == 0) {

            // top -> bottom
            int j = min(d, n - 1);
            int i = d - j;

            while(i < m && j >= 0) {
                cout << mat[i][j] << " ";
                i++;
                j--;
            }

        }
        else {

            // bottom -> top
            int i = min(d, m - 1);
            int j = d - i;

            while(i >= 0 && j < n) {
                cout << mat[i][j] << " ";
                i--;
                j++;
            }
        }
    }
}