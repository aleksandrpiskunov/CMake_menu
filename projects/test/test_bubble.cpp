#include <gtest/gtest.h>
#include "../sort/src/bubble_sort.hpp"

TEST(BubbleSortTest, SortsCorrectly) {
    int a[] = {5,3,4,1,2};
    const int n = sizeof(a)/sizeof(a[0]);
    pav::sortings::bubble_sort(a, n);
    for (int i = 1; i < n; ++i) {
        ASSERT_LE(a[i-1], a[i]);
    }
}

TEST(BubbleSortTest, Empty) {
    int a[] = {};
    const int n = 0;
    pav::sortings::bubble_sort(a, n);
    SUCCEED();
}
