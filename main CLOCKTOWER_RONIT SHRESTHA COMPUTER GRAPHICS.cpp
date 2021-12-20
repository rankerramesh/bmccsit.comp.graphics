#include<iostream>
#include<graphics.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<time.h>
#define PI 3.1415
using namespace std;
int main()
{
	int i=0;
    initwindow(500,500,"ANALOG CLOCK");
    int page=0;
    while(i<1200)
    {
         setactivepage(page);//setactivepage makes page the active graphics page.
         setvisualpage(1-page);// it sets the visual graphics page number.
         cleardevice();
         setcolor(WHITE);
         //clock tower
         circle(250,250,150);
         circle(250,250,5);
         rectangle(90,100,410,700);
         setfillstyle(SOLID_FILL,BROWN);
         floodfill(101,401,WHITE);
         //paths
         line(0,700,2000,700);
         //buildings
         rectangle(600,250,850,700);
          setfillstyle(SOLID_FILL,BROWN);
         floodfill(601,251,WHITE);
         //background color
         setfillstyle(SOLID_FILL,BLUE);
         floodfill(500,500,WHITE);
         //paths color
         setfillstyle(SOLID_FILL,LIGHTGRAY);
         floodfill(750,750,WHITE);
         //left windows
         rectangle(620,270,670,320);
          setfillstyle(SOLID_FILL,YELLOW);
         floodfill(621,271,WHITE);
         rectangle(620,340,670,390);
          setfillstyle(SOLID_FILL,YELLOW);
         floodfill(621,341,WHITE);
         rectangle(620,410,670,460);
          setfillstyle(SOLID_FILL,YELLOW);
         floodfill(621,411,WHITE);
         rectangle(620,480,670,530);
          setfillstyle(SOLID_FILL,YELLOW);
         floodfill(621,481,WHITE);
         rectangle(620,550,670,600);
          setfillstyle(SOLID_FILL,YELLOW);
         floodfill(621,551,WHITE);
         rectangle(620,630,670,680);
          setfillstyle(SOLID_FILL,YELLOW);
         floodfill(621,631,WHITE);
         //right windows
         rectangle(780,270,830,320);
          setfillstyle(SOLID_FILL,YELLOW);
         floodfill(781,271,WHITE);
         rectangle(780,340,830,390);
          setfillstyle(SOLID_FILL,YELLOW);
         floodfill(781,341,WHITE);
         rectangle(780,410,830,460);
          setfillstyle(SOLID_FILL,YELLOW);
         floodfill(781,411,WHITE);
         rectangle(780,480,830,530);
          setfillstyle(SOLID_FILL,YELLOW);
         floodfill(781,481,WHITE);
         rectangle(780,550,830,600);
          setfillstyle(SOLID_FILL,YELLOW);
         floodfill(781,551,WHITE);
         rectangle(780,630,830,680);
          setfillstyle(SOLID_FILL,YELLOW);
         floodfill(781,631,WHITE);
         //steps line for each windows
         line(600,400,850,400);
         line(600,540,850,540);
         //sun
         circle(1400,100,70);
         setfillstyle(SOLID_FILL, YELLOW);
         floodfill(1400,100,WHITE);
          //stickman for frquently walking on paths
          circle(910+i,600,15);//heads
         line(910+i,615,910+i,650);//body
         if(i%2==0)
		 {
         line(900+i,700,910+i,650);//left legs
         line(920+i,700,910+i,650);//right legs	
		 }
		 else
		 {
		 line(910+i,700,910+i,650);	
		 }
         line(910+i,615,900+i,650);//left arm
         line(910+i,615,925+i,650);//rightarm
         //design for the clock input digits numbers 
         outtextxy(250+140*sin(1*PI/6),250-140*cos(1*PI/6),"1");
         outtextxy(250+140*sin(2*PI/6),250-140*cos(2*PI/6),"2");
         outtextxy(250+140*sin(3*PI/6),250-140*cos(3*PI/6),"3");
         outtextxy(250+140*sin(4*PI/6)-7,250-140*cos(4*PI/6),"4");
         outtextxy(250+135*sin(5*PI/6),250-135*cos(5*PI/6),"5");
         outtextxy(250+135*sin(6*PI/6),250-135*cos(6*PI/6),"6");
         outtextxy(250+135*sin(7*PI/6),250-135*cos(7*PI/6),"7");
         outtextxy(250+135*sin(8*PI/6),250-135*cos(8*PI/6),"8");
         outtextxy(250+135*sin(9*PI/6),250-135*cos(9*PI/6),"9");
         outtextxy(250+135*sin(10*PI/6),250-135*cos(10*PI/6),"10");
         outtextxy(250+140*sin(11*PI/6),250-140*cos(11*PI/6),"11");
         outtextxy(250+140*sin(12*PI/6),250-140*cos(12*PI/6),"12");
         //for local time peroid(real time)
         time_t now = time(0);
         tm *ltm = localtime(&now);
         system("cls");
         cout<<ltm->tm_hour<<" "<<ltm->tm_min;
         //for walking according to time peroid that stick man will use umbrella according to the function given below:
         if(ltm->tm_hour>11)
         {
         	//circle(910+i,600,15);
         	line(927+i,580,927+i,650);
         	pieslice(927+i,580,0,180,40);
		 }
         else
         {
          line(925+i,650,925+i,680);
         line(921+i,650,930+i,650);
         line(921+i,650,925+i,680);
         line(930+i,650,925+i,680);	
		 }
    // Hour Hand
         setcolor(BROWN);
         line(250,250,250+100*sin(ltm->tm_hour * PI/6),250-100*cos(ltm->tm_hour * PI/6));
    // Minute Hand
         setcolor(GREEN);
         line(250,250,250+130*sin(ltm->tm_min * PI/30),250-130*cos(ltm->tm_min * PI/30));
    // Secod Hand
         setcolor(YELLOW);
         line(250,250,250+140*sin(ltm->tm_sec * PI/30),250-140*cos(ltm->tm_sec * PI/30));
         //pressing enter will terminate the ongoing programming:
         if(GetAsyncKeyState(VK_RETURN))
              break;
         delay(8);
         
         page = 1-page;//active page and visual page equality:
         i++;//for while loop:
        
    }
   
	closegraph();
	return 0;
}
