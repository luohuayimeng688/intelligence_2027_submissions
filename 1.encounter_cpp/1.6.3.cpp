#include <iostream>
#include <vector>

int main() {
    std::vector<int> v100;
    for (int i = 1; i <= 100; ++i) {
        v100.push_back(i);
    }
    
    for (auto it = v100.begin(); it != v100.end(); ) {
        if (*it % 2 != 0) {
            it = v100.erase(it);
        } else {
            ++it;
        }
    }
    
    std::cout << "删除单数后，剩下: " << v100.size() << " 个数字" << std::endl;
    return 0;
}