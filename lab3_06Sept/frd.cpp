#include<graphics.h>
#include<iostream>
using namespace std;
int main ()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    //F
    line(100, 400, 125, 400);
    line(125, 400, 125, 300);
    line(125, 300, 175, 300);
    line(175, 300, 175, 275);
    line(175, 275, 125, 275);
    line(125, 275, 125, 225);
    line(125, 225, 200, 225);
    line(200, 225, 200, 200);
    line(200, 200, 100, 200);
    line(100, 200, 100, 400);
    //R

    getch();
    closegraph();
    return 0;
}
