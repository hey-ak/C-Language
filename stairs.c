#include <stdio.h>

int countDistinctWays(int nStairs) {
    if(nStairs < 0) {
        return 0;
    }
    if(nStairs == 0) {
        return 1;
    }
    int ans = countDistinctWays(nStairs-1) + countDistinctWays(nStairs-2);
    return ans;
}

int main() {
    int nStairs = 10;
    int ways = countDistinctWays(nStairs);
    printf("Number of distinct ways to climb %d stairs: %d\n", nStairs, ways);
    return 0;
}
