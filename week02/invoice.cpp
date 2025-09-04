#include "invoice.h"
#include <iostream>
#include <locale>
using namespace std;

// 생성자 (composition 사용: Invoice가 Company 객체 직접 포함)
Invoice::Invoice(int invoiceNumber, string name, string phone)
    : invoiceNumber(invoiceNumber), invoiceTotal(0.0), company(name, phone)
{
}

Invoice::~Invoice() {}

// 제품 추가: quantity * product 가격
void Invoice::add(int quantity, Product product)
{
    invoiceTotal += quantity * product.getPrice();
}

// 청구서 출력
void Invoice::print() const
{
    wcout.imbue(locale("")); // 콘솔 로캘 적용

    company.print();  // 회사 정보 출력
    wcout << L"청구 번호: " << invoiceNumber << endl;
    wcout << L"청구 금액: " << invoiceTotal << endl;
}
