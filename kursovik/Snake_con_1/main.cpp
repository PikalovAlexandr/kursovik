
#include "const.h"
using namespace std;
#define	  stop __asm ("nop");
int main(int argc,char *argv[])
{
    // инициализация (должна быть выполнена
      // перед использованием ncurses)
      initscr();

      // перемещение курсора в стандартном экране y=10 x=30
      move(10,30);

      printw("Hello world !!!"); // вывод строки
      refresh(); // обновить
      getch(); // ждём нажатия символа

      endwin(); // завершение работы с ncurses
}

