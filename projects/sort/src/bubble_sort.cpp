#include "bubble_sort.hpp"

#include <algorithm>

namespace sortlib {

void bubble_sort(std::vector<int>& a) {
    if (a.empty()) return;
    bool swapped = true;
    size_t n = a.size();
    while (swapped) {
        swapped = false;
        for (size_t i = 1; i < n; ++i) {
            if (a[i-1] > a[i]) {
                std::swap(a[i-1], a[i]);
                swapped = true;
            }
        }
        --n;
    }
}

} // namespace sortlib
