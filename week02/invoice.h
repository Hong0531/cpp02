#ifndef INVOICE_H
#define INVOICE_H

#include "product.h"
#include "company.h"

// Invoice 클래스: 청구서를 나타내는 클래스
class Invoice
{
    // Product를 멤버 필드로 가지고 있지 않음 → use-a 관계만 존재
private:
    int invoiceNumber;    // 청구 번호
    double invoiceTotal;  // 총 청구 금액
    Company company;      // has-a 관계 (composition 사용)

public:
    // 생성자 (composition: Invoice가 Company 객체 직접 포함)
    Invoice(int invoiceNumber, string name, string phone);

    // 생성자 예시 (aggregation, 주석 처리됨)
    // Invoice(int invoiceNumber, Company company); // aggregation O

    ~Invoice();  // 소멸자

    // 제품 추가 (use-a 관계)
    void add(int quantity, Product product);

    // 청구서 출력
    void print() const;

    // aggregation 예시용 출력 (주석 처리됨)
    // void print(Company company) const;
};

#endif
