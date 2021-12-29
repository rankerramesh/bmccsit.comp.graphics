#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<windows.h>
#include<stdlib.h>
#include<mmsystem.h>


void rocket()
{ 



 int i,k=0,j=0;

setcolor(BLUE);
 //earth
 
    for(i=30;i<=400;i++)
    {
setcolor(BLUE);

arc(500-i,200+i,0,120,200);
arc(500-i,200+i,0,120,300);
arc(500-i,200+i,0,120,400);
arc(500-i,200+i,0,120,500);

	
//rocket
setcolor(WHITE);
if(i<=200){
	settextstyle(0, HORIZ_DIR, 2);
	outtextxy(50,400+i,"EARTH- 2021-12-14,time;12mins,Fuel: 99% ,vel: 11.2km/s");
    
}
else{
	
    settextstyle(0, HORIZ_DIR, 2);
	outtextxy(50,400,"Space:presure/temp/300mmHg/-10degC");
	settextstyle(0, HORIZ_DIR, 2);
	setcolor(WHITE);
	outtextxy(50,370,"Lunar moduel pilot: Sushil Gyawali");


}

for(j=0;j<=7;j++)
{

setcolor(RED);
circle(320,300-i,0+j);
}

for(k=0;k<=15;k++)
{
setcolor(YELLOW);
circle(300,410-i,0+k);
circle(340,410-i,0+k);
circle(320,410-i,0+k);
circle(280,410-i,0+k);
circle(360,410-i,0+k);
}
setcolor(WHITE);
line(0,420+i,620,420+i);
line(340,400-i,340,320-i);
line(300,400-i,300,320-i);
if(i<=200){
line(330,370-i,330,330-i);
line(310,370-i,310,330-i);
line(310,330-i,330,330-i);
line(310,370-i,330,370-i);
}
else{

line(330,370,330,330);
line(310,370,310,330);
line(310,330,330,330);
line(310,370,330,370);
}
line(300,380-i,340,380-i);
line(270,400-i,370,400-i);
line(270,400-i,300,380-i);
line(340,380-i,370,400-i);
line(300,320-i,340,320-i);
line(300,320-i,320,300-i);
line(340,320-i,320,300-i);

delay(50);

cleardevice();

}
}

int main()
{
 int x,y,x1,y1;
// initgraph(&gd, &gm, (char*)" ");
int wid1 = initwindow(900,500,"APOLLO 11 ");
setcurrentwindow(wid1);

 cleardevice();
 system("Color 9");
 printf("\n\n\n\n\n");
 delay(100);
 printf("	W");delay(50);
 printf("E");delay(50);
 printf("L");delay(50);
 printf("C");delay(50);
 printf("O");delay(50);
 printf("M");delay(50);
 printf("E");delay(50);
printf(" TO THE BOARD CAPTAIN.SUSHIL GYAWALI SPEAKING");delay(50);
 printf(" ");delay(50);


 printf("\n	T");delay(50);
 printf("H");delay(50);
 printf("E");delay(50);
 printf(" ");delay(50);
 printf("R");delay(50);
 printf("O");delay(50);
 printf("C");delay(50);
 printf("K");delay(50);
 printf("E");delay(50);
 printf("T");delay(50);
 printf(" ");delay(50);
 printf("'");delay(50);
 printf("A");delay(50);
 printf("P");delay(50);
 printf("O");delay(50);
 printf("L");delay(50);
 printf("L");delay(50);
 printf("O");delay(50);
 printf("-");delay(50);
 printf("1");delay(50);
 printf("1");delay(50);
 printf("'");delay(50);
 printf(" ");delay(50);
 printf("I");delay(50);
 printf("S");delay(50);
 printf(" ");delay(50);
 printf("R");delay(50);
 printf("E");delay(50);
 printf("A");delay(50);
 printf("D");delay(50);
 printf("Y");delay(50);
 printf(" ");delay(50);
 printf("T");delay(50);
 printf("O");delay(50);
 printf(" ");delay(50);
 printf("B");delay(50);
 printf("E");delay(50);
 printf(" ");delay(50);
 printf("L");delay(50);
 printf("A");delay(50);
 printf("U");delay(50);
 printf("N");delay(50);
 printf("C");delay(50);
 printf("H");delay(50);
 printf("E");delay(50);
 printf("D");delay(50);
 printf("!");delay(50);
 printf("\n	I");delay(50);
 printf("T");delay(50);
 printf(" ");delay(50);
 printf("W");delay(50);
 printf("I");delay(50);
 printf("L");delay(50);
 printf("L");delay(50);
 printf(" ");delay(50);
 printf("L");delay(50);
 printf("A");delay(50);
 printf("U");delay(50);
 printf("N");delay(50);
 printf("C");delay(50);
 printf("H");delay(50);
 printf(" ");delay(50);
 printf("I");delay(50);
 printf("N");delay(50);
 printf(" ");delay(50);
 printf("F");delay(50);
 printf("E");delay(50);
 printf("W");delay(50);
 printf(" ");delay(50);
 printf("S");delay(50);
 printf("E");delay(50);
 printf("C");delay(50);
 printf("O");delay(50);
 printf("N");delay(50);
 printf("D");delay(50);
 printf("S");delay(50);
 printf(".");delay(2000);
 cleardevice();

 x1=getmaxx()/2-30;
 y1=getmaxy()/2-80;


 settextstyle(4,0,10);
 outtextxy(x1-40,y1,"10");
 PlaySound("10",NULL,SND_SYNC);
 delay(1000);cleardevice();
 outtextxy(x1,y1,"9");
 PlaySound("9",NULL,SND_SYNC);
 delay(1000);
 cleardevice();
 outtextxy(x1,y1,"8");
 PlaySound("8",NULL,SND_SYNC);
 delay(1000);cleardevice();
 outtextxy(x1,y1,"7"); 
  PlaySound("7",NULL,SND_SYNC);delay(1000);cleardevice();
 outtextxy(x1,y1,"6");
  PlaySound("6",NULL,SND_SYNC);delay(1000);cleardevice();
 outtextxy(x1,y1,"5");
  PlaySound("5",NULL,SND_SYNC);delay(1000);cleardevice();
  outtextxy(x1,y1,"4");
  PlaySound("4",NULL,SND_SYNC);delay(1000);cleardevice();
 outtextxy(x1,y1,"3");
  PlaySound("3",NULL,SND_SYNC);delay(1000);cleardevice();
 outtextxy(x1,y1,"2");
  PlaySound("2",NULL,SND_SYNC);delay(1000);cleardevice();
 outtextxy(x1,y1,"1");
  PlaySound("1",NULL,SND_SYNC);delay(1000);cleardevice();
 outtextxy(x1,y1,"0");
  PlaySound("0",NULL,SND_SYNC);delay(1000);cleardevice();
 PlaySound("rl1",NULL,SND_SYNC);
 rocket();

 getch();
 closegraph();
}
