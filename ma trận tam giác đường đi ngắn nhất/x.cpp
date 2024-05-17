#include <iostream>
#include <climits>

using namespace std;

const int MAX_N = 100; // Giả sử MAX_N là kích thước tối đa của ma trận tam giác.
int triangle[MAX_N][MAX_N]; // Ma trận tam giác lưu giá trị các ô.
int minPath[MAX_N][MAX_N]; // Ma trận lưu tổng giá trị nhỏ nhất đến từng ô.

int findMinPath(int N) {
    // Khởi tạo giá trị cho dòng cuối cùng của minPath.
    for (int i = 0; i < N; ++i) {
        minPath[N-1][i] = triangle[N-1][i];
    }
    // Quy hoạch động từ dưới lên trên của ma trận tam giác.
    for (int i = N - 2; i >= 0; --i) {
        for (int j = 0; j <= i; ++j) {
            minPath[i][j] = triangle[i][j] + min(minPath[i+1][j], min(minPath[i+1][j+1],  j > 0 ? minPath[i+1][j-1] : INT_MAX));
        }
    }

    return minPath[0][0]; // Kết quả nằm ở đỉnh ma trận tam giác.
}

int main() {
    int N; // Kích thước ma trận tam giác.
    cout << "Enter the size of the triangle matrix (N): ";
    cin >> N;

    cout << "Enter the values for the triangle matrix:" << endl;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j <= i; ++j) {
            cin >> triangle[i][j];
        }
    }
    cout << "The minimum path sum from top to bottom is: " << findMinPath(N) << endl;
    return 0;
}
