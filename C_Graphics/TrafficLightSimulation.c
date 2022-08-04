#include<graphics.h>
#include<stdio.h>
void blinkyellow();
int main(){

int gd=DETECT,gm;
int i,j=0,ch,k,z;
int left=20,top=250;
int right=70,bottom=270;
initgraph(&gd,&gm,"");

for(i=0;i<=400;i=i+10)
  {
    rectangle(20+i,250,70+i,270);
    circle(70+i,274,6);
    setfillstyle(SOLID_FILL,GREEN);
        floodfill(71+i,275,WHITE);
    circle(20+i,274,6);
    setfillstyle(SOLID_FILL,GREEN);
        floodfill(21+i,275,WHITE);
   for(j=0;j<=400;j++){
    rectangle(480,0,520,120);
       circle(500,100,20);

       circle(500,60,20);

    circle(500,20,20);
    setfillstyle(SOLID_FILL,GREEN);
        floodfill(501,21,WHITE);
}

   delay(50);
    cleardevice();
}
   rectangle(420,250,470,270);   // first car arrived
   circle(420,274,6);
    setfillstyle(SOLID_FILL,RED);
        floodfill(421,275,WHITE);
        circle(470,274,6);
    setfillstyle(SOLID_FILL,RED);
        floodfill(471,275,WHITE);

        for(z=0;z<=400;z=z+10)       // enter second car here
  {
    rectangle(20+z,300,70+z,320);
    circle(20+z,326,6);
    setfillstyle(SOLID_FILL,GREEN);
        floodfill(21+z,327,WHITE);
    circle(70+z,326,6);
    setfillstyle(SOLID_FILL,GREEN);
        floodfill(71+z,327,WHITE);
        delay(300);
        cleardevice();
        rectangle(420,250,470,270);   // first car arrived
   circle(420,274,6);
    setfillstyle(SOLID_FILL,RED);
        floodfill(421,275,WHITE);
        circle(470,274,6);
    setfillstyle(SOLID_FILL,RED);
        floodfill(471,275,WHITE);
         rectangle(480,0,520,120);    // signal going red

    circle(500,100,20);
    setfillstyle(SOLID_FILL,RED);
        floodfill(501,101,WHITE);
    circle(500,60,20);

    circle(500,20,20);

         }
         rectangle(420,250,470,270);   // first car
   circle(420,274,6);
    setfillstyle(SOLID_FILL,RED);
        floodfill(421,275,WHITE);
        circle(470,274,6);
    setfillstyle(SOLID_FILL,RED);
        floodfill(471,275,WHITE);

        rectangle(420,300,470,320);   // second car
   circle(420,326,6);
    setfillstyle(SOLID_FILL,RED);
        floodfill(421,327,WHITE);
        circle(470,326,6);
    setfillstyle(SOLID_FILL,RED);
        floodfill(471,327,WHITE);


   rectangle(480,0,520,120);    // signal going red

    circle(500,100,20);
    setfillstyle(SOLID_FILL,RED);
        floodfill(501,101,WHITE);
    circle(500,60,20);

    circle(500,20,20);

    delay(2000);
 cleardevice();
blinkyellow();
for(i=0;i<=650;i=i+10,i++)
  {
  rectangle(420+i,250,470+i,270);  //first car going last
 circle(420+i,274,6);
    setfillstyle(SOLID_FILL,GREEN);
        floodfill(421+i,275,WHITE);
        circle(470+i,274,6);
    setfillstyle(SOLID_FILL,GREEN);
        floodfill(471+i,275,WHITE);

        rectangle(420+i,300,470+i,320);   // second car
   circle(420+i,326,6);
    setfillstyle(SOLID_FILL,GREEN);
        floodfill(421+i,327,WHITE);
        circle(470+i,326,6);
    setfillstyle(SOLID_FILL,GREEN);
        floodfill(471+i,327,WHITE);

    for(j=0;j<=500;j++)

    {
    rectangle(480,0,520,120);
    circle(500,100,20);
    circle(500,60,20);
    circle(500,20,20);
    setfillstyle(SOLID_FILL,GREEN);
        floodfill(501,21,WHITE);

    }
delay(100);
cleardevice();
}
 rectangle(480,0,520,120);    //traffic light
    circle(500,100,20);
    circle(500,60,20);
    setfillstyle(SOLID_FILL,GREEN);
        floodfill(501,61,WHITE);
    circle(500,20,20);

    delay(5000);
    cleardevice();

getch();
closegraph();
return 0;
}
void blinkyellow()
{
    circle(500,60,20);
    setfillstyle(SOLID_FILL,YELLOW);
        floodfill(501,61,WHITE);
}
