#include<graphics.h>
#include<iostream>
using namespace std;

int bre(int X0, int Y0, int X1, int Y1)
{
    int dx = X1 - X0;
    int dy = Y1 - Y0;
    int pk = 2*dy - dx;
    int X = X0;
    int Y = Y0;
    putpixel(X,Y,WHITE);
    while(X!=X1 && Y !=Y1)
    {
        if(pk<0)
        {
            pk = pk + 2*dy;
            X++;
        }
        else
        {
            pk = pk + 2*dy - 2*dx;
            X++;
            Y++;
        }
        putpixel(X,Y,WHITE);
        delay(100);
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
    bre(X0,Y0,X1,Y1);
    return 0;
}

