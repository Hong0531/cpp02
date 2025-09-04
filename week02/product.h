#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
#include <iostream>
using namespace std;

// Product 클래스: 제품 정보를 나타냄
class Product
{
private:
    string name;       // 제품 이름
    double unitPrice;  // 제품 단가

public:
    // 생성자
    Product(string name, double unitPrice);

    // 소멸자
    ~Product();

    // 제품 단가 반환 (getter)
    double getPrice() const;
};

#endif
