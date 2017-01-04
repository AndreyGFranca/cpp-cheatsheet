#include <ncurses.h>

int main (){
    initscr(); //Start curses mode
    printw("Hello, World");
    getch();
    refresh();
    endwin();
    return 0;
}
