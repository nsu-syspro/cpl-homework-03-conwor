#include <limits.h>
#include <stdbool.h>
#include <stdio.h>

int a, b;

int main() {
  scanf("%d", &a);
  scanf("%d", &b);

  printf("arithmetic operators:\n");

  _Bool add_ok = (b > 0) ? (a <= INT_MAX - b) : (a >= INT_MIN - b);
  if (add_ok) {
    printf("A + B  : %d\n", a + b);
  } else {
    printf("A + B  : Signed arithmetic overflow is forbidden\n");
  }

  _Bool sub_ok = (b < 0) ? (a <= INT_MAX + b) : (a >= INT_MIN + b);
  if (sub_ok) {
    printf("A - B  : %d\n", a - b);
  } else {
    printf("A - B  : Signed arithmetic overflow is forbidden\n");
  }

  printf("A * B  : %d\n", a * b);

  if (b != 0) {
    printf("A / B  : %d\n", a / b);
    printf("A %% B  : %d\n", a % b);
  } else {
    printf("A / B  : Division by zero is forbidden\n");
    printf("A %% B  : Division by zero is forbidden\n");
  }

  printf("-A     : %d\n", -a);
  printf("\n");
  printf("logical operators:\n");
  printf("A && B : %d\n", a && b);
  printf("A || B : %d\n", a || b);
  printf("!A     : %d\n", !a);
  printf("\n");
  printf("bitwise operators:\n");
  printf("A & B  : %d\n", a & b);
  printf("A | B  : %d\n", a | b);
  printf("A ^ B  : %d\n", a ^ b);
  printf("A << B : %d\n", a << b);
  printf("A >> B : %d\n", a >> b);
  printf("~A     : %d\n", ~a);
  printf("\n");
  printf("relational operators:\n");
  printf("A == B : %d\n", a == b);
  printf("A != B : %d\n", a != b);
  printf("A < B  : %d\n", a < b);
  printf("A > B  : %d\n", a > b);
  printf("A <= B : %d\n", a <= b);
  printf("A >= B : %d\n", a >= b);

  return 0;
}
