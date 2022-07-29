# libft_math

수학 공식을 입력하기 위한 라이브러리입니다.

공식 :: https://ko.wikipedia.org/wiki/%EC%88%98%ED%95%99
wikipedia를 참고하여 분류하였습니다

코드 최적화를 위한 규칙
1. 상수는 DEFINE 하여 나둔다
2. 나누셈을 지양하라. (속도가 10배 정도 느리다)


차원 : src_dimension
1. $ cd src_dimension
2. $ make
3. $ mv libdimensional.a ../
4. $ cd ../
5. $ cc dimension.c libdimensional.a -I include
아직 4차원 끼리 잊는 것은 완성하지 못함
