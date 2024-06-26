#include <stdio.h>
void circularConvolution(int x[], int N, int h[], int M, int y[]) {
    // Ensure N is not less than M
    if (N < M) {
        printf("N must be greater than or equal to M for circular convolution.\n");
        return;
    }
    int L = N + M - 1;
    int xPadded[L];
    int hPadded[L];
    // Zero-pad the input sequences
    for (int i = 0; i < L; i++) {
        xPadded[i] = (i < N) ? x[i] : 0;
        hPadded[i] = (i < M) ? h[i] : 0;
    }
    // Perform circular convolution
    for (int n = 0; n < L; n++) {
        y[n] = 0;
        for (int k = 0; k < L; k++) {
            y[n] += xPadded[k] * hPadded[(L - n - k) % L];
        }
    }
}
int main() {
    int x[] = {1, 2, 3};
    int N = sizeof(x) / sizeof(x[0]);
    int h[] = {4, 5, 7};
    int M = sizeof(h) / sizeof(h[0]);
    int y[N + M - 1];
    circularConvolution(x, N, h, M, y);
    printf("Linear Convolution Result: ");
    for (int n = 0; n < N + M - 1; n++) {
        printf("%d ", y[n]);
    }
    return 0;
}