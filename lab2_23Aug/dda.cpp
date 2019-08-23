#include<graphics.h>
#include<iostream>
using namespace std;

int DDA(int X0, int Y0, int X1, int Y1)
{
    int steps;
    int dx = X1 - X0;
    int dy = Y1 - Y0;

    if(dx > dy)
    {
        steps = dx;
    }
    else
    {
        steps = dy;
    }

    float incX = dx/(float)steps;
    float incY = dy/(float)steps;

    float X = X0;
    float Y = Y0;
    for(int i = 0; i<=steps;i++)
    {
        putpixel(X,Y,WHITE);
        X = X + incX;
        Y = Y + incY;
        delay(50);
    }
}

int main()
{
    int X1,X0,Y1,Y0;
    int gd = DETECT, gm;
    cout<<"Enter the X and Y Co-ordinates of first point: ";
    cin>>X0>>Y0;
    cout<<"Enter the X and Y Co-ordinates of second point: ";
    cin>>X1>>Y1;

    initgraph(&gd, &gm, "");
    DDA(X0,Y0,X1,Y1);
   // DDA(X1,Y1,X0, 520);
    return 0;
}
