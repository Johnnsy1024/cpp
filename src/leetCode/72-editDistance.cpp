#include "headerFile/72-editDistance.h"
#include <iostream>

int minOfThree(int a, int b, int c)
{
    int minVal = a;
    int residual[] = { b, c };
    for (int i = 0; i < sizeof(residual) / sizeof(residual[0]); i++) {
        if (residual[i] < minVal) {
            minVal = residual[i];
        }
    }
    return minVal;
}

int minDistance(const char* ptr1, const char* ptr2, int str1Size, int str2Size)
{
    int width = str1Size + 1;
    int length = str2Size + 1;

    int dp[width][length];
    for (int i = 0; i < length; i++) {
        dp[0][i] = i;
    }
    for (int j = 0; j < width; j++) {
        dp[j][0] = j;
    }

    for (int i = 1; i < width; i++) {
        for (int j = 1; j < length; j++) {
            if (*(ptr1 + i - 1) == *(ptr2 + i - 1)) {
                dp[i][j] = dp[i - 1][j - 1];
            } else {
                dp[i][j] = minOfThree(dp[i - 1][j] + 1, dp[i][j - 1] + 1, dp[i - 1][j - 1] + 1);
            }
        }
    }
    return dp[width - 1][length - 1];
}