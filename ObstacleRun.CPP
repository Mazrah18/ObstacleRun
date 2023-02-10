#include<conio.h>
#include<stdio.h>
#include<iostream.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
static int xchar=60,ychar=479-60,c=0;
static int xcloud=600,ycloud=100;
static int xdash=0,ydash=479-50;
static int xblock=700,yblock=479-90;
static int xblock2=730,yblock2=479-120;
static int xblock3=760,yblock3=479-150;
static int xblock4=790;
int count=0;
void setclouds()
{
	graphdefaults();
	fillellipse(xcloud,ycloud,30,20);
	fillellipse(xcloud+20,ycloud,30,20);
	fillellipse(xcloud+30,ycloud-20,30,20);
	//fillellipse(xcloud+70,ycloud+900,30,20);
	fillellipse(xcloud+50,ycloud-10,30,20);
	fillellipse(xcloud+230,ycloud+50,30,20);
	fillellipse(xcloud+260,ycloud+20,30,20);
	fillellipse(xcloud+290,ycloud+40,30,20);
	fillellipse(xcloud+270,ycloud+50,30,20);
	/*fillellipse(580,100,30,20);
	fillellipse(560,80,30,20);
	fillellipse(550,110,30,20);
	fillellipse(530,90,30,20);*/
	line(0,getmaxy()-60,1000,getmaxy()-60);
	setfillstyle(1,CYAN);
	floodfill(0,0,15);
}
void re_setclouds()
{
	setcolor(CYAN);
	setfillstyle(SOLID_FILL,CYAN);
	fillellipse(xcloud,ycloud,30,20);
	fillellipse(xcloud+20,ycloud,30,20);
	fillellipse(xcloud+30,ycloud-20,30,20);
	//fillellipse(xcloud+70,ycloud+900,30,20);
	fillellipse(xcloud+50,ycloud-10,30,20);
	fillellipse(xcloud+50,ycloud-10,30,20);
	fillellipse(xcloud+230,ycloud+50,30,20);
	fillellipse(xcloud+260,ycloud+20,30,20);
	fillellipse(xcloud+290,ycloud+40,30,20);
	fillellipse(xcloud+270,ycloud+50,30,20);
}
void re_char()
{
		graphdefaults();
		setcolor(CYAN);
		circle(xchar,ychar-80,12);//head
		line(xchar,ychar-68,xchar,ychar-30);//body
		line(xchar,ychar,xchar,ychar-15);
		setcolor(BLUE);
		rectangle(xchar-2,ychar-30,xchar+2,ychar-4);
		rectangle(xchar,ychar-45,xchar+10,ychar-50);
		setfillstyle(1,BLUE);
		floodfill(xchar-1,ychar-29,BLUE);
		floodfill(xchar+1,ychar-46,BLUE);
		setfillstyle(1,CYAN);
		floodfill(xchar-1,ychar-29,CYAN);
		floodfill(xchar+1,ychar-46,CYAN);
}
void setground()
{
	setfillstyle(1,BROWN);
	floodfill(0,getmaxy(),15);
}
void dash()
{
	graphdefaults();
	setcolor(0);
	int xdashcopy=xdash;
	for(int i=0;i<500;i++)
	{
		line(xdash,ydash,xdash+10,ydash);
		line(xdash,ydash+40,xdash+10,ydash+40);
		line(xdash,ydash+20,xdash+10,ydash+20);
		xdash+=20;
	}
	xdash=xdashcopy;
}
void re_dash()
{
	graphdefaults();
	setcolor(BROWN);
	int xdashcopy=xdash;
	for(int i=0;i<500;i++)
	{
		line(xdash,ydash,xdash+10,ydash);
		line(xdash,ydash+40,xdash+10,ydash+40);
		line(xdash,ydash+20,xdash+10,ydash+20);
		xdash+=20;
	}
	xdash=xdashcopy;
}
void block()
{
	graphdefaults();
	setcolor(BROWN);
	rectangle(xblock,yblock,xblock+150,yblock+30);
	setfillstyle(1,BROWN);
	floodfill(xblock+1,yblock+1,BROWN);
	floodfill(xblock+149,yblock+29,BROWN);
}
void re_block()
{
	graphdefaults();
	setcolor(CYAN);
	rectangle(xblock,yblock,xblock+150,yblock+30);
	setfillstyle(1,CYAN);
	floodfill(xblock+1,yblock+1,CYAN);
	floodfill(xblock+149,yblock+29,CYAN);
}
void block2()
{
	graphdefaults();
	setcolor(BROWN);
	rectangle(xblock2,yblock2,xblock2+90,yblock2+30);
	setfillstyle(1,BROWN);
	floodfill(xblock2+1,yblock2+1,BROWN);
	floodfill(xblock2+89,yblock2+29,BROWN);
}
void re_block2()
{
	graphdefaults();
	setcolor(CYAN);
	rectangle(xblock2,yblock2,xblock2+90,yblock2+30);
	setfillstyle(1,CYAN);
	floodfill(xblock2+1,yblock2+1,CYAN);
	floodfill(xblock2+89,yblock2+29,CYAN);
}
void block3()
{
	graphdefaults();
	setcolor(BROWN);
	rectangle(xblock3,yblock3,xblock3+30,yblock3+30);
	setfillstyle(1,BROWN);
	floodfill(xblock3+1,yblock3+1,BROWN);
	floodfill(xblock3+29,yblock3+29,BROWN);
}
void re_block3()
{
	graphdefaults();
	setcolor(CYAN);
	rectangle(xblock3,yblock3,xblock3+30,yblock3+30);
	setfillstyle(1,CYAN);
	floodfill(xblock3+1,yblock3+1,CYAN);
	floodfill(xblock3+29,yblock3+29,CYAN);
}
void stationary()
{
	graphdefaults();
	setcolor(0);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-60,xchar+10,ychar-40);//right hand
	line(xchar,ychar-60,xchar-10,ychar-40);//left hand
	line(xchar,ychar-30,xchar+10,ychar);//right leg
	line(xchar,ychar-30,xchar-10,ychar);//left leg
}
void re_stationary()
{
	graphdefaults();
	setcolor(CYAN);
	//circle(xchar,ychar-80,12);//head
	//line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-60,xchar+10,ychar-40);//right hand
	line(xchar,ychar-60,xchar-10,ychar-40);//left hand
	line(xchar,ychar-30,xchar+10,ychar);//right leg
	line(xchar,ychar-30,xchar-10,ychar);//left leg
}
void move()
{
	graphdefaults();
	setcolor(0);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	//movement of legs
	do{
	line(xchar,ychar-30,xchar,ychar);
	line(xchar,ychar-30,xchar+3,ychar-15);
	line(xchar+3,ychar-15,xchar,ychar);
	delay(25);
	setcolor(CYAN);
	line(xchar,ychar-30,xchar,ychar);
	line(xchar,ychar-30,xchar+3,ychar-15);
	line(xchar+3,ychar-15,xchar,ychar);
	setcolor(0);
	line(xchar,ychar-30,xchar+5,ychar-15);
	line(xchar+5,ychar-15,xchar,ychar);
	delay(25);
	setcolor(CYAN);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	line(xchar,ychar-30,xchar+5,ychar-15);
	line(xchar+5,ychar-15,xchar,ychar);
	xchar++;
	//ychar++;
	setcolor(0);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	line(xchar,ychar-30,xchar-2,ychar);
	line(xchar,ychar-30,xchar+7,ychar-15);
	line(xchar+7,ychar-15,xchar+2,ychar-2);
	delay(25);
	setcolor(CYAN);
	line(xchar,ychar-30,xchar-2,ychar);
	line(xchar,ychar-30,xchar+7,ychar-15);
	line(xchar+7,ychar-15,xchar+2,ychar-2);
	setcolor(0);
	line(xchar,ychar-30,xchar-2,ychar);
	line(xchar,ychar-30,xchar+9,ychar-15);
	line(xchar+9,ychar-15,xchar+4,ychar-4);
	delay(25);
	setcolor(CYAN);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	line(xchar,ychar-30,xchar-2,ychar);
	line(xchar,ychar-30,xchar+9,ychar-15);
	line(xchar+9,ychar-15,xchar+4,ychar-4);
	xchar+=2;
	//ychar+=2;
	setcolor(0);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	line(xchar,ychar-30,xchar-2,ychar);
	line(xchar,ychar-30,xchar+10,ychar-18);
	line(xchar+10,ychar-18,xchar+7,ychar-6);
	delay(25);
	setcolor(CYAN);
	line(xchar,ychar-30,xchar-2,ychar);
	line(xchar,ychar-30,xchar+10,ychar-18);
	line(xchar+10,ychar-18,xchar+7,ychar-6);
	setcolor(0);
	line(xchar,ychar-30,xchar-2,ychar);
	line(xchar,ychar-30,xchar+10,ychar-19);
	line(xchar+10,ychar-19,xchar+10,ychar-7);
	delay(25);
	setcolor(CYAN);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	line(xchar,ychar-30,xchar-2,ychar);
	line(xchar,ychar-30,xchar+10,ychar-19);
	line(xchar+10,ychar-19,xchar+10,ychar-7);
	xchar+=2;
	//ychar+=2;
	setcolor(0);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	line(xchar,ychar-30,xchar-4,ychar);
	line(xchar,ychar-30,xchar+10,ychar-19);
	line(xchar+10,ychar-19,xchar+12,ychar-7);
	delay(25);
	setcolor(CYAN);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	line(xchar,ychar-30,xchar-4,ychar);
	line(xchar,ychar-30,xchar+10,ychar-19);
	line(xchar+10,ychar-19,xchar+12,ychar-7);
	xchar+=2;
	//ychar+=2;
	setcolor(0);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	line(xchar,ychar-30,xchar-6,ychar);
	line(xchar,ychar-30,xchar+10,ychar-19);
	line(xchar+10,ychar-19,xchar+12,ychar-5);
	delay(25);
	setcolor(CYAN);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	line(xchar,ychar-30,xchar-6,ychar);
	line(xchar,ychar-30,xchar+10,ychar-19);
	line(xchar+10,ychar-19,xchar+12,ychar-5);
	xchar+=2;
	setcolor(0);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	line(xchar,ychar-30,xchar-8,ychar);
	line(xchar,ychar-30,xchar+10,ychar-15);
	line(xchar+10,ychar-15,xchar+10,ychar);
	delay(25);
	setcolor(CYAN);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	line(xchar,ychar-30,xchar-8,ychar);
	line(xchar,ychar-30,xchar+10,ychar-15);
	line(xchar+10,ychar-15,xchar+10,ychar);
	xchar+=2;
	setcolor(0);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	line(xchar,ychar-30,xchar-2,ychar-15);
	line(xchar-2,ychar-15,xchar-8,ychar-2);
	line(xchar,ychar-30,xchar+8,ychar-15);
	line(xchar+8,ychar-15,xchar+8,ychar);
	delay(25);
	setcolor(CYAN);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	line(xchar,ychar-30,xchar-2,ychar-15);
	line(xchar-2,ychar-15,xchar-8,ychar-2);
	line(xchar,ychar-30,xchar+8,ychar-15);
	line(xchar+8,ychar-15,xchar+8,ychar);
	xchar+=2;
	setcolor(0);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	line(xchar,ychar-30,xchar,ychar-15);
	line(xchar,ychar-15,xchar-8,ychar-2);
	line(xchar,ychar-30,xchar+6,ychar-15);
	line(xchar+6,ychar-15,xchar+6,ychar);
	delay(25);
	setcolor(CYAN);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	line(xchar,ychar-30,xchar,ychar-15);
	line(xchar,ychar-15,xchar-8,ychar-2);
	line(xchar,ychar-30,xchar+6,ychar-15);
	line(xchar+6,ychar-15,xchar+6,ychar);
	xchar+=3;
	setcolor(0);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	line(xchar,ychar-30,xchar,ychar-15);
	line(xchar,ychar-15,xchar-8,ychar-5);
	line(xchar,ychar-30,xchar+3,ychar-15);
	line(xchar+3,ychar-15,xchar+3,ychar);
	delay(25);
	setcolor(CYAN);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	line(xchar,ychar-30,xchar,ychar-15);
	line(xchar,ychar-15,xchar-8,ychar-5);
	line(xchar,ychar-30,xchar+3,ychar-15);
	line(xchar+3,ychar-15,xchar+3,ychar);
	xchar+=3;
	setcolor(0);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	line(xchar,ychar-30,xchar,ychar-15);
	line(xchar,ychar-15,xchar-9,ychar-7);
	line(xchar,ychar-30,xchar,ychar);
	delay(25);
	setcolor(CYAN);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	line(xchar,ychar-30,xchar,ychar-15);
	line(xchar,ychar-15,xchar-9,ychar-7);
	line(xchar,ychar-30,xchar,ychar);
	setcolor(0);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	line(xchar,ychar-30,xchar+2,ychar-15);
	line(xchar+2,ychar-15,xchar-7,ychar-7);
	line(xchar,ychar-30,xchar,ychar);
	delay(25);
	setcolor(CYAN);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	line(xchar,ychar-30,xchar+2,ychar-15);
	line(xchar+2,ychar-15,xchar-7,ychar-7);
	line(xchar,ychar-30,xchar,ychar);
	xchar+=2;
	setcolor(0);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	line(xchar,ychar-30,xchar+4,ychar-15);
	line(xchar+4,ychar-15,xchar-5,ychar-7);
	line(xchar,ychar-30,xchar-2,ychar);
	delay(25);
	setcolor(CYAN);
	line(xchar,ychar-30,xchar+4,ychar-15);
	line(xchar+4,ychar-15,xchar-5,ychar-7);
	line(xchar,ychar-30,xchar-2,ychar);
	setcolor(0);
	line(xchar,ychar-30,xchar+6,ychar-15);
	line(xchar+6,ychar-15,xchar-3,ychar-5);
	line(xchar,ychar-30,xchar-2,ychar);
	delay(25);
	setcolor(CYAN);
	line(xchar,ychar-30,xchar+6,ychar-15);
	line(xchar+6,ychar-15,xchar-3,ychar-5);
	line(xchar,ychar-30,xchar-2,ychar);
	setcolor(0);
	line(xchar,ychar-30,xchar+8,ychar-18);
	line(xchar+8,ychar-18,xchar+1,ychar-5);
	line(xchar,ychar-30,xchar-2,ychar);
	delay(25);
	setcolor(CYAN);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	line(xchar,ychar-30,xchar+8,ychar-18);
	line(xchar+8,ychar-18,xchar+1,ychar-5);
	line(xchar,ychar-30,xchar-2,ychar);
	xchar+=3;
	setcolor(0);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	line(xchar,ychar-30,xchar+10,ychar-18);
	line(xchar+10,ychar-18,xchar+5,ychar-5);
	line(xchar,ychar-30,xchar-5,ychar);
	delay(25);
	setcolor(CYAN);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	line(xchar,ychar-30,xchar+10,ychar-18);
	line(xchar+10,ychar-18,xchar+5,ychar-5);
	line(xchar,ychar-30,xchar-5,ychar);
	xchar+=3;
	setcolor(0);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	line(xchar,ychar-30,xchar+10,ychar-18);
	line(xchar+10,ychar-18,xchar+9,ychar-5);
	line(xchar,ychar-30,xchar-8,ychar);
	delay(25);
	setcolor(CYAN);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	line(xchar,ychar-30,xchar+10,ychar-18);
	line(xchar+10,ychar-18,xchar+9,ychar-5);
	line(xchar,ychar-30,xchar-8,ychar);
	xchar+=2;
	setcolor(0);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	line(xchar,ychar-30,xchar+10,ychar-15);
	line(xchar+10,ychar-15,xchar+10,ychar);
	line(xchar,ychar-30,xchar-10,ychar);
	delay(25);
	setcolor(CYAN);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	line(xchar,ychar-30,xchar+10,ychar-15);
	line(xchar+10,ychar-15,xchar+10,ychar);
	line(xchar,ychar-30,xchar-10,ychar);
	xchar+=3;
	setcolor(0);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	line(xchar,ychar-30,xchar+7,ychar-15);
	line(xchar+7,ychar-15,xchar+7,ychar);
	line(xchar,ychar-30,xchar-2,ychar-15);
	line(xchar-2,ychar-15,xchar-10,ychar-1);
	delay(25);
	setcolor(CYAN);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	line(xchar,ychar-30,xchar+7,ychar-15);
	line(xchar+7,ychar-15,xchar+7,ychar);
	line(xchar,ychar-30,xchar-2,ychar-15);
	line(xchar-2,ychar-15,xchar-10,ychar-1);
	xchar+=3;
	setcolor(0);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	line(xchar,ychar-30,xchar+3,ychar-15);
	line(xchar+3,ychar-15,xchar+3,ychar);
	line(xchar,ychar-30,xchar,ychar-15);
	line(xchar,ychar-15,xchar-5,ychar-1);
	delay(25);
	setcolor(CYAN);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	line(xchar,ychar-30,xchar+3,ychar-15);
	line(xchar+3,ychar-15,xchar+3,ychar);
	line(xchar,ychar-30,xchar,ychar-15);
	line(xchar,ychar-15,xchar-5,ychar-1);
	xchar+=3;
	setcolor(0);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	line(xchar,ychar-30,xchar,ychar-15);
	line(xchar,ychar-15,xchar,ychar);
	line(xchar,ychar-30,xchar,ychar-15);
	line(xchar,ychar-15,xchar-4,ychar-1);
	delay(25);
	setcolor(CYAN);
	//line(xchar,ychar-30,xchar,ychar-15);
	//line(xchar,ychar-15,xchar,ychar);
	//line(xchar,ychar-30,xchar,ychar-15);
	line(xchar,ychar-15,xchar-4,ychar-1);
	c++;
       }while(c<=5);
}
void re_move()
{
	setcolor(CYAN);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	line(xchar,ychar-30,xchar,ychar-15);
	line(xchar,ychar-15,xchar,ychar);
	line(xchar,ychar-30,xchar,ychar-15);
	line(xchar,ychar-15,xchar-4,ychar-1);
}
void move_s()
{
	label2:
	graphdefaults();
	setcolor(0);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	//movement of legs
	do{
	count++;
	line(xchar,ychar-30,xchar,ychar);
	line(xchar,ychar-30,xchar+3,ychar-15);
	line(xchar+3,ychar-15,xchar,ychar);
	delay(25);
	setcolor(CYAN);
	line(xchar,ychar-30,xchar,ychar);
	line(xchar,ychar-30,xchar+3,ychar-15);
	line(xchar+3,ychar-15,xchar,ychar);
	setcolor(0);
	line(xchar,ychar-30,xchar+5,ychar-15);
	line(xchar+5,ychar-15,xchar,ychar);
	delay(25);
	setcolor(CYAN);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	line(xchar,ychar-30,xchar+5,ychar-15);
	line(xchar+5,ychar-15,xchar,ychar);
	setcolor(0);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	line(xchar,ychar-30,xchar-2,ychar);
	line(xchar,ychar-30,xchar+7,ychar-15);
	line(xchar+7,ychar-15,xchar+2,ychar-2);
	delay(25);
	setcolor(CYAN);
	line(xchar,ychar-30,xchar-2,ychar);
	line(xchar,ychar-30,xchar+7,ychar-15);
	line(xchar+7,ychar-15,xchar+2,ychar-2);
	setcolor(0);
	line(xchar,ychar-30,xchar-2,ychar);
	line(xchar,ychar-30,xchar+9,ychar-15);
	line(xchar+9,ychar-15,xchar+4,ychar-4);
	delay(25);
	setcolor(CYAN);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	line(xchar,ychar-30,xchar-2,ychar);
	line(xchar,ychar-30,xchar+9,ychar-15);
	line(xchar+9,ychar-15,xchar+4,ychar-4);
	setcolor(0);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	line(xchar,ychar-30,xchar-2,ychar);
	line(xchar,ychar-30,xchar+10,ychar-18);
	line(xchar+10,ychar-18,xchar+7,ychar-6);
	delay(25);
	setcolor(CYAN);
	line(xchar,ychar-30,xchar-2,ychar);
	line(xchar,ychar-30,xchar+10,ychar-18);
	line(xchar+10,ychar-18,xchar+7,ychar-6);
	setcolor(0);
	line(xchar,ychar-30,xchar-2,ychar);
	line(xchar,ychar-30,xchar+10,ychar-19);
	line(xchar+10,ychar-19,xchar+10,ychar-7);
	delay(25);
	setcolor(CYAN);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	line(xchar,ychar-30,xchar-2,ychar);
	line(xchar,ychar-30,xchar+10,ychar-19);
	line(xchar+10,ychar-19,xchar+10,ychar-7);
	setcolor(0);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	line(xchar,ychar-30,xchar-4,ychar);
	line(xchar,ychar-30,xchar+10,ychar-19);
	line(xchar+10,ychar-19,xchar+12,ychar-7);
	delay(25);
	setcolor(CYAN);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	line(xchar,ychar-30,xchar-4,ychar);
	line(xchar,ychar-30,xchar+10,ychar-19);
	line(xchar+10,ychar-19,xchar+12,ychar-7);
	setcolor(0);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	line(xchar,ychar-30,xchar-6,ychar);
	line(xchar,ychar-30,xchar+10,ychar-19);
	line(xchar+10,ychar-19,xchar+12,ychar-5);
	delay(25);
	setcolor(CYAN);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	line(xchar,ychar-30,xchar-6,ychar);
	line(xchar,ychar-30,xchar+10,ychar-19);
	line(xchar+10,ychar-19,xchar+12,ychar-5);
	setcolor(0);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	line(xchar,ychar-30,xchar-8,ychar);
	line(xchar,ychar-30,xchar+10,ychar-15);
	line(xchar+10,ychar-15,xchar+10,ychar);
	delay(25);
	setcolor(CYAN);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	line(xchar,ychar-30,xchar-8,ychar);
	line(xchar,ychar-30,xchar+10,ychar-15);
	line(xchar+10,ychar-15,xchar+10,ychar);
	setcolor(0);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	line(xchar,ychar-30,xchar-2,ychar-15);
	line(xchar-2,ychar-15,xchar-8,ychar-2);
	line(xchar,ychar-30,xchar+8,ychar-15);
	line(xchar+8,ychar-15,xchar+8,ychar);
	delay(25);
	setcolor(CYAN);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	line(xchar,ychar-30,xchar-2,ychar-15);
	line(xchar-2,ychar-15,xchar-8,ychar-2);
	line(xchar,ychar-30,xchar+8,ychar-15);
	line(xchar+8,ychar-15,xchar+8,ychar);
	setcolor(0);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	line(xchar,ychar-30,xchar,ychar-15);
	line(xchar,ychar-15,xchar-8,ychar-2);
	line(xchar,ychar-30,xchar+6,ychar-15);
	line(xchar+6,ychar-15,xchar+6,ychar);
	delay(25);
	setcolor(CYAN);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	line(xchar,ychar-30,xchar,ychar-15);
	line(xchar,ychar-15,xchar-8,ychar-2);
	line(xchar,ychar-30,xchar+6,ychar-15);
	line(xchar+6,ychar-15,xchar+6,ychar);
	setcolor(0);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	line(xchar,ychar-30,xchar,ychar-15);
	line(xchar,ychar-15,xchar-8,ychar-5);
	line(xchar,ychar-30,xchar+3,ychar-15);
	line(xchar+3,ychar-15,xchar+3,ychar);
	delay(25);
	setcolor(CYAN);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	line(xchar,ychar-30,xchar,ychar-15);
	line(xchar,ychar-15,xchar-8,ychar-5);
	line(xchar,ychar-30,xchar+3,ychar-15);
	line(xchar+3,ychar-15,xchar+3,ychar);
	setcolor(0);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	line(xchar,ychar-30,xchar,ychar-15);
	line(xchar,ychar-15,xchar-9,ychar-7);
	line(xchar,ychar-30,xchar,ychar);
	delay(25);
	setcolor(CYAN);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	line(xchar,ychar-30,xchar,ychar-15);
	line(xchar,ychar-15,xchar-9,ychar-7);
	line(xchar,ychar-30,xchar,ychar);
	setcolor(0);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	line(xchar,ychar-30,xchar+2,ychar-15);
	line(xchar+2,ychar-15,xchar-7,ychar-7);
	line(xchar,ychar-30,xchar,ychar);
	delay(25);
	setcolor(CYAN);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	line(xchar,ychar-30,xchar+2,ychar-15);
	line(xchar+2,ychar-15,xchar-7,ychar-7);
	line(xchar,ychar-30,xchar,ychar);
	setcolor(0);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	line(xchar,ychar-30,xchar+4,ychar-15);
	line(xchar+4,ychar-15,xchar-5,ychar-7);
	line(xchar,ychar-30,xchar-2,ychar);
	delay(25);
	setcolor(CYAN);
	line(xchar,ychar-30,xchar+4,ychar-15);
	line(xchar+4,ychar-15,xchar-5,ychar-7);
	line(xchar,ychar-30,xchar-2,ychar);
	setcolor(0);
	line(xchar,ychar-30,xchar+6,ychar-15);
	line(xchar+6,ychar-15,xchar-3,ychar-5);
	line(xchar,ychar-30,xchar-2,ychar);
	delay(25);
	setcolor(CYAN);
	line(xchar,ychar-30,xchar+6,ychar-15);
	line(xchar+6,ychar-15,xchar-3,ychar-5);
	line(xchar,ychar-30,xchar-2,ychar);
	setcolor(0);
	line(xchar,ychar-30,xchar+8,ychar-18);
	line(xchar+8,ychar-18,xchar+1,ychar-5);
	line(xchar,ychar-30,xchar-2,ychar);
	delay(25);
	setcolor(CYAN);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	line(xchar,ychar-30,xchar+8,ychar-18);
	line(xchar+8,ychar-18,xchar+1,ychar-5);
	line(xchar,ychar-30,xchar-2,ychar);
	setcolor(0);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	line(xchar,ychar-30,xchar+10,ychar-18);
	line(xchar+10,ychar-18,xchar+5,ychar-5);
	line(xchar,ychar-30,xchar-5,ychar);
	delay(25);
	setcolor(CYAN);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	line(xchar,ychar-30,xchar+10,ychar-18);
	line(xchar+10,ychar-18,xchar+5,ychar-5);
	line(xchar,ychar-30,xchar-5,ychar);
	setcolor(0);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	line(xchar,ychar-30,xchar+10,ychar-18);
	line(xchar+10,ychar-18,xchar+9,ychar-5);
	line(xchar,ychar-30,xchar-8,ychar);
	delay(25);
	setcolor(CYAN);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	line(xchar,ychar-30,xchar+10,ychar-18);
	line(xchar+10,ychar-18,xchar+9,ychar-5);
	line(xchar,ychar-30,xchar-8,ychar);
	setcolor(0);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	line(xchar,ychar-30,xchar+10,ychar-15);
	line(xchar+10,ychar-15,xchar+10,ychar);
	line(xchar,ychar-30,xchar-10,ychar);
	delay(25);
	setcolor(CYAN);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	line(xchar,ychar-30,xchar+10,ychar-15);
	line(xchar+10,ychar-15,xchar+10,ychar);
	line(xchar,ychar-30,xchar-10,ychar);
	setcolor(0);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	line(xchar,ychar-30,xchar+7,ychar-15);
	line(xchar+7,ychar-15,xchar+7,ychar);
	line(xchar,ychar-30,xchar-2,ychar-15);
	line(xchar-2,ychar-15,xchar-10,ychar-1);
	delay(25);
	setcolor(CYAN);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	line(xchar,ychar-30,xchar+7,ychar-15);
	line(xchar+7,ychar-15,xchar+7,ychar);
	line(xchar,ychar-30,xchar-2,ychar-15);
	line(xchar-2,ychar-15,xchar-10,ychar-1);
	setcolor(0);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	line(xchar,ychar-30,xchar+3,ychar-15);
	line(xchar+3,ychar-15,xchar+3,ychar);
	line(xchar,ychar-30,xchar,ychar-15);
	line(xchar,ychar-15,xchar-5,ychar-1);
	delay(25);
	setcolor(CYAN);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	line(xchar,ychar-30,xchar+3,ychar-15);
	line(xchar+3,ychar-15,xchar+3,ychar);
	line(xchar,ychar-30,xchar,ychar-15);
	line(xchar,ychar-15,xchar-5,ychar-1);
	setcolor(0);
	circle(xchar,ychar-80,12);//head
	line(xchar,ychar-68,xchar,ychar-30);//body
	line(xchar,ychar-45,xchar+10,ychar-45);//right hand
	line(xchar,ychar-50,xchar+8,ychar-50);//left hand
	line(xchar,ychar-30,xchar,ychar-15);
	line(xchar,ychar-15,xchar,ychar);
	line(xchar,ychar-30,xchar,ychar-15);
	line(xchar,ychar-15,xchar-4,ychar-1);
	delay(25);
	setcolor(CYAN);
	//line(xchar,ychar-30,xchar,ychar-15);
	//line(xchar,ychar-15,xchar,ychar);
	//line(xchar,ychar-30,xchar,ychar-15);
	line(xchar,ychar-15,xchar-4,ychar-1);
	if(xchar+17==xblock||xchar+17==xblock2||xchar+17==xblock3)
	{
		goto label;
	}
	/*if(xchar+17==xblock4)
	{
		re_char();
		stationary();
		goto label3;
	} */
	if(xblock3==xchar-33)
	{
		re_char();
		ychar+=30;
	}
	if(xblock2==xchar-93)
	{
		re_char();
		ychar+=30;
	}
	if(xblock==xchar-153)
	{
		re_char();
		ychar+=30;
	}
	if(count%3==0)
	{
		re_setclouds();
		xcloud-=3;
		setclouds();
	}
	re_dash();
	xdash-=5;
	dash();
	re_block();
	re_block2();
	re_block3();
	xblock4-=5;
	xblock3-=5;
	xblock2-=5;
	xblock-=5;
	block3();
	block2();
	block();
	label:
       }while(!kbhit());
       char ch=getch();
       if(ch==32)
       {
		re_char();
		setcolor(0);
		ychar-=30;
		re_block();
		re_block2();
		re_block3();
		xblock-=15;
		xblock2-=15;
		xblock3-=15;
		xblock4-=15;
		block();
		block2();
		block3();
		goto label2;
       }
       if(ch==27)
       {
		exit(0);
       }
       if(ch!=32&&ch!=27)
       {
		goto label2;
       }
       //label3:
}
void menuscreen()
{
	struct date d;
	char a[50];
	cleardevice();
	setcolor(2);
	settextstyle(3,HORIZ_DIR,5);
	outtextxy(getmaxx()/2-85,60,"OBSTACLE");
	settextstyle(3,HORIZ_DIR,4);
	outtextxy(getmaxx()/2-40,textheight("OBSTACLE")+80,"Runner");
	setcolor(CYAN);
	settextstyle(BOLD_FONT,HORIZ_DIR,1);
	outtextxy(getmaxx()/2-40,180,"START");
	outtextxy(getmaxx()/2-40,220,"EXIT");
	settextstyle(1,HORIZ_DIR,1);
	setcolor(15);
	outtext("Use W,A,S,D for navigation");
	outtextxy(0,20,"Press enter to select");
	outtextxy(0,40,"Press spacebar to jump");
	getdate(&d);
	settextstyle(0,HORIZ_DIR,1);
	setcolor(15);
	sprintf(a,"System Date : %d/%d/%d",d.da_day,d.da_mon,d.da_year);
	outtextxy(0,getmaxy()-10,a);
}
void main()
{
	int gd=DETECT,gm,run=1,temp=0,i,r=0,rj=0,counter=0;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	char select='w',navigate=0,movement=0;
	menuscreen();
	settextstyle(BOLD_FONT,HORIZ_DIR,1);
	setcolor(RED);
	outtextxy(getmaxx()/2-80,180,"->");
	while(navigate!=13)
	{       navigate=getch();
		if(navigate=='w'||navigate=='s')
		{
			select=navigate;
		}
		if(navigate=='s')
		{
			settextstyle(BOLD_FONT,HORIZ_DIR,1);
			setcolor(0);
			outtextxy(getmaxx()/2-80,180,"->");
			settextstyle(BOLD_FONT,HORIZ_DIR,1);
			setcolor(RED);
			outtextxy(getmaxx()/2-80,220,"->");
		}
		if(navigate=='w')
		{
			settextstyle(BOLD_FONT,HORIZ_DIR,1);
			setcolor(0);
			outtextxy(getmaxx()/2-80,220,"->");
			settextstyle(BOLD_FONT,HORIZ_DIR,1);
			setcolor(RED);
			outtextxy(getmaxx()/2-80,180,"->");
		}
		graphdefaults();
	}
	if(select=='s')
	{
		exit(0);
	}
	if(select=='w')
	{
		cleardevice();
		settextstyle(1,HORIZ_DIR,1);
		outtextxy(getmaxx()/2-30,getmaxy()/2-30,"Level 1");
		delay(800);
		cleardevice();
		setclouds();
		setground();
		dash();
		while(!kbhit())
		{
		stationary();
		}
		if(getch()=='d')
		{
		re_stationary();
		move();
		if(c==6)
		{
		move_s();
		}
		}
	}
	//getch();
}