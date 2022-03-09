#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<time.h>

void main()
{
 int gd=DETECT,gm,i=0,x,xx,y,yy,r;
 clrscr();
 initgraph(&gd,&gm,"C:\\turboc3\\bgi");
 x=getmaxx();
 y=getmaxx();
 while(!kbhit())
 {
  i++;
  circle(xx=random(x),yy=random(y),random(30));
  setfillstyle(random(i),random(30));
  floodfill(xx,yy,getmaxcolor());
  delay(200);
 }
 getch();
}