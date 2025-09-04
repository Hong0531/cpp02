#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
#include <iostream>
using namespace std;

// Product Ŭ����: ��ǰ ������ ��Ÿ��
class Product
{
private:
    string name;       // ��ǰ �̸�
    double unitPrice;  // ��ǰ �ܰ�

public:
    // ������
    Product(string name, double unitPrice);

    // �Ҹ���
    ~Product();

    // ��ǰ �ܰ� ��ȯ (getter)
    double getPrice() const;
};

#endif
