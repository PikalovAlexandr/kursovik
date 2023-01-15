#ifndef CONST_H
#define CONST_H
#include <ncurses.h>
#include <stdlib.h>
#include <iostream>
size_t  columns; // длина игрового поля по горизонтали
const char border_symbol = '=';
const char tail_symbol = '@'; //символ хвоста змеи
const char head_symbol = '#'; // символ головы змеи
const char field_symbol = ' '; // символ заполнения поля
const unsigned int L=(columns-3);

#endif // CONST_H
