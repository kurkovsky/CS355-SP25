// a simple scaffolding for the matrix lab

#include <curses.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    initscr();
    int count=1;
    // this program will run forever and can be terminated by Ctrl-C
    while(1){
        int r=rand() % 5;           // generate random characters
        if(r==0) addstr("0");       // 20% of them will be a "0"
        else if(r==1) addstr("1");  // 20% of them will be a "1"
        else addstr(" ");           // 60% of them will be a " "
        count++;
        if(count>=COLS){
            refresh();
            usleep(500000);
            count=1;            
            move(0,0);
            insertln();             // this inserts a new line and shifts the screen down
        }
    }
    getchar();
    endwin();
}