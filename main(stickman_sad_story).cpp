#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
	initwindow(700, 550, "Stickman Sad_story", 150, 50);
	
	int page=0;
	int sm = 4, sw = 4, n = 0, cs = 650, rf = 0;
	
	void stickman_open(int speed, int color);
	void stickman_close(int speed, int color);
	void stickwoman_open(int speed, int color);
	void stickwoman_close(int speed, int color);
	void road(int color);	
	void stickman_legbreak(int speed,int color);
	void stickman_rose(int speed, int color);
	void stickman_rose_break(int speed, int color);
	void stickman_chat(int speed, int box_color, int text_color);
	void stickwoman_chat(int speed, int box_color, int text_color);
	void cloud(int speed, int cloud_color);
	void cloud_2(int speed,int cloud_color);
	void rain(int speed, int drop_size);
	void rain_2(int speed,int drop_size);	
	void rose_fall(int speed,int height_speed);
	
	while (n < 420)
	{
		setactivepage(page);
		setvisualpage(1-page);
		cleardevice();
		
		//rest position
		
		if(n<20)
		{
			road(13);
			stickman_open(sm,14);
			stickwoman_open(280,15);
		}
		// stick_man walk 40
		if(n>=20&&n<=60)
		{
			road(13);
			if(n%2==0)
				stickman_open(sm,14);
			else
				stickman_close(sm,14); 
			stickwoman_open(280,15);	
			sm+=4;
		}

	//stick man propose 10
	
	    if(n>60&&n<=70)
	    {
	    	if(n==61)
	    	delay(200);
		    road(13);
			stickman_rose(sm,14);
			if(n==61)
			stickman_chat(sm,14,14);
			if(n==62)
			delay(2000);
	    	stickwoman_open(280,15);
	    	if(n==63)
	    	stickwoman_chat(280,15,15);
	    	if(n==64)
	    	delay(2000);
		}
		
	//stick woman walk 70
	
		if(n>70&&n<=170)
		{
		    road(13);
			stickman_rose(sm,14);
			if(n%2==0)
				stickwoman_open(280+sw,15);
			else
				stickwoman_close(280+sw,15);
			sw+=4;
		}
    //cloud move 50
    
		if(n>170&&n<220)
		{
		    road(13);
			stickman_rose(sm,14);
			cloud(cs,15);
			cs-=9;
			cloud_2(cs, 15);
			cs-=1;
		}
		
	//rose break and starting rain
	
		if(n>=220&&n<=280)
		{
		    road(13);
		    stickman_legbreak(sm,14);
			stickman_rose_break(sm,14);
			cloud(sm,15);
			rain(sm, 2);
			cloud_2(sm, 15);
			rain_2(sm,2);
		}
		
	// rose fall
	
		if(n>280&&n<=330)
		{
			road(13);
			cloud(sm,15);
			rain(sm, 2);
			cloud_2(sm, 15);
			rain_2(sm,2);
			rose_fall(200,rf);
			stickman_legbreak(sm,14);
			rf+=2;
		}
		
	// stickman walk
	
		if(n>330&&n<420)
		{
			road(13);
			cloud(sm,15);
			rain(sm,2);
			cloud_2(sm, 15);
			rain_2(sm,2);
			rose_fall(200,rf);
			if(n%2==0)
				stickman_open(sm,14);
			else
				stickman_close(sm,14);
			sm-=4;
		}
		page=1-page;
		delay(80);
		n++;
	}
		setactivepage(1);
		closegraph();
}

// Stickman open

void stickman_open(int speed, int color) 
{
	int s = speed;
	for (int i=0; i<3; i++)
	{
		setcolor(color);			
		circle(50+s, 320, 30+i);
		line(50+i+s, 350, 50+i+s, 400);		//leg part
		line(50+i+s, 400, 30+i+s, 450);		//leg part
		line(50+i+s, 400, 70+i+s, 450);		//leg part
		line(50+i+s, 360, 20+i+s, 400);		//left hand part
		line(50+s, 360, 80+s, 400+i);		//right hand part
	}

}

//stickman close legs with rose

void stickman_close(int speed,int color)
{	
	int s=speed;
	for(int i=0;i<3;i++)
	{
		setcolor(color);
		circle(50+s,320,30+i);
		line(50+i+s,350,50+i+s,400);	//leg part
		line(50-i+s,400,50-i+s,450);	//leg part
		line(50+i+s,400,50+i+s,450);	//leg part
		line(50+s+i,360,20+s+i,400);	//left hand part
		line(50+s,360+i,80+s,400+i);	//right hand part
	}
}

void stickwoman_open(int speed, int color)
{
	int s=speed;
	for (int i=0; i<3; i++)
	{
		setcolor(color);
		circle(50+s,320,30+i);			//head
		line(50+i+s,350,40+i+s,400);	//dress
		line(50+i+s,350,60+i+s,400);	//dress
		line(40+s,400-i,60+s,400-i);	//dress
		line(50+i+s,400,30+i+s,450);	//leg part
		line(50+i+s,400,70+i+s,450);	//leg part
		line(50+i+s,350,20+i+s,400);	//left hand part
		line(50+i+s,350,80+i+s,400);	//right hand part
	}
}

//stickman with rose

void stickman_rose(int speed,int color)
{
		int s=speed;
	
	for(int i=0;i<3;i++)
	{
		setcolor(color);
		circle(50+s,320,30+i);			//head
		line(50+i+s,350,50+i+s,400);	//leg part
		line(50+i+s,400,30+i+s,450);	//leg part
		line(50+i+s,400,70+i+s,450);	//leg part
		line(50+s+i,360,20+s+i,400);	//left hand part
		line(50+s,360+i,80+s,380+i);	//right hand part
		line(80+i+s,380,100+i+s,360);	//right hand part
	}
	
	// rose
	
	setcolor(LIGHTGREEN);
	for(int i=0;i<2;i++)
		line(100+i+s,360,100+i+s,345);
	setcolor(LIGHTRED);
	for(int i=10,h=0;i>=0;i--,h++)
	{
		line(90+i+s,345-h,110-i+s,345-h);
	}
}

//stickman leg break

void stickman_legbreak(int speed,int color)
{
	int s=speed;
	for(int i=0;i<3;i++)
	{
		setcolor(color);
		circle(50+s,340,30+i);
		line(50+i+s,370,50+i+s,420);

		line(50+i+s,420,60+i+s,460);		//legs
		line(60+i+s,460,40+i+s,460);
		line(50+i+s,420,70+i+s,470);
		line(70+i+s,470,40+i+s,470);

		line(50+s+i,380,20+s+i,420);	//left hand

		line(50+s,380+i,80+s,400+i);	//right hand
		line(80+i+s,400,100+i+s,380);
	}
}

// stickman rose break

void stickman_rose_break(int speed,int color)
{
	int s=speed;
	for(int i=0;i<3;i++)
	{
		setcolor(color);
		circle(50+s,340,30+i);
		line(50+i+s,370,50+i+s,420);

		line(50+i+s,420,60+i+s,460);		//legs
		line(60+i+s,460,40+i+s,460);
		line(50+i+s,420,70+i+s,470);
		line(70+i+s,470,40+i+s,470);

		line(50+s+i,380,20+s+i,420);	//left hand

		line(50+s,380+i,80+s,400+i);	//right hand
		line(80+i+s,400,100+i+s,380);
	}
	// rose

	setcolor(LIGHTGREEN);
	for(int i=0;i<2;i++)
    {
		line(100+i+s,380,100+i+s,370);
		line(100+s,370+i,110+s,370+i);
	}
		setcolor(LIGHTRED);
	for(int i=1,h=0;i<=10;i++,h++)
	{
		line(110+s+i,370-i,110+i+s,370+i);
	}
}

// stickwoman close legs 

void stickwoman_close(int speed,int color)
{
	int s=speed;
	for(int i=0;i<3;i++)
	{
		setcolor(color);
		circle(50+s,320,30+i);
		line(50+i+s,350,40+i+s,400);	//dress
		line(50+i+s,350,60+i+s,400);
		line(40+s,400-i,60+s,400-i);
		line(50-i+s,400,50-i+s,450);	//legs
		line(50+i+s,400,50+i+s,450);
		line(50+s+i,350,20+s+i,400);	//left hand
		line(50+s+i,350,80+s+i,400);	//right hand
	}
}

// stickman chat

void stickman_chat(int speed,int box_color,int text_color)
{
	int s=speed;
	setcolor(box_color);
	int points[16]={50+s,280,40+s,270,-40+s,270,-40+s,200,70+s,200,70+s,270,60+s,270,50+s,280};
	drawpoly(8,points);
  	setcolor(text_color);
    settextstyle(EUROPEAN_FONT,HORIZ_DIR,1);
	outtextxy(-20+s,210,"I Love");
	outtextxy(-5+s,240,"You");
}

void stickwoman_chat(int speed,int box_color,int text_color)
{
	int s=speed;
	setcolor(box_color);
	int points[16]={50+s,280,40+s,270,30+s,270,30+s,200,140+s+50,200,140+s+50,270,60+s,270,50+s,280};
	drawpoly(8,points);
    setcolor(text_color);
    settextstyle(EUROPEAN_FONT,HORIZ_DIR,1);
	outtextxy(45+s,210,"I am Sorry!");
}
// road

void road(int color)
{
	setcolor(color);
	for(int i=0;i<3;i++)
	{
		line(0,450+i,700,450+i);
	}
	setcolor(WHITE);
}

// cloud
void cloud(int speed,int cloud_color)
{
	setcolor(LIGHTGRAY);
 	int a=speed;
    int i=2;
	
	arc(50+a,50+2,20,160,25+i);		//up
	arc(100-2+a,50+2,20,160,25+i);
	
	arc(50+a,80-4,180+20,360-20,25+i);		//down
	arc(100-2+a,80-4,180+20,360-20,25+i);
	
	arc(25+5+a,65,90+10,270-10,20+i);        //left
	 
	arc(125-5+a,65,270,90,20+i);         // right          
		
	setfillstyle(1,cloud_color);
	floodfill(50+a,75,LIGHTGRAY);
}

//cloud 2

void cloud_2(int speed,int cloud_color)
{
	setcolor(LIGHTGRAY);
 	int a=speed;
    int i=2;
	
	arc(195+a,50+2,20,160,25+i);	//up
	arc(246-2+a,50+2,20,160,25+i);
	
	arc(195+a,77-4,180+20,360-20,25+i);	//down
	arc(246-2+a,77-4,180+20,360-20,25+i);
	
	arc(169+5+a,64,90+10,270-10,20+i);         //left
	 
	arc(270-5+a,64,270,90,20+i);         // right         
		
	setfillstyle(1,cloud_color);
	floodfill(200+a,50,LIGHTGRAY);
}

// rain 

void rain(int speed,int drop_size)
{
   setcolor(LIGHTCYAN);

	for(int i=0;i<30;i++)
	{
		settextstyle(0,HORIZ_DIR,drop_size);
		outtextxy(speed+rand()%150,100+rand()%345,"| ");
	}
	setcolor(WHITE);
}

//rain 2

void rain_2(int speed,int drop_size)
{
   setcolor(LIGHTCYAN);

	for(int i=0;i<30;i++)
	{
		settextstyle(0,HORIZ_DIR,drop_size);
		outtextxy(speed+rand()%280,100+rand()%345,"| ");
	}
	setcolor(WHITE);
}

void rose_fall(int speed,int height_speed)
{
	int s=speed;
	int hf=height_speed;
	setcolor(LIGHTGREEN);
	// rose
	for(int i=0;i<2;i++)
		line(100+i+s,380+hf,120+i+s,380+hf);
	setcolor(LIGHTRED);
	for(int i=1;i<=10;i++)
	{
		line(120+s+i,380-i+hf,120+i+s,380+i+hf);
	}
}