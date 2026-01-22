#include<dos.h> 
#include<stdio.h> 
#include<conio.h> 
#include<graphics.h> 
void draw_circle(int,int,int); 
void symmetry(int,int,int,int); 
int main() 
{ 
int xc,yc,R; 
int gd=DETECT,gm; 
initgraph(&gd,&gm,"C:\\TurboC3\\BGI"); 
printf("Enter the center of the circle:\n"); 
printf("Xc ="); 
scanf("%d",&xc); 
printf("Yc ="); 
scanf("%d",&yc); 
printf("Enter the radius of the circle :"); 
scanf("%d",&R); 
draw_circle(xc,yc,R); 

putpixel(xc,yc,GREEN);
setcolor(8);
outtextxy(xc-20,yc-20,"(xc,yc)");
setcolor(6);
outtextxy(xc-R,yc+R+30,"MID POINT CIRCLE ALGORITHM");
setcolor(5);
line(xc-R-50,yc+R+50,xc+R+80,yc+R+50);

getch(); 
closegraph(); 
return 0;
} 
void draw_circle(int xc,int yc,int rad) 
{ 
int x = 0; int y 
= rad; int p = 
1-rad; 
symmetry(x,y,xc,yc); 
for(x=0;y>x;x++) 
{ 
if(p<0) 
p += 2*x + 3; 
else 
{ 
p += 2*(x-y) + 5; 
y--; 
} 
symmetry(x,y,xc,yc); 
delay(20); 
} 
} 
void symmetry(int x,int y,int xc,int yc) 
{ 
putpixel(xc+x,yc-y,GREEN); //For pixel (x,y) 
delay(20); 
putpixel(xc+y,yc-x, GREEN);  //For pixel (y,x) 
delay(20); 
putpixel(xc+y,yc+x, GREEN); //For pixel (y,-x) 

   
delay(50); 
putpixel(xc+x,yc+y, GREEN); //For pixel (x,-y) 
delay(20); 
putpixel(xc-x,yc+y, GREEN);  //For pixel (-x,-y) 
delay(20); 
putpixel(xc-y,yc+x, GREEN);  //For pixel (-y,-x) 
delay(20); 
putpixel(xc-y,yc-x, GREEN);  //For pixel (-y,x) 
delay(20); 
putpixel(xc-x,yc-y, GREEN);  //For pixel (-x,y) 
delay(20); 
} 