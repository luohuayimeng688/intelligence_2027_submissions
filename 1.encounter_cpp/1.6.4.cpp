#include <iostream>
#include <vector>
#include <string>

class Projectile {
public:
    int size;
    std::string type;
    Projectile(int s, std::string t) : size(s), type(t) {}
};

int main() {
    std::vector<Projectile> bullets;
    bullets.push_back(Projectile(42, "42mm大弹丸"));
    bullets.push_back(Projectile(17, "17mm小弹丸"));
    
    std::cout << "当前弹丸仓库：" << std::endl;
    for (int i = 0; i < bullets.size(); ++i) {
        std::cout << "类型: " << bullets[i].type << "，尺寸: " << bullets[i].size << "mm" << std::endl;
    }
    return 0;
}