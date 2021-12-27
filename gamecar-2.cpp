#include<graphics.h>
#include<conio.h>
#include<windows.h>
void gameover(int);
void car()
{
	int j=0;
	int i=0;
	int k=0;
	while(1)
	{
			setbkcolor(7);
			cleardevice();
		
	
			//CAR
	
		setcolor(BLACK);
		
		//player 1
		rectangle(420+j,600,480+j,690);
		circle(420+j,690,10);
		circle(420+j,600,10);
		circle(480+j,690,10);
		circle(480+j,600,10);
		line(440+j,650,445+j,580);
		line(460+j,650,455+j,580);
		
		//player2
		
		rectangle(1020+k,600,1080+k,690);
		circle(1020+k,690,10);
		circle(1020+k,600,10);
		circle(1080+k,690,10);
		circle(1080+k,600,10);
		line(1040+k,650,1045+k,580);
		line(1060+k,650,1055+k,580);
		
		
		settextstyle(1,0,4);
		
		
		outtextxy(400+j,650,(char*)"CANON");
	
		
		
		delay(1);
	i=i+8;	

	if(kbhit())
			{
				
				int ch=getch();
				if(ch==75)//left
				{
					
					j=j-300;
					if(j<300)
					j=0;
				
					
				}
				else if (ch==77)//right
				{
					
					j=j+300;
					if(j>300)
					j=300;					
				}
				if(ch==75)//left
				{
					
					k=k-300;
					if(k<300)
					k=0;
				
					
				}
				else if (ch==77)//right
				{
					
					k=k+300;
					if(k>300)
					k=300;					
				}
		
	
}
	//ENVIRONMENT
		line(300,700,300,0);
	line(600,700,600,0);
	line(900,700,900,0);
	line(1200,700,1200,0);
	
	//BLOCKS
	setcolor(BLUE);
  setfillstyle(SOLID_FILL,BLUE);
  settextstyle(1,0,4);
	outtextxy(600,20,(char*)"Score:");
	char str[3];
	sprintf(str,"%d",i/10);
	outtextxy(740,20,str);
	if(i>3400)
	{
		gameover(1);
	}
		//player 1
  		rectangle(710,400+i,790,300+i);
		floodfill(751,350+i,BLUE);
		rectangle(410,0+i,490,100+i);
		floodfill(451,50+i,BLUE);
		rectangle(710,-300+i,790,-200+i);
		floodfill(751,-250+i,BLUE);
		rectangle(410,-600+i,490,-500+i);
		floodfill(451,-550+i,BLUE);
		rectangle(710,-900+i,790,-800+i);
		floodfill(751,-850+i,BLUE);
		rectangle(410,-1200+i,490,-1100+i);
		floodfill(451,-1150+i,BLUE);
		rectangle(710,-1450+i,790,-1350+i);
		floodfill(751,-1400+i,BLUE);
		rectangle(410,-1700+i,490,-1600+i);
		floodfill(451,-1650+i,BLUE);
		rectangle(710,-1950+i,790,-1850+i);
		floodfill(751,-1900+i,BLUE);
		rectangle(410,-2200+i,490,-2100+i);
		floodfill(451,-2150+i,BLUE);
		rectangle(710,-2450+i,790,-2350+i);
		floodfill(751,-2400+i,BLUE);
		rectangle(410,-2700+i,490,-2600+i);
		floodfill(451,-2650+i,BLUE);
	if(getpixel(420+j,600)==1||getpixel(480+j,690)==1||getpixel(420+j,690)==1||getpixel(480+j,600)==1)
					{
					gameover(0);
				break;
				}
					//player 2
  		rectangle(1310,400+i,1390,300+i);
		floodfill(1351,350+i,BLUE);
		rectangle(1010,0+i,1090,100+i);
		floodfill(1051,50+i,BLUE);
		rectangle(1310,-300+i,1390,-200+i);
		floodfill(1351,-250+i,BLUE);
		rectangle(1010,-600+i,1090,-500+i);
		floodfill(1051,-550+i,BLUE);
		rectangle(1310,-900+i,1390,-800+i);
		floodfill(1351,-850+i,BLUE);
		rectangle(1010,-1200+i,1090,-1100+i);
		floodfill(1051,-1150+i,BLUE);
		rectangle(1310,-1450+i,1390,-1350+i);
		floodfill(1351,-1400+i,BLUE);
		rectangle(1010,-1700+i,1090,-1600+i);
		floodfill(1051,-1650+i,BLUE);
		rectangle(1310,-1950+i,1390,-1850+i);
		floodfill(1351,-1900+i,BLUE);
		rectangle(1010,-2200+i,1090,-2100+i);
		floodfill(1051,-2150+i,BLUE);
		rectangle(1310,-2450+i,1390,-2350+i);
		floodfill(1351,-2400+i,BLUE);
		rectangle(1010,-2700+i,1090,-2600+i);
		floodfill(1051,-2650+i,BLUE);
	if(getpixel(1020+k,600)==1||getpixel(1080+k,690)==1||getpixel(1020+k,690)==1||getpixel(1080+k,600)==1)
					{
					gameover(0);
				break;
				}
				
				
}
};
void gameover(int i)
{
while(1)
{
	
	setcolor(RED);
	settextstyle(1,0,7);
	if(i==1)
	{
	outtextxy(330,300,(char*)"HIGHSCORE ");
	}
	else
	{	
	outtextxy(400,350,(char*)"CRASHED ");
}
	settextstyle(1,0,4);
	outtextxy(300,400,(char*)"WANNA DRIVE AGAIN?");
	outtextxy(300,450,(char*)" Press UP arrow to DRIVE again ");
	outtextxy(300,500,(char*)" Press DOWN arrow to exit ");
	if(kbhit())
			{
				cleardevice();
				int ch=getch();
				if(ch==72)//up
				{
					car();
					//ShellExecute(NULL, "open", "gamecar.exe", NULL, NULL, SW_SHOWDEFAULT);
			}
				else if(ch==80)//down
				{
						ShellExecute(NULL, "open", "car.exe", NULL, NULL, SW_SHOWDEFAULT);
				}
		}
	}
	
};

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,(char*)"");
	initwindow(1500,700);
	car();
		getch();
	closegraph();

	return 0;
}
