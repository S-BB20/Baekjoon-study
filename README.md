# Baekjoon-study

### Visual Studio에서 Scanf() 등을 이용하는 법
> - 디버그-> 디버그 속성-> C/C++ -> SDL검사 = 아니요
> - #define _CRT_SECURE_NO_WARNINGS 를 맨 위에 추가
> - scanf_s 사용 (비추천)

### Visual Studio 에서 조건식 적는 공간이 아닌 곳에 a == b 같이 적어도 오류가 안뜬다. (백준 3009번 코드 틀린거 참고)

### Scanf()에서 띄어쓰기도 같이 받기 = %[^\n]s 사용

### Dev C++ 자동정렬 Ctrl+Shift+a

### strlen()를 반복문 조건식에 넣어두면 조건을 비교할 때마다 strlen()에 들어간 문자열의 크기만큼 연산을 반복한다. (시간초과의 주범)
