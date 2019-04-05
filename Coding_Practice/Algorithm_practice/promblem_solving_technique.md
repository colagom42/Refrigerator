#Problem solving process

##1. 문제 읽고 이해하기

##2. 재정의와 추상화

##3. 계획 세우기

###Questions

	-비슷한 유형?

	-가장 단순한 방법?

	-수식화?

	-단순화?
	
	-그림?

	-수식?

	-분해?

	-역순?

	-순서 강제?

	-특정한 답?
##4. 계획 검증

-귀류법

-Induction

##5. 계획 수행

###Coding

-간결하게

-재사용

-표준 라이브러리

-동일한(검증된) 코드 지향

-명료한 명명법

-정규화

-코드-데이터 분리

###Common mistakes

####산술 오버플로

-범위 밖 원소 접근

-범위표현

-0ff-by-one

-상수 오타

-stack overflow

-다차원배열의인덱스

-잘못된 비교함수

-최대/치ㅗ소 (corner point) 오류

-입출력 속도 지연

-변수 초기화/ 동적배열 해제

###Debugging & Testing

-눈으로 하는 디버깅 연습

-작은 입력

-단정문

-중간과정 출력

Testing

-Scafolding

###변수 범위

정수형 & 실수형 -> 실수형

정수 & 정수 or 실수 & 실수 -> 넓은범위

int보다 작은 정수 -> int

unsignd & signed -> unsigned

연산시 프로모션에 주의

###실수 자료형

대부분 근삿값으로 나타남

####IEEE 754 Standard

-이진수로 실수표기
-부동소수점 표기
-무한대 비정규 수 NAN등 특수값 존재 등

####실수의 표기

지수 : 소수점을 몇칸 옮겼나?
가수 : 소수점을 옮긴 실수의 최상위X비트

32비트 실수 지수8, 가수 23 유효 자릿수 6

64비트 실수  11     52        15

80비트 실수  15     64        18

####오차 설정

A) 오차 한도 설정

B) 상대오차+ 매우 작은 절대 오차

-안정된 시스템 구축 추구 (오차의 전이 방지)

##6. 회고

#Algotithm analysis

##Time complexity

dominated by Loop

Linear : O(N)

Less than linear : O(log(N))

Algebraic : O(N^n)

Power : O(x^N)
