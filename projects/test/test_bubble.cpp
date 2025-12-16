#include <gtest/gtest.h>
#include "../sort/src/bubble_sort.hpp"
#include <vector>

TEST(BubbleSortTest, SortsCorrectly) {
    std::vector<int> a = {5,3,4,1,2};
    sortlib::bubble_sort(a);
    ASSERT_EQ(a.size(), 5);
    for (size_t i = 1; i < a.size(); ++i) {
        ASSERT_LE(a[i-1], a[i]);
    }
}

TEST(BubbleSortTest, Empty) {
    std::vector<int> a;
    sortlib::bubble_sort(a);
    ASSERT_TRUE(a.empty());
}
