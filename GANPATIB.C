#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main(){
int gd=DETECT, gm;
initgraph(&gd,&gm,"C:\\TurboC3\\bgi");



setcolor(15);
setlinestyle(0,0,3);
ellipse(300,100,300,100,40,50);

ellipse(290,110,310,60,40,40);

ellipse(310,95,90,270,10,20);

ellipse(320,205,180,90,50,60);

ellipse(298,145,20,180,18,10);

ellipse(300,215,180,70,20,20);

ellipse(305,175,190,270,40,20);

ellipse(300,95,90,270,10,20);

ellipse(335,140,120,180,70,30);

ellipse(298,65,290,90,5,10);

ellipse(270,115,100,240,15,30);

ellipse(275,60,240,15,15,30);



//ears
setcolor(WHITE);
ellipse(255,155,210,60,10,10);
ellipse(214,162,30,120,55,30);
ellipse(183,157,300,90,20,20);
ellipse(190,205,90,290,10,30);
line(247,180,193,235);


//legs
setfillstyle(1,YELLOW);
ellipse(190,270,90,270,30,30);
ellipse(190,330,350,90,50,30);
ellipse(190,270,350,90,50,30);
ellipse(340,300,290,90,60,40);
ellipse(290,277,180,20,50,40);
line(245,160,247,180);
line(270,205,280,215);
//floodfill(192,272,15);


//rectangle1
setfillstyle(1,15);
rectangle(180,337,400,360);
floodfill(183,340,WHITE);

//rectangle2
setfillstyle(1,RED);
rectangle(150,360,430,380);
floodfill(152,363,WHITE);
//rectangle3
setfillstyle(1,2);
rectangle(130,380,450,400);
floodfill(132,382,WHITE);

//decoration line
//line(130,380,130,250);


//circle
setfillstyle(SOLID_FILL,RED);
circle(290,200,156);
floodfill(290,200,15);


//eyes
ellipse(300,165,0,160,10,10);
circle(300,167,3);


//holes extras
circle(300,290,2);
circle(370,250,2);
ellipse(400,250,180,20,25,17);
ellipse(385,240,20,160,15,20);
ellipse(423,240,70,160,25,20);
line(430,220,420,245);
circle(410,195,3);
circle(390,195,3);
circle(400,200,3);
circle(400,210,3);


setcolor(YELLOW);
outtextxy(390,180,"OM");
setcolor(LIGHTRED);
settextstyle(3,HORIZ_DIR,4);
outtextxy(200,400,"LORD GANESHA");
setcolor(10);
settextstyle(7,0,2);
outtextxy(400,450,"-OMKAR");
//setfillstyle(SOLID_FILL,2);
rectangle(0,400,630,450);
//floodfill(12,400,WHITE);


getch();
closegraph();
return 0;
}