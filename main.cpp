//========================================================================
#include "TXLib.h"

void drawSky()
{
    //����
    txSetColor(TX_BLUE);
    txSetFillColor(TX_BLUE);
    txRectangle(0,0,1200,500);
}

void drawLand()
{
    //�����
    txSetColor(TX_GREEN);
    txSetFillColor(TX_GREEN);
    txRectangle(0,500,1200,800);
}

void drawSun(int x,int y)
{
    //������ x=90,y=80
txSetColor(TX_YELLOW);
txSetFillColor(TX_YELLOW);
txCircle(x,y,50);
}

void drawHouse()
{
    //���
txSetColor(TX_BLACK);
txSetFillColor(TX_BROWN);
txRectangle(750,330,1190,560);
//�����
txSetColor(TX_BLACK);
txSetFillColor(TX_GREY);
txRectangle(1070,400,1130,560);
txSetColor(TX_BLACK);
txLine(1110,500,1125,500);
//����
txSetColor(TX_BLACK);
txSetFillColor(TX_CYAN);
txRectangle(810,380,960,460);
txLine(810,420,960,420);
txLine(885,380,885,460);
//�����
txSetColor(TX_BLACK);
txSetFillColor(TX_BROWN);
POINT start[3]{{750,330}, {1190,330}, {970,200}};
txPolygon (start, 3);
}

void drawMan(int x,int y)
{
   //������� X=570   y=365
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
  //������
txSetColor(TX_BLACK);
txSetFillColor(TX_GREY);
POINT car[7]{{x+160-160,y+530-480}, {x+160-160,y+480-480}, {x+210-160,y+450-480}, {x+240-160,y+390-480}, {x+430-160,y+390-480}, {x+470-160,y+450-480}, {x+470-160,y+530-480}};
txPolygon (car, 7);
//���� ������
txSetColor(TX_BLACK);
txSetFillColor(TX_CYAN);
POINT window[4]{{x+410-160,y+400-480}, {x+440-160,y+450-480}, {x+230-160,y+450-480}, {x+250-160,y+400-480}};
txPolygon (window, 4);
//�����
txLine(x+330-160,y+400-480,x+330-160,y+530-480);
txLine(x+260-160,y+470-480,x+280-160,y+490-480);
txLine(x+350-160,y+470-480,x+370-160,y+490-480);
//�����
txSetColor(TX_BLACK);
txSetFillColor(TX_BLACK);
txCircle(x+200-160,y+530-480,30);
txCircle(x+420-160,y+530-480,30);
txSetFillColor(TX_GREY);
txCircle(x+200-160,y+530-480,20);
txCircle(x+420-160,y+530-480,20);
//������
txLine(x+470-160,y+520-480,x+475-160,y+520-480);
txLine(x+470-160,y+521-480,x+475-160,y+521-480);
txLine(x+470-160,y+522-480,x+475-160,y+522-480);
txLine(x+470-160,y+523-480,x+475-160,y+523-480);
//����
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

void drawWall()
    {
    txSetColor(TX_BLACK);
    txSetFillColor(TX_BROWN);
    txRectangle (0,0,1200,600);
    }

    void drawFloor()
    {
    txSetColor(TX_BLACK);
    txSetFillColor(TX_BROWN);
    txRectangle (0,600,1200,800);
    }

    void drawDoor()
    {
    txSetColor(TX_BLACK,5);
    txSetFillColor(TX_ORANGE);
    txRectangle (900,220,1000,600);
    txLine(990,450,970,450);
    }
    void drawClock()
    {
    txSetColor(TX_BLACK,5);
    txSetFillColor(TX_WHITE);
    txCircle(620,120,45);
    txLine(590,120,620,120);
    txLine(620,120,620,100);
    }

    void drawWindow()
    {
    txSetColor(TX_BLACK,5);
    txSetFillColor(TX_CYAN);
    txRectangle (470,385,200,200);
    txLine(330,200,330,385);
    txLine(470,290,200,290);
    }
    void drawChair()
    {
    txLine(350,655,350,420);
    txLine(370,640,370,540);
    txLine(440,540,440,650);
    txLine(370,510,370,390);
    txLine(460,510,460,630);
    txSetFillColor(TX_ORANGE);
    POINT chair1[4]{{350,420}, {370,390}, {370,510}, {350,540}};
    txPolygon(chair1, 4);
    POINT chair2[4]{{350,540}, {440,540}, {460,510}, {370,510}};
    txPolygon(chair2, 4);
    }

    void drawTable()
    {
    txLine(470,660,470,500);
    txLine(530,500,530,600);
    txLine(670,660,670,500);
    txLine(720,600,720,440);
    POINT table1[8]{{470,470}, {470,500}, {670,500}, {720,440}, {720,410}, {670,470}, {470,470}, {530,470}};
    txPolygon(table1, 8);
    txLine(670,500,670,470);
    POINT table2[4]{{720,410}, {670,470}, {470,470}, {530,410}};
    txPolygon(table2, 4);
    }
   void drawSpoon()
   {
   txSetColor(TX_GREY,5);
   txSetFillColor(TX_GREY);
   txLine(510,450,530,450);
   txCircle(535,450,5);
   }
    void drawPLate()
    {
    txCircle(540,430,10);
    }

    void drawKey()
    {
    txSetFillColor(TX_BROWN);
    txSetColor(TX_BLACK,3);
    txCircle(550,630,5);
    txLine(550,630,580,630);
    txLine(580,630,580,635);
    txLine(575,630,575,633);
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

    drawWall();
    drawFloor();
    drawDoor();
    drawClock();
    drawWindow();
    drawChair();
    drawTable();
    drawSpoon();
    drawPLate();
    drawKey();

txTextCursor (false);
return 0;
}

