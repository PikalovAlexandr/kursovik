#ifndef CONST_H
#define CONST_H
//#include <ncurses.h>
#include <stdlib.h>
#include <iostream>
size_t  columns=50; // длина игрового поля по горизонтали
const char border_symbol = '=';
const char tail_symbol = '#'; //символ хвоста змеи
const char head_symbol = '@'; // символ головы змеи
const char field_symbol = ' '; // символ заполнения поля
const unsigned int L=1;//максимальный размер массива змейки
size_t snake_size=1;
int Timeout = 1000;
#endif // CONST_H
