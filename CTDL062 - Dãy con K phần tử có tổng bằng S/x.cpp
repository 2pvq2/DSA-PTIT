#include <iostream>
#include <vector>
using namespace std;

int dem(int d, int K, int S, vector<int>& A, int N) {
    if (K == 0 && S == 0) return 1; 
    if (d == N || K < 0 || S < 0) return 0; 

    int count = dem(d + 1, K - 1, S - A[d], A, N);
    
    count += dem(d + 1, K, S, A, N);

    return count;
}

int main() {
    int t;
    cin >> t; 
    while (t--) {
        int N, K, S;
        cin >> N >> K >> S;
        vector<int> A(N);
        for (int i = 0; i < N; i++) cin >> A[i];
        
        cout << dem(0, K, S, A, N) << endl;
    }
    return 0;
}