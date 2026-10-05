#include <iostream>
#include <string>

int main() {
    int a = 10;
    float b = 3.14f;
    double c = 3.14159;
    char d = 'A';
    std::string e = "Hello";
    int* f = nullptr; 
    auto g = 100; 

    std::cout << "int    a = " << a << "  | 大小: " << sizeof(a) << " 字节" << std::endl;
    std::cout << "float  b = " << b << " | 大小: " << sizeof(b) << " 字节" << std::endl;
    std::cout << "double c = " << c << " | 大小: " << sizeof(c) << " 字节" << std::endl;
    std::cout << "char   d = " << d << "    | 大小: " << sizeof(d) << " 字节" << std::endl;
    std::cout << "string e = " << e << "  | 大小: " << sizeof(e) << " 字节" << std::endl;
    std::cout << "指针   f = " << f << "     | 大小: " << sizeof(f) << " 字节" << std::endl;
    std::cout << "auto   g = " << g << "   | 大小: " << sizeof(g) << " 字节" << std::endl;

    return 0;
}