#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <graphics.h>
int main()
{
    int gm, gd = DETECT, i;
    
    char data[] = "C:\\MinGW\\lib\\libbgi.a"; //static file

    initgraph(&gd, &gm, data);
  
    setcolor(3);
    line(50,50,200,50);
	setcolor(5);
	line(60,60,200,60);
	setcolor(8);
	line(70,70,200,70);
   
    setcolor(7);
   circle(120,120,50);
    setcolor(4);
    rectangle(240,120,450,200);
    setcolor(6);
    rectangle(245,130,440,190);
        setcolor(2);
        outtextxy(250,150,"My Name is Sanjay Neupane");
    getch(); 
    closegraph();

    return 0;

}