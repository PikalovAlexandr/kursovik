#include <stdlib.h>
#include <iostream>
#include <ncurses.h>
#include <unistd.h>
#include "const.h"
using namespace std;
#define	  stop __asm ("nop");
int main()
{
    char snake_x[L];
    char field [columns];
    snake_x[0]=head_symbol;
    for (int i=0;i<columns; i++) {
        field [i]=' ';
        cout << field ;
        cout<<snake_x[0];
        //sleep(1);
        system("clear");

    }

}

