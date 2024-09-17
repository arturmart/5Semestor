
#include <iostream>
#include <vector>


class matrixOperation {
public:
    matrixOperation() {

    }

    void rotateMatrixCW(std::vector<std::vector<int>>& M) {
        int c = M[0].size();
        int r = M.size();

        std::vector<std::vector<int>> newM;
        for (int i = 0; i < c; i++) {
            std::vector<int> line;
            for (int j = 0; j < r; j++) {
                line.push_back(M[r - j - 1][i]);
            }
            newM.push_back(line);
        }

        M = newM;

    }
    void rotateMatrixCCW(std::vector<std::vector<int>>& M) {
        int c = M[0].size();
        int r = M.size();

        std::vector<std::vector<int>> newM;
        for (int i = 0; i < c; i++) {
            std::vector<int> line;
            for (int j = 0; j < r; j++) {
                line.push_back(M[j][c-i-1]);
            }
            newM.push_back(line);
        }

        M = newM;

    }
    void printMatrix(const std::vector<std::vector<int>>& M) {
        for (int i = 0; i < M.size(); i++) {
            for (int j = 0; j < M[i].size(); j++) {
                std::cout << M[i][j]<<'\t';
            }
            std::cout << std::endl;
        }
    }
};
int main()
{
    matrixOperation MO;
    std::vector<std::vector<int>> matrix = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
        {10,11,12}, };

    MO.printMatrix(matrix);

    std::cout << std::endl;

    MO.rotateMatrixCCW(matrix);
    MO.printMatrix(matrix);
   
}

