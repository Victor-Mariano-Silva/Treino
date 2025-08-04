#define MAX_SIZE 1000
#define mod 1000000007LL

long long comb_table[MAX_SIZE+1][MAX_SIZE+1];

void pascal(int n);
long long tree(int* nums, int numsSize);

int numOfWays(int* nums, int numsSize) {
    pascal(numsSize);
    long long answer = tree(nums, numsSize);
    return (int)((answer % mod - 1 + mod) % mod);
}

long long tree(int* nums, int numsSize) {
    int less[MAX_SIZE], more[MAX_SIZE];
    int lessSize = 0, moreSize = 0;

    if (numsSize < 3) {
        return 1;
    }

    for (int i = 1; i < numsSize; i++) {
        if (nums[i] < nums[0]) {
            less[lessSize++] = nums[i];
        } else {
            more[moreSize++] = nums[i];
        }
    }

    long long lessRes = tree(less, lessSize) % mod;
    long long moreRes = tree(more, moreSize) % mod;

    long long result = (comb_table[numsSize - 1][lessSize] * lessRes) % mod;
    result = (result * moreRes) % mod;
    return result;
}

void pascal(int n) {
    for (int i = 0; i <= n; i++) {
        comb_table[i][0] = comb_table[i][i] = 1;
        for (int j = 1; j < i; j++) {
            comb_table[i][j] = (comb_table[i-1][j-1] + comb_table[i-1][j]) % mod;
        }
    }
}