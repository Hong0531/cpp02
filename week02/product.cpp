#include "product.h"

// Product 클래스 생성자
Product::Product(string name, double unitPrice)
    : name(name), unitPrice(unitPrice)  // 멤버 초기화
{
}

// Product 클래스 소멸자
Product::~Product()
{
}

// 제품 단가 반환 (getter)
double Product::getPrice() const
{
    return unitPrice;
}
