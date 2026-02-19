#include<stdio.h> 
#include<conio.h> 
#include<graphics.h> 
#include<dos.h> 
void flood(int,int,int,int); 
int main() 
{ 
int gd,gm=DETECT; 
system("clear");
detectgraph(&gd,&gm); 
initgraph(&gd,&gm,"C:\\TurboC3\\BGI"); 
rectangle(50,50,100,100);
setcolor(12);
outtextxy(50,150,"8-Connected approach flood fill algorithm");
setcolor(9);
line(30,170,330,170);
flood(55,55,11,0); 
getch(); 
return 0;
} 
void flood(int x,int y, int fill_col, int old_col) 
{ 
if(getpixel(x,y)==old_col) 
{
delay(10); putpixel(x,y,fill_col); 
flood(x+1,y,fill_col,old_col); 
flood(x-1,y,fill_col,old_col); 
flood(x,y+1,fill_col,old_col); 
flood(x,y-1,fill_col,old_col); 
flood(x + 1, y - 1, fill_col, old_col); 
flood(x + 1, y + 1, fill_col, old_col); 
flood(x - 1, y - 1, fill_col, old_col); 
flood(x - 1, y + 1, fill_col, old_col);
} 
}