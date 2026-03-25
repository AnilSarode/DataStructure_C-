#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	/* code */

    int N, M, K;

    // Input matrix dimensions
    cout << "Enter dimensions of matrix A (N M): ";
    cin >> N >> M;

    cout << "Enter number of columns of matrix B (K): ";
    cin >> K;

    // Declare matrices
    int A[N][M], B[M][K], C[N][K];

    // Input Matrix A
    cout << "Enter elements of matrix A (" << N << "x" << M << "):\n";
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> A[i][j];

    // Input Matrix B
    cout << "Enter elements of matrix B (" << M << "x" << K << "):\n";
    for (int i = 0; i < M; i++)
        for (int j = 0; j < K; j++)
            cin >> B[i][j];

    // Initialize result matrix C to 0
    for (int i = 0; i < N; i++)
        for (int j = 0; j < K; j++)
            C[i][j] = 0;


    // Matrix multiplication
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < K; j++) {
            for (int k = 0; k < M; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Output result matrix C
    cout << "Resultant matrix C (" << N << "x" << K << "):\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < K; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }


    return 0;


}