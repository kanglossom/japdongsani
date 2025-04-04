#ifndef TERM_OPERATE   // 헤더가 정의되지 않았다면
#define TERM_OPERATE  // 헤더를 정의함

#include <iostream>

class Term {
private:
    // private 멤버 변수와 함수
    int* coeff; // 계수
    int* expo;  // 지수
    int size; // 항 개수
public:
    Term(); // 기본 생성자
    Term(int c, int e); // 생성자
    // 연산 결과 다항식이 비어있으면 0 이라서 0 넣음
    ~Term(); // 소멸자

    void sort(); // 지수를 내림차순으로 정렬
    void swap();

    // void addTerm(int coeff, int expo); // 항 입력받아서 추가하기
    
    // 연산자 오버로딩 -> 다항식 덧셈 뺄셈
    Term operator+(const Term& other) const; // 다항식 덧셈
    Term operator-(const Term& other) const; // 다항식 뺄셈
    // TermOperate : 반환되는 타입
    // operator+/- : 각각 +, - 연산자를 오버로딩 하겠다
    // (const TermOperate& other) : other 이라는 다른 다항식을 받아 지금 다항식과 더하겠다!
    // const : 원본 객체를 수정하지 않겟슴.

    // 거 코딩하기 참 힘드네....흑흑모래모래자갈자갈
};

#endif // 조건문 닫기
