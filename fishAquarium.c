#include<graphics.h>
int main()

{
    int i,j,n=4;
    j=0;
    int gd=DETECT,gm;
    initgraph(&gd,&gm,NULL);
    setbkcolor(BLUE);
    while(j<n){
        for(i=0;i<750;i+=5)
        {
            cleardevice();
            //expanding bubbles
            circle(350,400-i,i*0.05);
            circle(360-0.05*i,300-i,i*0.05);
            circle(345,500-i,i*0.02);
            circle(360+0.02*i,390-i,i*0.02);
            circle(330,765-i,10);
            circle(330+0.02*i,440-i,i*0.05);
            circle(360+0.02*i,100-i,i*0.1);
            circle(320-0.2*i,198-i,i*0.1);
            circle(310,500-i,i*0.02);
            circle(310,730-i,i*0.02);
            circle(320,670-i,i*0.02);
            circle(310-0.03*i,550-i,i*0.02);
            circle(310,590-i,i*0.02);
            circle(310,780-i,i*0.02);
            circle(310,690-i,i*0.02);
            circle(350+0.02*i,70-i,i*0.1);
            circle(340-0.02*i,150-i,i*0.1);

            circle(320-0.2*i,198-i,i*0.1);
            circle(310,800-i,i*0.01);
            circle(310,900-i,i*0.01);
            circle(320,870-i,i*0.01);
            circle(310-0.03*i,950-i,i*0.01);
            circle(310,790-i,i*0.01);
            circle(310,800-i,i*0.01);
            circle(310,900-i,i*0.01);
            circle(350,700-i,i*0.01);
            circle(340,650-i,i*0.01);


            //plants
            ellipse(300,400,-120,40,15,12);
            ellipse(330,400,150,280,15,12);


            ellipse(500,400,-120,40,15,12);
            ellipse(530,400,150,280,15,12);


            ellipse(400,400,-120,40,15,12);
            ellipse(430,400,150,280,15,12);

            ellipse(100,420,-120,40,15,12);
            ellipse(130,420,150,280,15,12);


            ellipse(200,420,-120,40,15,12);
            ellipse(230,420,150,280,15,12);


            ellipse(100,330,-120,40,15,12);
            ellipse(130,330,150,280,15,12);


            ellipse(500,300,-120,40,15,12);
            ellipse(530,300,150,280,15,12);


            ellipse(330,400,-120,40,15,12);
            ellipse(360,400,150,280,15,12);

            ellipse(430,420,-120,40,15,12);
            ellipse(460,420,150,280,15,12);


            ellipse(530,380,-120,40,15,12);
            ellipse(560,380,150,280,15,12);


            ellipse(60,420,0,360,30,10*2);
            ellipse(180,450,0,360,30,10*2);
            ellipse(250,440,0,360,38,10*2);
            ellipse(490,450,0,360,30,10*2);
            ellipse(400,440,0,360,30,10*2);


            /*............bigfish..................*/
            ellipse(i+80,300,0,360,100,50);
            line(i+150,310,178+i,310);
            //eye
            circle(i+150,290,3);
            //tail
            pieslice(i-20,300, 135, 225, 50);
            if(i%2==0){
    
                pieslice(80+i, 300, 205, 250, 45);
                delay(20);
                }
            else
            {
                pieslice(80+i,300, 125, 170, 45);
                delay(20);
            }
            /*.............middle fish..............*/
            ellipse(520-i,200,0,360,90,30);

            //mouth
            line(435-i,210,460-i,210);
            //eye
            circle(470-i,193,3);
            //tail
            pieslice(615-i,200,-25,30,50);
            //fins
            if(i%2==0)
            {

                pieslice(500-i, 200, -10,20, 40);
                delay(20);
            }

            else
            {
                pieslice(500-i,200, 0, 30, 40);
                delay(20);
            }
            /*------------------small fish---------------------*/
            
            //body
            ellipse(300-i,100,0,360,20,10);
            //tail
            line(283-i,105,293-i,105);

            //eye
            circle(290-i,95,3);
            //tail
            pieslice(320-i,100,-5,15,30);

            //fins
            if(i%2==0)
            {

                pieslice(300-i, 100, -5,60, 5);
                delay(20);
            }

            else
            {
                pieslice(300-i,100, 0, 30, 5);
                delay(20);
            }
            
            delay(50);    
        }
    j++;
    }
}