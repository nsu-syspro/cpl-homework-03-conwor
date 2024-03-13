# Домашнее задание №03 - Калькулятор, защищённый от неопределённого поведения

Повторить [задание №02 (Калькулятор)](https://github.com/conwor/cpl-homework-02), но на этот раз
калькулятор должен быть защищён от двух видов неопределённого поведения:
* __Деление на ноль__ - если число `B` равно `0`, операторы деления и остатка от деления не должны
  выполняться. Вместо результатов этих операторов должно вывестись сообщение об ошибке
  `Division by zero is forbidden`.
* __Арифметическое переполнение сложения и вычитания__ - если вычисление какого-либо из
  арифметических операторов + или - приводит к переполнению, он не должен вычисляться. Вместо его
  результата должно вывестись сообщение об ошибке `Signed arithmetic overflow is forbidden`.

## Пример №1

### Входные данные

```
0 0
```

### Выходные данные

```
arithmetic operators:
A + B  : 0
A - B  : 0
A * B  : 0
A / B  : Division by zero is forbidden
A % B  : Division by zero is forbidden
-A     : 0

logical operators:
A && B : 0
A || B : 0
!A     : 1

bitwise operators:
A & B  : 0
A | B  : 0
A ^ B  : 0
A << B : 0
A >> B : 0
~A     : -1

relational operators:
A == B : 1
A != B : 0
A < B  : 0
A > B  : 0
A <= B : 1
A >= B : 1

```

## Пример №2

### Входные данные

```
2147483646 2
```

### Выходные данные

```
arithmetic operators:
A + B  : Signed arithmetic overflow is forbidden
A - B  : 2147483644
A * B  : -4
A / B  : 1073741823
A % B  : 0
-A     : -2147483646

logical operators:
A && B : 1
A || B : 1
!A     : 0

bitwise operators:
A & B  : 2
A | B  : 2147483646
A ^ B  : 2147483644
A << B : -8
A >> B : 536870911
~A     : -2147483647

relational operators:
A == B : 0
A != B : 1
A < B  : 0
A > B  : 1
A <= B : 0
A >= B : 1

```
