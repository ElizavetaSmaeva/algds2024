Лабораторная работа №2
Вариант 8
Написать рекурсивные процедуры поиска, добавления и удаления в скошенное
дерево без ссылок на предков.



1. Установка g++ и  gtest
sudo apt-get install libgtest-dev libgmock-dev
sudo apt-get install google-mock
sudo apt-get install libtbb-dev
sudo apt-get install g++


2. Программа c деревом 
2.1 Сборка для дерева
g++ laba2.c -o laba2

2.2 Работа с деревом
./laba2
Inorder traversal of the binary search tree: 20 30 40 50 60 70 80 
Inorder traversal after deleting 20: 30 40 50 60 70 80 

3  Тестирование
3.1. Сборка для тестирования
g++ test_laba2.c laba2_test_func.c -o test_laba2 -lgtest -pthread

3.2 Запуск тестов 
./test_laba2 
[==========] Running 2 tests from 1 test suite.
[----------] Global test environment set-up.
[----------] 2 tests from LABA2
[ RUN      ] LABA2.KEY
[       OK ] LABA2.KEY (0 ms)
[ RUN      ] LABA2.left
[       OK ] LABA2.left (0 ms)
[----------] 2 tests from LABA2 (0 ms total)

[----------] Global test environment tear-down
[==========] 2 tests from 1 test suite ran. (0 ms total)
[  PASSED  ] 2 tests.

