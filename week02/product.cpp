#include "product.h"

// Product Ŭ���� ������
Product::Product(string name, double unitPrice)
    : name(name), unitPrice(unitPrice)  // ��� �ʱ�ȭ
{
}

// Product Ŭ���� �Ҹ���
Product::~Product()
{
}

// ��ǰ �ܰ� ��ȯ (getter)
double Product::getPrice() const
{
    return unitPrice;
}
