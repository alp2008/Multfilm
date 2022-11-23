//========================================================================
#include "TXLib.h"

void drawSky()
{
    //небо
    txSetColor(TX_BLUE);
    txSetFillColor(TX_BLUE);
    txRectangle(0,0,1200,500);
}

void drawLand()
{
    //земля
    txSetColor(TX_GREEN);
    txSetFillColor(TX_GREEN);
    txRectangle(0,500,1200,800);
}

void drawSun(int x,int y)
{
    //солнце x=90,y=80
txSetColor(TX_YELLOW);
txSetFillColor(TX_YELLOW);
txCircle(x,y,50);
}

void drawHouse()
{
    //дом
txSetColor(TX_BLACK);
txSetFillColor(TX_BROWN);
txRectangle(750,330,1190,560);
//дверь
txSetColor(TX_BLACK);
txSetFillColor(TX_GREY);
txRectangle(1070,400,1130,560);
txSetColor(TX_BLACK);
txLine(1110,500,1125,500);
//окно
txSetColor(TX_BLACK);
txSetFillColor(TX_CYAN);
txRectangle(810,380,960,460);
txLine(810,420,960,420);
txLine(885,380,885,460);
//крыша
txSetColor(TX_BLACK);
txSetFillColor(TX_BROWN);
POINT start[3]{{750,330}, {1190,330}, {970,200}};
txPolygon (start, 3);
}

void drawMan(int x,int y)
{
   //человек X=570   y=365
    txSetFillColor(TX_BLACK);
    txSetColor(TX_BLACK);
    txCircle(x+570-570,y+365-365,15);
    txLine  (x+540-570,y+560-365,x+570-570,y+450-365);
    txLine  (x+590-570,y+560-365,x+570-570,y+450-365);
    txLine  (x+570-570,y+450-365,x+570-570,y+380-365);
    txLine  (x+610-570,y+440-365,x+570-570,y+380-365);
    txLine  (x+530-570,y+440-365,x+570-570,y+380-365);
}

void drawCar(int x,int y)
{

    //x=160 y=480
  //машина
txSetColor(TX_BLACK);
txSetFillColor(TX_GREY);
POINT car[7]{{x+160-160,y+530-480}, {x+160-160,y+480-480}, {x+210-160,y+450-480}, {x+240-160,y+390-480}, {x+430-160,y+390-480}, {x+470-160,y+450-480}, {x+470-160,y+530-480}};
txPolygon (car, 7);
//окно машины
txSetColor(TX_BLACK);
txSetFillColor(TX_CYAN);
POINT window[4]{{x+410-160,y+400-480}, {x+440-160,y+450-480}, {x+230-160,y+450-480}, {x+250-160,y+400-480}};
txPolygon (window, 4);
//двери
txLine(x+330-160,y+400-480,x+330-160,y+530-480);
txLine(x+260-160,y+470-480,x+280-160,y+490-480);
txLine(x+350-160,y+470-480,x+370-160,y+490-480);
//калёса
txSetColor(TX_BLACK);
txSetFillColor(TX_BLACK);
txCircle(x+200-160,y+530-480,30);
txCircle(x+420-160,y+530-480,30);
txSetFillColor(TX_GREY);
txCircle(x+200-160,y+530-480,20);
txCircle(x+420-160,y+530-480,20);
//выхлоп
txLine(x+470-160,y+520-480,x+475-160,y+520-480);
txLine(x+470-160,y+521-480,x+475-160,y+521-480);
txLine(x+470-160,y+522-480,x+475-160,y+522-480);
txLine(x+470-160,y+523-480,x+475-160,y+523-480);
//фары
txSetColor(TX_BLACK);
txSetFillColor(TX_YELLOW);
POINT fari[3]{{x+160-160,y+500-480}, {x+170-160,y+470-480}, {x+160-160,y+480-480}};
txPolygon (fari, 3);
}


void drawWood (int x, int y)
{
    //x,y = 550,590
    txSetColor(TX_BLACK);
    txSetFillColor(TX_BROWN);
    txRectangle(x+570-550,y,x,y+310-590);
    txSetColor(TX_LIGHTGREEN);
    txSetFillColor(TX_LIGHTGREEN);
    txEllipse(x+620-550,y+490-590,x+500-550,y+220-590);


}



int main()
    {
    txCreateWindow (1200, 800);

int xSun = 90;
int xMan = 570;
int ySun = 80;
int yMan = 365;
int xCar = 160;
int yCar = 480;


while(xSun < 560)
{
    txBegin();
    drawSky();
    drawLand();
    for(int x=50; x<1200; x+=150)
    {
        drawWood (x,500);
    }
    drawSun(xSun,ySun);
    drawHouse();
    drawMan(xMan,yMan);
    drawCar(xCar,yCar);
    xSun+=5;
    ySun-=1;
    xCar-=1;
    txEnd();
    txSleep(10);
}
while(xSun < 1120)
{
    txBegin();
    drawSky();
    drawLand();
    drawSun(xSun,ySun);
    for(int x=50; x<1200; x+=150)
    {
        drawWood (x,500);
    }
    drawHouse();
    drawMan(xMan,yMan);
    drawCar(xCar,yCar);
    xSun+=5;
    ySun+=1;
    xCar-=10;
    txEnd();
    txSleep(10);
}

    while(xMan < 1200)
{
    txBegin();
    drawSky();
    drawLand();
    drawSun(xSun,ySun);
    for(int x=50; x<1200; x+=150)
    {
        drawWood (x,500);
    }
    drawHouse();
    drawMan(xMan,yMan);
    drawCar(xCar,yCar);
    xMan+=5;
    yMan+=1;
    txEnd();
    txSleep(10);
}

{

}



    txTextCursor (false);
    return 0;
    }

