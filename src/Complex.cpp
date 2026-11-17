// ============================================================
// Complex.cpp - Complex 类成员函数实现
//
// 补全后运行 ./build/complex_demo，应该输出：
//   a = 3 + 4i
//   a + b = 4 + 6i
//   a - b = 2 + 2i
// 全部做完后再跑 ctest，应该显示 100% tests passed。
// ============================================================

#include "Complex.h"

#include <iostream>

using namespace std;

// 构造函数：用初始化列表给成员赋值，比在函数体里赋值少一次默认构造
Complex::Complex(double r, double i) : real(r), imag(i) {
}

// 析构函数：本类不持有动态资源，函数体空着即可
Complex::~Complex() {
}

// 复数相加：返回一个新对象，两个操作数都保持 const 不变
Complex Complex::operator+(const Complex& other) const {
    return Complex(real + other.real, imag + other.imag);
}

// 复数相减
Complex Complex::operator-(const Complex& other) const {
    return Complex(real - other.real, imag - other.imag);
}

// 按 a + bi / a - bi 的格式打印
void Complex::print() const {
    if (imag >= 0.0) {
        cout << real << " + " << imag << "i" << endl;
    } else {
        cout << real << " - " << -imag << "i" << endl;
    }
}

double Complex::getReal() const {
    return real;
}

double Complex::getImag() const {
    return imag;
}
