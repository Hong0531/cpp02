#include "invoice.h"
#include <iostream>
#include <locale>
using namespace std;

// ������ (composition ���: Invoice�� Company ��ü ���� ����)
Invoice::Invoice(int invoiceNumber, string name, string phone)
    : invoiceNumber(invoiceNumber), invoiceTotal(0.0), company(name, phone)
{
}

Invoice::~Invoice() {}

// ��ǰ �߰�: quantity * product ����
void Invoice::add(int quantity, Product product)
{
    invoiceTotal += quantity * product.getPrice();
}

// û���� ���
void Invoice::print() const
{
    wcout.imbue(locale("")); // �ܼ� ��Ķ ����

    company.print();  // ȸ�� ���� ���
    wcout << L"û�� ��ȣ: " << invoiceNumber << endl;
    wcout << L"û�� �ݾ�: " << invoiceTotal << endl;
}
