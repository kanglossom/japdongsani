#include <iostream>
#include "polynomial.h"
#pragma once
using namespace std;
// 컴파일 명령어
//g++ main.cpp polynomial.cpp -o main

int main(int argc, char** argv) {
  
  int termNum = 0; // 항 개수
  cin >> termNum; // 항 개수 입력받음
  int c[termNum]; // 계수 배열
  int e[termNum]; // 지수 배열
  Term* term = new Term[termNum]; // 동적 할당으로 항 배열 생성

  for (int i = 0; i < termNum; i++)
  {
    cin >> c[i] >> e[i]; // 각 항의 계수 지수 입력받기
    term[i] = Term(c[i], e[i]); // 항 개수만큼 항 입력받고 객체 생성
  }
  
  // 객체 생성까지 구현 완료
  term[i].sort(); // 정렬했음
  

  cout << sort() << endl;
  return 0;
}
