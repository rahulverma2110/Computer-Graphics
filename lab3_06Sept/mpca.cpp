#include<graphics.h>
#include<iostream>
using namespace std;

int main()
{
    int x_c, y_c, r;
    int gd = DETECT, gm;
    cout<<"Enter the coordinates of the center of the circle: ";
    cin>>x_c>>y_c;
    cout<<"Enter the radius of the circle: ";
    cin>>r;
    initgraph(&gd, &gm, "");
    int x = r, y = 0;
    putpixel(x + x_c, y + y_c, WHITE);
    if(r > 0)
    {
        putpixel(x + x_c, -y + y_c, WHITE);
        delay(100);
        putpixel(y + x_c, x + y_c, WHITE);
        delay(100);
        putpixel(-y + x_c, x + y_c, WHITE);
        delay(100);
    }
    int p = 1 - r;
    while(x > y)
    {
        y++;
        if(p <= 0)
        {
            p = p + 2*y + 1;
        }
        else
        {
            x--;
            p = p + 2*y + 1 - 2*x;
        }

        if(x < y)
            break;
        putpixel(x + x_c, y + y_c, WHITE);
        delay(100);
        putpixel(-x + x_c, y + y_c, WHITE);
        delay(100);
        putpixel(x + x_c, -y + y_c, WHITE);
        delay(100);
        putpixel(-x + x_c, -y + y_c, WHITE);
        delay(100);

    if (x != y)
    {
        putpixel(y + x_c, x + y_c, WHITE);
        delay(100);
        putpixel(-y + x_c, x + y_c, WHITE);
        delay(100);
        putpixel(y + x_c, -x + y_c, WHITE);
        delay(100);
        putpixel(-y + x_c, -x + y_c, WHITE);
        delay(100);
    }}

    return 0;
}
