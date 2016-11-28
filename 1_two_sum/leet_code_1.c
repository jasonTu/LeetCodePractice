/**
 * 259 ms C solution, need improvement.
 * Author: Jason Tu.
 * Contain the core function and simple test case.
 */

#include <stdio.h>
#include <stdlib.h>

int * two_sum(int *nums, int num_size, int target)
{
    int i, j;
    int *result = malloc(2*sizeof(int));
    for (i = 0; i < num_size; i++) {
        for (j = num_size; j > i; j--) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
            }
        }
    }

    return result;
}

int main(void)
{
    int arr[] = {0, 4, 3, 0};
    int *result = NULL;

    result = two_sum(arr, sizeof(arr)/sizeof(int), 0);

    printf("%d, %d\n", result[0], result[1]);
}
