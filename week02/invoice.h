#ifndef INVOICE_H
#define INVOICE_H

#include "product.h"
#include "company.h"

// Invoice Ŭ����: û������ ��Ÿ���� Ŭ����
class Invoice
{
    // Product�� ��� �ʵ�� ������ ���� ���� �� use-a ���踸 ����
private:
    int invoiceNumber;    // û�� ��ȣ
    double invoiceTotal;  // �� û�� �ݾ�
    Company company;      // has-a ���� (composition ���)

public:
    // ������ (composition: Invoice�� Company ��ü ���� ����)
    Invoice(int invoiceNumber, string name, string phone);

    // ������ ���� (aggregation, �ּ� ó����)
    // Invoice(int invoiceNumber, Company company); // aggregation O

    ~Invoice();  // �Ҹ���

    // ��ǰ �߰� (use-a ����)
    void add(int quantity, Product product);

    // û���� ���
    void print() const;

    // aggregation ���ÿ� ��� (�ּ� ó����)
    // void print(Company company) const;
};

#endif
