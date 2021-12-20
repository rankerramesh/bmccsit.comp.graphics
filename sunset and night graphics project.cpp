#include<conio.h>

#include<graphics.h>

#include<math.h>

int main()

{

void sun();
void sun1();
void sun2();
void moon();
void moon1();
void mountain();
void mountain1();
void fractal(int , double , int , int );
char letters();
char letters1();
char letters2();

int gd,gm;

float a;

gd=DETECT;

initgraph(&gd,&gm,"C:\\TC\\BGI");
setbkcolor(BLACK);
letters();
setbkcolor(11);
sun();
setbkcolor(3);
sun1();
setbkcolor(8);
sun2();
setbkcolor(BLACK);
letters1();
moon();
moon1();
setbkcolor(WHITE);
letters2();
getch();
closegraph();
}

char letters()
{
  for(int i=0;i<50;i++){

    settextstyle(8,HORIZ_DIR,4);
    outtextxy(80,150,"HELLO EVERYONE :)");
    setcolor(9);
    delay(10);
    cleardevice();
    }

 for(int j=0;j<30;j++){
    settextstyle(8,HORIZ_DIR,4);
    outtextxy(40,150,"THE OUTPUT OF MY PROJECT IS: ");
    setcolor(9);
    delay(30);
    cleardevice();
    }
}
char letters1()
{
  for(int i=0;i<50;i++){

    settextstyle(8,HORIZ_DIR,4);
    outtextxy(80,150,"AFTER SOMETIME: [^o^] ");
    setcolor(9);
    delay(30);
    cleardevice();
    }
}
 char letters2()
{
  for(int i=0;i<50;i++){

    settextstyle(8,HORIZ_DIR,4);
    outtextxy(80,150," ^o^  THANK YOU ^o^");
    setcolor(9);
    delay(30);
    cleardevice();
    }
}
void mountain()
{
setcolor(WHITE);
line(0,300,200,147);
line(200,147,400,300);
line(0,300,400,300);
setfillstyle(SOLID_FILL,GREEN);
floodfill(100,290,WHITE);

line(350,300,500,150);
line(500,150,640,300);
line(350,300,640,300);
floodfill(400,290,WHITE);

}
void mountain1()
{
setcolor(WHITE);
line(0,300,200,147);
line(200,147,400,300);
line(0,300,400,300);
setfillstyle(SOLID_FILL,10);
floodfill(100,290,WHITE);

line(350,300,500,150);
line(500,150,640,300);
line(350,300,640,300);
floodfill(400,290,WHITE);

}

double angle=30*(3.14/180);

void fractal(int l, double a, int x, int y)
{
	if(l!=0)
	{
		double a1=a+angle;
				double a2 =a-angle;
				int x1=x+l*cos(a1);
					int y1=y-l*sin(a1);
					line(x,y,x1,y1);
					fractal(l/2,a1,x1,y1);
					x1=x+l*cos(a2);
						y1=y+l*sin(a2);
						line(x,y,x1,y1);
						fractal(l/2,a2,x1,y1);
						a1=a1+angle;
							a2=a2-angle;
							x1=x+l*cos(a1);
							y1=y-l*sin(a1);
							line(x,y,x1,y1);
								fractal(l/2,a1,x1,y1);
									x1=x+l*cos(a2);
						y1=y-l*sin(a2);
							line(x,y,x1,y1);
								fractal(l/2,a2,x1,y1);
								
	}

}
	
void sun()

{
int i,j,k,m;
for(i=190,k=180;i<=220,k<=220;i=i+5,k=k+10)
{
	setcolor(YELLOW);
for(j=30;j>0;j--)
//x axis y axis radius
circle(370,i,j);
mountain1();

setcolor(14);

arc(k,100,20,180,6);

arc(k-10,100,20,180,6);

m=k+150;

setcolor(9);

arc(m+200,50,20,180,6);

arc(m+190,50,20,180,6);

arc(m+150,150,30,140,6);

arc(m+140,150,30,140,6);

setcolor(11);

arc(m+80,90,20,180,6);

arc(m+70,90,20,180,6);

setcolor(13);
arc(m+310,90,20,180,6);

arc(m+300,90,20,180,6);

setcolor(14);

arc(m-210,200,20,180,6);

arc(m-200,200,20,180,6);

	setcolor(9);
fractal(70, 50*(3.50/130), 100, 380);
line(100,380,100,500);

setcolor(12);
fractal(70, 50*(3.50/130), 300, 380);
line(300,380,300,500);

setcolor(9);
fractal(70, 45*(3.14/180), 500, 380);
line(500,380,500,500);

delay(1);
cleardevice();

}
}
	void sun1()

{
	
int i,j,k,m;

for(i=221,k=221;i<=236,k<=251;i=i+5,k=k+10)
{
	setcolor(12);
for(j=30;j>0;j--)
//x axis y axis radius
circle(370,i,j);

mountain();

setcolor(6);

arc(k,100,20,180,6);

arc(k-10,100,20,180,6);

m=k+150;

setcolor(1);

arc(m+200,50,20,180,6);

arc(m+190,50,20,180,6);

arc(m+150,150,30,140,6);

arc(m+140,150,30,140,6);

setcolor(3);

arc(m+80,90,20,180,6);

arc(m+70,90,20,180,6);

setcolor(5);
arc(m+310,90,20,180,6);

arc(m+300,90,20,180,6);

setcolor(6);

arc(m-210,200,20,180,6);

arc(m-200,200,20,180,6);

setcolor(9);
fractal(70, 50*(3.50/130), 100, 380);
line(100,380,100,500);

setcolor(12);
fractal(70, 50*(3.50/130), 300, 380);
line(300,380,300,500);

setcolor(9);
fractal(70, 45*(3.14/180), 500, 380);
line(500,380,500,500);

delay(1);
cleardevice();
}
}
	void sun2()

{

int i,j,k,m;


for(i=237,k=292;i<=252,k>=252;i=i+5,k=k-10)
{

	setcolor(RED);

for(j=30;j>0;j--)
//x axis y axis radius
circle(370,i,j);

mountain();

setcolor(6);

arc(k,100,20,180,6);

arc(k-10,100,20,180,6);

m=k+150;

setcolor(1);

arc(m+200,50,20,180,6);

arc(m+190,50,20,180,6);

arc(m+150,150,30,140,6);

arc(m+140,150,30,140,6);

setcolor(3);

arc(m+80,90,20,180,6);

arc(m+70,90,20,180,6);

setcolor(5);
arc(m+310,90,20,180,6);

arc(m+300,90,20,180,6);

setcolor(6);

arc(m-210,200,20,180,6);

arc(m-200,200,20,180,6);

setcolor(1);
fractal(70, 50*(3.50/130), 100, 380);
line(100,380,100,500);

setcolor(4);
fractal(80, 50*(3.50/130), 300, 380);
line(300,380,300,500);

setcolor(1);
fractal(70, 45*(3.14/180), 500, 380);
line(500,380,500,500);

delay(1);
cleardevice();

}
}
void moon()

{
		int z,p,q;

	int ii,jj,kk,mm;
for(ii=260;ii>240;ii=ii-4)
{

setcolor(7);

for(jj=30;jj>0;jj--)
{
circle(370,ii,jj);
}
for(z=0;z<20;z++)

{

p=rand()%700;
//p=rand()%1000; yo garna pani milxa yesley chahi whole screen ma star dekhaudaina

q=rand()%190;

putpixel(p,q,15);
}
setcolor(GREEN);

mountain();

setcolor(6);
fractal(70, 50*(3.50/130), 100, 380);
line(100,380,100,500);

setcolor(6);
fractal(80, 50*(3.50/130), 300, 380);
line(300,380,300,500);

setcolor(6);
fractal(70, 45*(3.14/180), 500, 380);
line(500,380,500,500);

delay(1);
cleardevice();	

}

}
void moon1()

{
		int z,p,q;

	int ii,jj,kk,mm;
for(ii=240;ii>210;ii=ii-5)
{
setcolor(WHITE);

for(jj=30;jj>0;jj--)
{
circle(370,ii,jj);
}
for(z=0;z<20;z++)

{

p=rand()%700;
//p=rand()%1000; yo garna pani milxa yesley chahi whole screen ma star dekhaudaina

q=rand()%190;

putpixel(p,q,15);
}

mountain();

setcolor(6);
fractal(70, 50*(3.50/130), 100, 380);
line(100,380,100,500);

setcolor(6);
fractal(80, 50*(3.50/130), 300, 380);
line(300,380,300,500);

setcolor(6);
fractal(70, 45*(3.14/180), 500, 380);
line(500,380,500,500);

delay(1);
cleardevice();	

}

}




