	       ////////////////////////////AUM SRI SAI RAM/////////////////////////////
//________________________________________________________________________
//			     ___
 //			    |   |     |   |
 //			    |___|     |   |
 //			    |    iped |___|p
//________________________________________________________________________
//////////////////////header files///////////

#include<string.h>
#include<time.h>
#include<process.h>
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<alloc.h>
#include<stdlib.h>
#include<stdio.h>
#include<dos.h>
#include<string.h>
#include<mouse.h>

///////////////////////////////////////////////////

class pipe

     {

       public:
       int x1,y1,x2,y2;
       int ptype;
       int sel;    //selected the pipe
       pipe()
	{
	 sel=0;
	}

     }P1,P2,P3,P4;


/////////////////////global variables////////////////
void *up,*down,*verti,*hori;
int check=0,s1,s2,s3,c1,c2,c3,x1,x2,color=0,r=0,w=0,y1=0,y2,g,h,b1,b2,n1=0;
int ab,ac;
int ch1=0,ch2=0,lose=1,winlvl=0,co1=130,co2=90,ct,ut,score=0;
float t1;
int e=30,f=410;

/////////////////////functions/////////////////
void start();
void car();
void menu();
void game();
void drawbkg();
void pickp();
void putp();
void checkp();
void flow();
void lvl();
void drlvl1();
void drlvl2();
void drlvl3();
void drlvl4();
void drlvl5();
void drlvl6();
void drlvl7();
void help();
void los();
void win();
void retry();
void tutorial();


////////////////////////////////////

void retry()             //redraws the level
{
 hidemouse();
 cleardevice();
 ch=1;
 P1.x1=30,P1.y1=50,P2.x1=30,P2.y1=120,P3.x1=30,P3.y1=250,P4.x1=30,P4.y1=320,e=30,f=410;
 co1=130,co2=90,ct=4,ut=4;
 check=0;
 lose=1;
 bx=0;
 g=b1;h=b2;
 switch(winlvl)
 {
  case 1: drlvl1();break;
  case 2: drlvl2();break;
  case 3: drlvl3();break;
  case 4: drlvl4();break;
  case 5: drlvl5();break;
  case 6: drlvl6();break;
  case 7: drlvl7();break;
 }
 showmouse();
}

      //_______________________________________________________

void start()                ///introduction
{
 char dedic[100]={"Dedicated at the divine lotus feet of Mother Sai..."};
 gotoxy(15,15);
 for(int id=0;id<strlen(dedic);id++)
 {
  cout<<dedic[id];
  delay(150);
 }
 sleep(1);
 clrscr();
 cleardevice();


 setcolor(BLUE);
 int io1,io2,jo1,jo2,ko1,ko2,er1,er2,er3,er4,er5,er6;
   io1=320;
   io2=100;
   jo1=250;
   jo2=150;
   ko1=390;
   ko2=150;


   int m;
   for(io2=0,jo1=0,ko1=600,m=0;jo1<245;m++)
   {
    setcolor(WHITE);
    if(io2<=100)
     io2++;
    jo1++;
    if(ko1>=395)
     ko1--;
    delay(8);

     /////////////////////////////////
   setcolor(RED);

   line(io1,io2,io1+70,io2+40);
   line(io1,io2,io1-70,io2+40);
   line(io1+70,io2+40,io1,io2+80);
   line(io1-70,io2+40,io1,io2+80);

   setcolor(BLACK);
   er2=io2-8;
   er1=io1;
   line(er1,er2,er1+70,er2+40);
   line(er1,er2,er1-70,er2+40);
   line(er1+70,er2+40,er1,er2+80);
   line(er1-70,er2+40,er1,er2+80);
   //////////////////////////

   setcolor(GREEN);

   line(jo1,jo2,jo1+70,jo2+40);
   line(jo1+70,jo2+40,jo1+70,jo2+130);
   line(jo1,jo2,jo1,jo2+90);
   line(jo1,jo2+90,jo1+70,jo2+130);
   er3=jo1-8;
   er4=jo2;

   setcolor(BLACK);
   line(er3,er4,er3+70,er4+40);
   line(er3+70,er4+40,er3+70,er4+130);
   line(er3,er4,er3,er4+90);
   line(er3,er4+90,er3+70,er4+130);
   ///////////////////////
   setcolor(BLUE);

   line(ko1,ko2,ko1-70,ko2+40);
   line(ko1-70,ko2+40,ko1-70,ko2+130);
   line(ko1,ko2,ko1,ko2+90);
   line(ko1,ko2+90,ko1-70,ko2+130);

   er5=ko1+8;
   er6=ko2;
   setcolor(BLACK);
   line(er5,er6,er5-70,er6+40);
   line(er5-70,er6+40,er5-70,er6+130);
   line(er5,er6,er5,er6+90);
   line(er5,er6+90,er5-70,er6+130);

   setcolor(YELLOW);

   }
////////////////////////
    delay(1000);
   jo2=150;
   ko2=150;

 for(io2=100,jo1=250,ko1=390,m=0;jo1>-100;m++)
   {
    setcolor(WHITE);

    if(io2>=-50)
     io2--;
    jo1--;
    if(ko1<=1000)
     ko1++;

     delay(0);
   setcolor(RED);
   line(io1,io2,io1+70,io2+40);
   line(io1,io2,io1-70,io2+40);



   setcolor(BLACK);
   er2=io2+8;
   er1=io1;
     line(er1,er2,er1+70,er2+40);
   line(er1,er2,er1-70,er2+40);

   //////////////////////////

   setcolor(GREEN);

   line(jo1,jo2,jo1,jo2+90);
   line(jo1,jo2+90,jo1+70,jo2+130);
   er3=jo1+8;
   er4=jo2;

   setcolor(BLACK);
   line(er3,er4,er3,er4+90);
   line(er3,er4+90,er3+70,er4+130);
   ///////////////////////
   setcolor(BLUE);

   line(ko1,ko2,ko1,ko2+90);
   line(ko1,ko2+90,ko1-70,ko2+130);

   er5=ko1-8;
   er6=ko2;
   setcolor(BLACK);
   line(er5,er6,er5,er6+90);
   line(er5,er6+90,er5-70,er6+130);

   setcolor(YELLOW);

   }
   sound(500);
 delay(100);
 nosound();
 sound(1000);
 delay(200);
 nosound();


 setcolor(WHITE);
 settextstyle(0,0,4);
 outtextxy(150,330,"UNION GAMES");
 getch();

 cleardevice();

   setcolor(WHITE);
   rectangle(200,90,450,440);
   for(int it=350;it>150;it--)

   {
    setcolor(RED);
    delay(5);
    ellipse(250,it-10,0,360,20,10);
    setcolor(BLACK);
    ellipse(250,it-11,0,360,20,10);
   }
   for(it=350;it>200;it--)
   {
    setcolor(BROWN);
    delay(5);
    ellipse(300,it-10,0,360,20,10);
    setcolor(BLACK);
    ellipse(300,it-11,0,360,20,10);
   }
   for(it=350;it>250;it--)
   {
    setcolor(BLUE);
    delay(5);
    ellipse(350,it-10,0,360,20,10);
    setcolor(BLACK);
    ellipse(350,it-11,0,360,20,10);
   }
   for(it=350;it>300;it--)
   {
    setcolor(CYAN);
    delay(5);
    ellipse(400,it-10,0,360,20,10);
    setcolor(BLACK);
    ellipse(400,it-11,0,360,20,10);
   }
   setcolor(WHITE);

   settextstyle(0,0,3);
   outtextxy(250,390,"NATPRO");




  getch();
  cleardevice();
  car();
 cleardevice();
 int i,j;
 for(i=0,j=0;i<100;i+=5)
 {
  setcolor(i);
  delay(50);
  circle(100,100,i);
 }
 for(i=0,j=0;i<100;i+=5)
 {
  setcolor(i);
  delay(50);
  circle(300,150,i);
 }
 for(i=0,j=0;i<100;i+=5)
 {
  setcolor(i);
  delay(50);
  circle(400,300,i);
 }
 for(i=0,j=0;i<100;i+=5)
 {
  setcolor(i);
  delay(50);
  circle(150,350,i);
 }
 for(i=0,j=0;i<100;i+=5)
 {
  setcolor(i);
  delay(50);
  circle(400,150,i);
 }
 for(i=0,j=0;i<100;i+=5)
 {
  setcolor(i);
  delay(50);
  circle(250,250,i);
 }
 for(i=0,j=0;i<100;i+=5)
 {
  setcolor(i);
  delay(50);
  circle(430,50,i);
 }
 for(i=0,j=0;i<100;i+=5)
 {
  setcolor(i);
  delay(50);
  circle(350,350,i);
 }


 setcolor(BLACK);

 setcolor(BLUE);
 int a1,a2,f1,f2,color;
 f1=getmaxx();
 f2=getmaxy();

 int in;

	   int co1=100,co2=300;

 setcolor(WHITE);

 for(in=95;in<105;++in)
 {
 if(in>100)
  setcolor(BLUE);
 else
  setcolor(WHITE);
  settextstyle(1,0,9);
  outtextxy(in,80+in,"PIPED UP");
 }

  sound(400);
 delay(300);
 nosound();
 delay(15);
  sound(400);
 delay(300);
 nosound();
 delay(15);
  sound(450);
 delay(300);
 nosound();
 delay(15);
  sound(450);
 delay(300);
 nosound();
  sound(480);
 delay(300);
 nosound();
 delay(15);
  sound(480);
 delay(300);
  nosound();
 delay(60*12);


 sound(400);
 delay(300);
 nosound();
 delay(15);
 sound(400);
 delay(300);
 nosound();
 delay(15);
 sound(590);
 delay(300);
 nosound();
 delay(15);
 sound(590);
 delay(300);
 nosound();
 delay(15);
 sound(480);
 delay(300);
 nosound();
 delay(15);
 sound(480);
 delay(300);
 nosound();
 delay(60*12);


 sound(400);
 delay(300);
 nosound();
 delay(15);
 sound(400);
 delay(300);
 nosound();
 sound(450);
 delay(300);
 nosound();
 delay(15);
 sound(450);
 delay(300);
 nosound();
 delay(15);
 sound(400);
 delay(300);
 nosound();
 delay(15);
 sound(400);
 delay(300);
 nosound();
 delay(60*12);


 sound(400);
 delay(300);
 nosound();
 delay(15);
 sound(400);
 delay(300);
 nosound();
 delay(15);
 sound(590);
 delay(300);
 nosound();
 delay(15);
 sound(590);
 delay(300);
 nosound();
 delay(15);
 sound(480);
 delay(300);
 nosound();
 delay(15);
 sound(480);
 delay(300);
 nosound();
 delay(60*12);



// delay(2000);
 setcolor(BLUE);
 settextstyle(7,0,3);
 outtextxy(100,400,"% press any key to continue %");
 getch();
 cleardevice();
}
//_________________________________________________________________
void car()                           ///loading...
{
 cleardevice();

 setcolor(YELLOW);
 setfillstyle(10,BROWN);
 rectangle(520,0,640,360);
 floodfill(524,0,YELLOW);
 setfillstyle(1,BROWN);
 rectangle(250,250,348,320);
 floodfill(251,251,YELLOW);
 setcolor(YELLOW);

 setfillstyle(1,BROWN);
 rectangle(350,270,390,320);
 rectangle(370,280,385,300);
 floodfill(351,271,YELLOW);
 setfillstyle(1,LIGHTGRAY);
 circle(270,340,20);
 circle(360,340,20);
 circle(270,340,10);
 circle(360,340,10);
 floodfill(281,341,YELLOW);
 floodfill(371,341,YELLOW);
 settextstyle(3,0,1);
 outtextxy(260,275,"PIPED-UP");

 void*m;
 int i;
 size_t p=imagesize(250,250,390,360);
 m=malloc(p);
 getimage(250,250,390,360,m);
 putimage(250,250,m,XOR_PUT);
 setcolor(BROWN);
 line(0,410,640,410);
 line(0,411,640,411);
 line(0,412,640,412);


 cleardevice();
 i=0;
 int car=0;
 while(1)
  {

   showmouse();
  setmouselimit();
  getstatus();
   if(bx==1)
    break;

     setcolor(CYAN);
     settextstyle(2,0,8);
     outtextxy(200,150,"LOADING...");


   setcolor(BROWN);
   line(0,410,640,410);
   line(0,411,640,411);
   line(0,412,640,412);

   if(i>=680)
    {cleardevice();i=0;car++;}
    if(car==1&&i>370)
    {
     setcolor(random(10));
     settextstyle(2,0,8);
     outtextxy(150,100,"WE NEED YOU TO ");
     outtextxy(150,150,"   FIX IT!");
     setcolor(BROWN);
     rectangle(520,30,640,410);
     rectangle(521,30,641,410);
     setfillstyle(11,RED);
     rectangle(522,30,642,410);
     floodfill(524,31,BROWN);
     settextstyle(6,0,4);
     outtextxy(530,125,"FACTORY");
     getch();
     break;
    }
   else
   {
     putimage(i,300,m,COPY_PUT);
     i++;
     putimage(i-1,300,m,COPY_PUT);
  }

}

 getch();

}
//________________________________________________________________
void menu()                    //display menu
{

 int w1,w2,exi=0,i=0;
 changemouse(9);
 bx=0;
 while(exi==0)
 {
  exi==1;
  showmouse();
  setmouselimit();
  getstatus();

  bx=0;
  setcolor(i);
  settextstyle(8,0,4);
  outtextxy(i,20,"ARE YOU GAME ENOUGH ? ");
  setcolor(BLACK);
  outtextxy(i-1,20,"ARE YOU GAME ENOUGH ? ");
  i++;
  if(i>600)
   i=0;
  setcolor(BLUE);


      int color=1;

   w1=co1=150;
   w2=co2=300;
   setcolor(YELLOW);
   setfillstyle(1,BROWN);
   bar3d(co1,co2,co1+230,co2+60,10,1);               //l=30,b=30  bar3d
   floodfill(co1+1,co2+1,YELLOW);

   setcolor(BLACK);
   settextstyle(8,0,3);
   outtextxy(co1+10,co2,"PLUMBERS CLASS");

   setcolor(YELLOW);
   setfillstyle(1,BROWN);
   bar3d(150,100,380,160,10,1);               //l=30,b=30  bar3d
   floodfill(151,101,YELLOW);
   int w3=180,w4=100;
   setcolor(BLACK);
   settextstyle(8,0,5);
   outtextxy(180,100,"PLAY");

   setcolor(YELLOW);
   setfillstyle(1,BROWN);
   bar3d(150,200,380,260,10,1);               //l=30,b=30  bar3d
   floodfill(151,201,YELLOW);
   int w5=180,w6=200;
   setcolor(BLACK);
   settextstyle(8,0,5);
   outtextxy(180,200,"QUIT");




  setcolor(LIGHTBLUE);
   co1=250;
   co2=100;


 changemouse(9);
 bx=0;
 int i=0;
 while(bx==0)
 {

  showmouse();
  setmouselimit();
  getstatus();



  if(cx>=150&&dx>=300&&cx<=340&&dx<=360)
  {
   setcolor(YELLOW);
   settextstyle(8,0,3);
   outtextxy(w1+10,w2,"PLUMBERS CLASS");
  }
  else
  { setcolor(BLACK);
   settextstyle(8,0,3);
   outtextxy(w1+10,w2,"PLUMBERS CLASS");
  }

 if(cx>=150&&dx>=100&&cx<=380&&dx<=160)
  {
   setcolor(YELLOW);
   settextstyle(8,0,5);
   outtextxy(w3,w4,"PLAY");
  }
  else
  {
   setcolor(BLACK);
   settextstyle(8,0,5);
   outtextxy(w3,w4,"PLAY");
  }


 if(cx>=150&&dx>=200&&cx<=380&&dx<=260)
  {
   setcolor(YELLOW);
   settextstyle(8,0,5);
   outtextxy(w5,w6,"QUIT");
  }
  else
  {
   setcolor(BLACK);
   settextstyle(8,0,5);
   outtextxy(w5,w6,"QUIT");
  }



 }
 if(cx>=150&&dx>=100&&cx<=380&&dx<=160)
  if(bx==1)
   {bx=0;hidemouse();cleardevice();winlvl=1;game();break;}
 if(cx>=150&&dx>=300&&cx<=340&&dx<=360)
  if(bx==1)
   {bx=0;hidemouse();cleardevice();winlvl=0;game();cleardevice();}
 if(cx>=150&&dx>=180&&cx<=380&&dx<=250)
  if(bx==1)
   {bx=0;
    setcolor(WHITE);
    hidemouse();
    cleardevice();
    settextstyle(8,0,3);
    delay(10);
    outtextxy(180,190,"THANKYOU FOR PLAYING WITH... ");
    delay(20);
    outtextxy(180,220,"       UNION GAMES");
    getch();
    getch();
    cleardevice();
    exit(0);}




 }

}
//________________________________________________________________
void tutorial()       //tutorial for game
{
 changemouse(9);
 hidemouse();
 cleardevice();
 drawbkg();
 setcolor(BLUE);

 setcolor(WHITE);
 line(150,50,150,350);
 line(100,50,150,50);
 line(100,150,150,150);
 line(100,250,150,250);
 line(100,350,150,350);
 line(150,200,200,200);

 settextstyle(1,0,1);
 outtextxy(200,200,"These are the different pipes");
 outtextxy(200,215,"you can select from the boxes...");
 getch();
 outtextxy(200,250,"ONLY ONE AT A TIME!");
 getch();
 cleardevice();
 drawbkg();
 outtextxy(200,200,"You have to fix the pipes ");
 outtextxy(150,240,"from the left ");
 getch();
 for(int iy=150;iy<400;iy++)
 {
  delay(3);
  setcolor(WHITE);
  outtextxy(iy,240,"from the left ");
  setcolor(BLACK);
  outtextxy(iy-1,240,"from the left ");
 }
 setcolor(BLACK);
 outtextxy(iy,240,"from the left ");
 outtextxy(iy-1,240,"from the left ");
 setcolor(WHITE);
 outtextxy(400,240,"to the right ");
 getch();
 cleardevice();
 drawbkg();
 outtextxy(200,200,"After connecting the pipes");
 outtextxy(200,240,"press the \"FLOW\" button to ");
 outtextxy(200,270,"release the water.. ");
 setcolor(YELLOW);
 rectangle(5,400,100,450);


 getch();
 cleardevice();

 setcolor(BLUE);

 setfillstyle(1,LIGHTBLUE);
 rectangle(120,0,140,450); //start
 floodfill(121,1,BLUE);
 setfillstyle(1,LIGHTBLUE);
 rectangle(140,430,190,450); //start
 floodfill(141,436,BLUE);

 setfillstyle(1,LIGHTBLUE);
 rectangle(440,430,490,450); //finish
 floodfill(441,431,BLUE);



 drawbkg();
 outtextxy(200,200,"Click on the required pipe");
 g=190;
 h=430;
 s1=120;
 s2=0;
 while(1)
 {
  showmouse();
  setmouselimit();
  getstatus();
  if(bx==1);
  { pickp();
   outtextxy(200,220,"and click on the place ");
   outtextxy(200,240,"you want to put it. ");
  }

  putp();
  if(cx>0&&dx>400&&cx<100&&dx<500)
  { setcolor(BLUE);
    settextstyle(1,0,2);
    outtextxy(e,f,"!FLOW!");}
    setcolor(WHITE);
    settextstyle(1,0,2);
    outtextxy(e,f,"!FLOW!");

  if(cx>0&&dx>400&&cx<100&&dx<500)
   if(bx==1)
      {flow();setcolor(BLACK);
       outtextxy(200,220,"and click on the place ");
       outtextxy(200,240,"you want to put it. ");}

  if(s1>490&&s2>430)
    break;
   if(bx==2)
    break;
 }
 setcolor(BLACK);
 outtextxy(200,200,"Click on the required pipe");
 drawbkg();
 setcolor(WHITE);
 outtextxy(200,210,"You can't choose two pipes at once... ");
 getch();
 outtextxy(200,230,"and you can choose only particular ");
 outtextxy(200,250,"combinations for attaching the pipes. ");
 getch();
 cleardevice();
 outtextxy(200,210,"Examples of some COMBOS are: ");
 getch();
 cleardevice();
 drawbkg();

 setcolor(WHITE);
 outtextxy(160,50,"this");
 outtextxy(160,350,"to");
 circle(100,50,15);
 line(150,50,150,350);
 line(100,50,150,50);
 line(100,350,150,350);
 getch();
 cleardevice();
 drawbkg();
 outtextxy(160,150,"this... ");
 outtextxy(160,250,"to");
 circle(100,150,15);
 line(150,150,150,250);
 line(100,150,150,150);
 line(100,250,150,250);
 getch();
 cleardevice();
 drawbkg();
 outtextxy(160,250,"this... ");
 outtextxy(160,50,"to");
 outtextxy(160,350,"or to");
 circle(100,250,15);
 line(150,50,150,350);
 line(100,50,150,50);
 line(100,250,150,250);
 line(100,350,150,350);
 getch();
 cleardevice();
 drawbkg();
 outtextxy(160,350,"or this ");
 outtextxy(160,250,"to");
 outtextxy(160,150,"to");
 circle(100,350,15);
 line(150,150,150,350);
 line(100,150,150,150);
 line(100,250,150,250);
 line(100,350,150,350);
 getch();
 cleardevice();
 drawbkg();
 setcolor(WHITE);
 outtextxy(200,210,"Remember... ");
 getch();
 outtextxy(200,230,"you can choose only one ");
 outtextxy(200,250,"pipe at a time.. ");
 getch();
 cleardevice();
 outtextxy(200,210,"Examples of some COMBOS are: ");
 getch();
 cleardevice();

 drawbkg();

 setcolor(WHITE);
 getch();
 outtextxy(200,200,"SO GET READY ! ! !");
 getch();
 cleardevice();
 drawbkg();
 outtextxy(200,200,"or should it be...");
 getch();
 cleardevice();
 drawbkg();
 outtextxy(200,200,"! ! GET PIPED UP ! !");
 sleep(1);
 outtextxy(200,250,"and if you're ready... ");
 getch();
 outtextxy(200,270,"test your skills.");
 getch();
 cleardevice();
 drawbkg();
 outtextxy(200,230,"G O O D  L U C K ! ! ! !");
 getch();

}

//________________________________________________________________
void win()             //if level is won
{
 cleardevice();
 setcolor(RED);
 settextstyle(2,0,9);
 outtextxy(300,200,"FIXED");
 score+=t1;
 gotoxy(4,4);
 cout<<"SCORE:"<<score;
 s1=0;s2=0;
 getch();
}

//_______________________________________________________
void los()              //if level is lost
{
 cleardevice();
 setcolor(RED);
 settextstyle(2,0,9);
 outtextxy(300,200,"FAIL");
 getch();
}

//_______________________________________________________
void drawbkg()             //draws background and tool bar for level
{
 P1.x1=30;P1.y1=50;P2.x1=30;P2.y1=120;P3.x1=30;P3.y1=250;P4.x1=30;P4.y1=320;
 setcolor(BLUE);
  line(100,0,100,600);//vertiline
  line(0,100,100,100);//sq1
  line(0,200,100,200);//sq2
  line(0,300,100,300);//sq3
  line(0,400,100,400);//sq4


 setcolor(BLUE);

 //in block 1 aross
 setfillstyle(1,LIGHTBLUE);
 rectangle(P1.x1,P1.y1,P1.x1+50,P1.y1+20);
 floodfill(P1.x1+1,P1.y1+1,BLUE);

 arc(P1.x1+40,P1.y1+10,150,210,20);
 arc(P1.x1+45,P1.y1+10,150,210,20);


 //in block 2 updown
 setfillstyle(1,LIGHTBLUE);
 rectangle(P2.x1,P2.y1,P2.x1+20,P2.y1+50);
 floodfill(P2.x1+1,P2.y1+1,BLUE);

 arc(P2.x1+10,P2.y1+40,60,120,20);
 arc(P2.x1+10,P2.y1+45,60,120,20);

 //in block 3 down

 if(winlvl>=5 )
 {
 P3.x1=30;P3.y1=250;             //3

 setfillstyle(1,LIGHTBLUE);
 rectangle(P3.x1,P3.y1,P3.x1+50,P3.y1+20);
 floodfill(P3.x1+1,P3.y1+1,BLUE);

 setfillstyle(1,LIGHTBLUE);
 rectangle(P3.x1+30,P3.y1-30,P3.x1+50,P3.y1);
 floodfill(P3.x1+31,P3.y1-29,BLUE);

 P4.x1=30;P4.y1=320;              //4
 setfillstyle(1,LIGHTBLUE);
 rectangle(P4.x1,P4.y1,P4.x1+50,P4.y1+20);
 floodfill(P4.x1+1,P4.y1+1,BLUE);

 setfillstyle(1,LIGHTBLUE);
 rectangle(P4.x1,P4.y1+20,P4.x1+20,P4.y1+50);
 floodfill(P4.x1+1,P4.y1+21,BLUE);

 }
 else
 {
 //in block 3
 setfillstyle(1,LIGHTBLUE);
 rectangle(P3.x1,P3.y1,P3.x1+50,P3.y1+20);
 floodfill(P3.x1+1,P3.y1+1,BLUE);


 setfillstyle(1,LIGHTBLUE);
 rectangle(P3.x1,P3.y1-30,P3.x1+20,P3.y1);
 floodfill(P3.x1+1,P3.y1-29,BLUE);

 setcolor(LIGHTBLUE);
 line(P3.x1+1,P3.y1,P3.x1+19,P3.y1);
 setcolor(BLUE);


 arc(P3.x1+10,P3.y1+5,60,120,20);
 arc(P3.x1+10,P3.y1+10,60,120,20);

 arc(P3.x1+50,P3.y1+10,150,210,20);
 arc(P3.x1+55,P3.y1+10,150,210,20);


 //in block 4 up
 setfillstyle(1,LIGHTBLUE);
 rectangle(P4.x1,P4.y1,P4.x1+50,P4.y1+20);
 floodfill(P4.x1+1,P4.y1+1,BLUE);

 setfillstyle(1,LIGHTBLUE);
 rectangle(P4.x1+30,P4.y1+20,P4.x1+50,P4.y1+50);
 floodfill(P4.x1+31,P4.y1+31,BLUE);

 arc(P4.x1+30,P4.y1+10,150,210,20);
 arc(P4.x1+35,P4.y1+10,150,210,20);

 arc(P4.x1+40,P4.y1+55,60,120,20);
 arc(P4.x1+40,P4.y1+60,60,120,20);


 }

 setcolor(RED);     //exit
 rectangle(570,0,610,20);
 line(570,0,610,20);
 line(610,0,570,20);

 setcolor(GREEN);    //retry
 rectangle(570,21,610,41);
 line(580,31,600,31);
 line(580,31,590,21);
 line(580,31,590,41);

 setcolor(WHITE);
 settextstyle(1,0,2);
 outtextxy(e,f,"!FLOW!");
 //********
 if(n1==0)
 {
  size_t q= imagesize(P1.x1,P1.y1,P1.x1+50,P1.y1+20); hori=malloc(q);
  size_t r= imagesize(P2.x1,P2.y1,P2.x1+20,P2.y1+50); verti=malloc(r);
  size_t s= imagesize(P3.x1,P3.y1-30,P3.x1+50,P3.y1+30); up=malloc(s);
  size_t t= imagesize(P4.x1,P4.y1,P4.x1+50,P4.y1+50); down=malloc(t);
  n1=1;
 }
}

//_______________________________________________________________
void pickp()              //works to select pipe
{
 if(bx==1)
 {

  if(cx>=P1.x1&&dx>=P1.y1&&cx<=P1.x1+50&&dx<=P1.y1+20)
   {
    hidemouse();
    getimage(P1.x1,P1.y1,P1.x1+50,P1.y1+20,hori);
    showmouse();
    bx=0;
    P1.sel=1;
    return;
   }
  if(cx>=P2.x1&&dx>=P2.y1&&cx<=P2.x1+20&&dx<=P2.y1+50)
   {
    hidemouse();
    getimage(P2.x1,P2.y1,P2.x1+20,P2.y1+50,verti);
    showmouse();
    bx=0;
    P2.sel=1;
    return;
   }
 if(cx>=P3.x1&&dx>=P3.y1-30&&cx<=P3.x1+50&&dx<=P3.y1+30)
   {
    hidemouse();
    getimage(P3.x1,P3.y1-30,P3.x1+50,P3.y1+20,up);
    showmouse();
    bx=0;
    P3.sel=1;
    return;
   }
 if(cx>=P4.x1&&dx>=P4.y1&&cx<=P4.x1+50&&dx<=P4.y1+50)
  {
    hidemouse();
    getimage(P4.x1,P4.y1,P4.x1+50,P4.y1+50,down);
    showmouse();
    bx=0;
    P4.sel=1;
    return;
  }
 }
}
//________________________________________________________________
void putp()                  //works to put the pipe
{
 if(winlvl>=5)
 {
  if(bx==1)
   if(cx>=100&&dx>=0)
  {
  if(P1.sel==1)
   {
    hidemouse();
    putimage(g,h,hori,COPY_PUT);
    showmouse();
    P1.sel=0;
    bx=0;
    g+=50;

   }
  if(P2.sel==1)
   {
    hidemouse();
    putimage(g,h,verti,COPY_PUT);
    showmouse();
    P2.sel=0;
    bx=0;
    h-=50;
   }
  if(P3.sel==1)
   {
    h-=30;
    hidemouse();
    putimage(g,h,up,COPY_PUT);
    showmouse();
    P3.sel=0;
    bx=0;
    g+=30;h-=50;
   }
  if(P4.sel==1)
   {
    hidemouse();
    putimage(g,h,down,COPY_PUT);
    showmouse();
    P4.sel=0;
    bx=0;
    g+=50;

   }

  }


 }

 else
 {
if(bx==1)
 if(cx>=100&&dx>=0)
  {
  if(P1.sel==1)
   {
    hidemouse();
    putimage(g,h,hori,COPY_PUT);
    showmouse();
    P1.sel=0;
    bx=0;
    g+=50;
   }
  if(P2.sel==1)
   {
    hidemouse();
    putimage(g,h,verti,COPY_PUT);
    showmouse();
    P2.sel=0;
    bx=0;
    h+=50;
   }
  if(P3.sel==1)
   {
    hidemouse();
    putimage(g,h,up,COPY_PUT);
    showmouse();
    P3.sel=0;
    bx=0;
    g+=50;h+=30;
   }
  if(P4.sel==1)
   {
    hidemouse();
    putimage(g,h,down,COPY_PUT);
    showmouse();
    P4.sel=0;
    bx=0;
    g+=30;h+=50;
   }

  }
  }
}

//________________________________________________________________
void flow() //for flow of water
{
 hidemouse();
 if(winlvl>=5)
 {
 {
  s3=s1;
  c1=getpixel(s1-1,s2);
  c2=getpixel(s1,s2-1);
  c3=getpixel(s3+1,s2);
   r=getpixel(s1,s2);
 while(r==1||r==9)
 {
  w=0;

  if((c1==1||c1==9)&&(c2==1||c2==9)) //coverup
     {
      w=0;
      s3=s1;
      y2=s2;
      for(y1=0;y1<20;++y1,++s3)
      {
       x2=s2;
       while(w<20)
       {
	putpixel(s3,s2,BLUE);
	s2++;
	w++;

       }
       delay(5);
       w=0;
       s2=x2;
      }
      s2=y2;
     }

   if(c2==1||c2==9)
   {
    x1=s1;
    while(c2==1||c2==9)
    {
     putpixel(s1,s2,BLUE);
     s1++;
     c2=getpixel(s1,s2);
     w++;
     if(w>20)
      break;
    }
    s1=x1;
    --s2;

   }


  else
   {
    x2=s2;
    s2=s2+20;
    while(c3==1||c3==9)
    {
     putpixel(s3,s2,BLUE);
     s2--;
     c3=getpixel(s3,s2);
     w++;

     if(w>20)
      break;
    }
    s2=x2;
    ++s3;
    s1=s3;
   }



  c1=getpixel(s1-1,s2);
  c2=getpixel(s1,s2-1);
  c3=getpixel(s1+1,s2);
  r=getpixel(s1,s2);
  delay(8);
  ch1=s1;
  ch2=s2;
 }
 }
 }

else
 {
  s3=s1;
  c1=getpixel(s1-1,s2);
  c2=getpixel(s1,s2+1);
  c3=getpixel(s3+1,s2);
   r=getpixel(s1,s2);
 while(r==1||r==9)
 {
  w=0;
  if((c1==1||c1==9)&&(c2==1||c2==9)) //coverup
     {
      w=0;
      s3=s1;
      y2=s2;
      for(y1=0;y1<20;++y1,++s3)
      {
       x2=s2;
       while(w<20)
       {
	putpixel(s3,s2,BLUE);
	--s2;
	w++;
       }
       delay(5);
       w=0;
       s2=x2;
      }
      s2=y2;
     }

  if(c2==1||c2==9)
   {
    x1=s1;
    while(c2==1||c2==9)
    {
     putpixel(s1,s2,BLUE);
     s1++;
     c2=getpixel(s1,s2);
     w++;
     if(w>20)
      break;
    }
    s1=x1;
    ++s2;
   }
   else
   {
    x2=s2;
    s2=s2-20;
    while(c1==1||c1==9)
    {

     putpixel(s1,s2,BLUE);
     s2++;
     c1=getpixel(s1,s2);
     w++;
     if(w>20)
      break;
    }
    s2=x2;
    ++s1;
   }
  c1=getpixel(s1-1,s2);
  c2=getpixel(s1,s2+1);
  c3=getpixel(s1+1,s2);
  r=getpixel(s1,s2);
  delay(8);
  ch1=s1;
  ch2=s2;

 }
}
  showmouse();

}
//_________________________________________________________________
void lvl()
{

  clock_t start, end;
  start = clock();
  t1=60;



 g=b1;h=b2;
 changemouse(9);
 while(1)
 {
  showmouse();
  setmouselimit();
  getstatus();


 if(bx==1)
  if(cx>570&&dx>21&&cx<610&&dx<41) //retry
    retry();

  if(t1<=0)
    {
     lose=0;
     los();
     cleardevice();
     settextstyle(2,0,9);
     outtextxy(300,200,"FAIL");
     getch();
     cleardevice();
     settextstyle(2,0,9);
     outtextxy(300,200,"GAMEOVER");
     for(int fill1=getmaxy();fill1>=0;fill1--)
      for(int fill2=0;fill2<=getmaxx();fill2++)
	putpixel(fill2,fill1,BLUE);

     getch();
     exit(0);
    }
   end = clock();
   gotoxy(60,1);
   cout<<"TIME: "<<(int)t1<<" ";
   switch(winlvl)
   {
    case 1: t1=(200 - ((end - start) / CLK_TCK));break;
    case 2: t1=(150 - ((end - start) / CLK_TCK));break;
    case 3: t1=(100 - ((end - start) / CLK_TCK));break;
    case 4: t1=(90 - ((end - start) / CLK_TCK));break;
    case 5: t1=(90 - ((end - start) / CLK_TCK));break;
    case 6: t1=(60 - ((end - start) / CLK_TCK));break;
    case 7: t1=(30 - ((end - start) / CLK_TCK));break;
   }
 if(cx>0&&dx>400&&cx<100&&dx<500)
  { setcolor(BLUE);
    settextstyle(1,0,2);
    outtextxy(e,f,"!FLOW!");}
    setcolor(WHITE);
    settextstyle(1,0,2);
    outtextxy(e,f,"!FLOW!");
 if(check==0)
 {

 if(winlvl==1)
  {g=160;h=30;setbkcolor(0);}
 if(winlvl==2)
  {g=150;h=50;setbkcolor(3);}
 if(winlvl==3)
  {g=150;h=50;setbkcolor(3);}
 if(winlvl==4)
  {g=150;h=30;setbkcolor(0);}
 if(winlvl==5)
  {g=110;h=300;setbkcolor(0);}
 if(winlvl==6)
  {g=150;h=350;setbkcolor(3);}
 if(winlvl==7)
  {g=150;h=320;setbkcolor(0);}
 check=1;
 }

 pickp();
 putp();
 if(winlvl==1)
 {
   setcolor(YELLOW);
   line(520,0,520,480);
   line(521,0,521,480);
   line(522,0,522,480);
   line(523,0,523,480);
   setcolor(YELLOW);
   co1=200;
   co2=200;
   setfillstyle(1,BROWN);
   bar3d(co1,co2,co1+30,co2+80,10,0);
   bar3d(co1,co2,co1+30,co2+140,10,0);
   bar3d(co1,co2,co1+30,co2-80,10,1);
   bar3d(co1+30,co2-80,co1+70,co2-45,10,1);
   bar3d(co1+100,co2-80,co1+70,co2-45,10,1);
   bar3d(co1+100,co2-50,co1+70,co2,10,0);
   bar3d(co1+30,co2,co1+100,co2+35,10,1);

 }
 if(winlvl==2)
 {
   setcolor(YELLOW);
   setfillstyle(1,BROWN);
   bar3d(co1,co2,co1+30,co2+30,10,1);
   bar3d(co1,co2-40,co1+30,co2-10,10,1);
   bar3d(co1,co2+30,co1+30,co2+60,10,1);
   bar3d(co1,co2+60,co1+30,co2+90,10,1);
   bar3d(co1,co2+90,co1+30,co2+130,10,1);
 }
 if(winlvl==3)//lvl 3 obstacles
 {
   setcolor(YELLOW);
   co1=450;
   co2=250;
   setfillstyle(1,BROWN);
   bar3d(co1,co2,co1+30,co2+80,10,0);
   bar3d(co1,co2,co1+30,co2+140,10,0);
   bar3d(co1,co2,co1+30,co2-80,10,1);
   bar3d(co1+30,co2-80,co1+70,co2-45,10,1);
   bar3d(co1+100,co2-80,co1+70,co2-45,10,1);
   bar3d(co1+100,co2-50,co1+70,co2,10,0);
   bar3d(co1+30,co2,co1+100,co2+35,10,1);

  circle(300,420,25);
  arc(300,455,50,130,40);
  arc(300,393,230,310,40);
  setfillstyle(1,BROWN);
  bar3d(280,450,280+30,450+30,8,1);
  circle(350,100,65);
  arc(350,175,50,130,100);
  arc(350,20,230,310,100);


 co1-=200;
 setfillstyle(1,GREEN);
 bar3d(co1,co2,co1+30,co2+100,10,1);
 bar3d(co1-40,co2,co1-10,co2+100,10,1);
 bar3d(co1-80,co2,co1-50,co2+100,10,1);


  setcolor(BLUE);
 }
 if(winlvl==4)//lvl 4 obstacles
 {
  setfillstyle(1,BROWN);
  co1=130,co2=90;
  for(ct=4;ct>0;ct--)
  {
   setcolor(YELLOW);
   for(ut=4;ut>0;ut--)
   {
    bar3d(co1,co2,co1+30,co2+30,8,1);		    //l=30,P2.y1=30
    co1+=90;
   }
  co2+=100;
  co1=130;
  }

 }
 if(winlvl==5)//lvl 4 obstacles
 {
  setcolor(YELLOW);

   setfillstyle(1,BLUE);
   bar3d(co1,co2,co1+30,co2+60,10,1);               //l=30,b=30  bar3d
   bar3d(co1,co2,co1+30,co2-60,10,1);               //l=30,b=30  bar3d
   bar3d(co1,co2-25,co1+80,co2-60,10,1);               //l=30,b=30  bar3d
   bar3d(co1+80,co2-25,co1+130,co2-60,10,1);               //l=30,b=30  bar3d
   bar3d(co1+100,co2-25,co1+130,co2+40,10,0);               //l=30,b=30  bar3d
   bar3d(co1+30,co2+20,co1+130,co2+55,10,1);               //l=30,b=30  bar3d
   bar3d(co1,co2+30,co1+30,co2+90,10,0);               //l=30,b=30  bar3d
   bar3d(co1,co2+90,co1+130,co2+120,10,1);               //l=30,b=30  bar3d
 setfillstyle(1,LIGHTGRAY);
 bar3d(300,220,340,290,8,0);
 bar3d(300,290,340,360,8,0);
 bar3d(300,360,340,430,8,0);
 bar3d(300,430,340,500,8,0);

 bar3d(300,180,370,220,8,1);
 bar3d(370,180,440,220,8,1);
 bar3d(440,180,510,220,8,1);
 bar3d(510,180,580,220,8,1);

 }
 if(winlvl==6)
 {
   co1=350;
   co2=350;

   setcolor(YELLOW);

   setfillstyle(1,BROWN);
   bar3d(co1,co2,co1+30,co2+60,10,1);               //l=30,b=30  bar3d
   bar3d(co1,co2,co1+30,co2-60,10,1);               //l=30,b=30  bar3d
   bar3d(co1,co2-25,co1+80,co2-60,10,1);               //l=30,b=30  bar3d
   bar3d(co1+80,co2-25,co1+130,co2-60,10,1);               //l=30,b=30  bar3d
   bar3d(co1,co2+30,co1+30,co2+90,10,0);               //l=30,b=30  bar3d
   bar3d(co1,co2+90,co1+130,co2+120,10,1);               //l=30,b=30  bar3d
   bar3d(co1+110,co2,co1+140,co2+120,10,1);               //l=30,b=30  bar3d
   bar3d(co1+110,co2,co1+140,co2-220,10,1);               //l=30,b=30  bar3d

   co1=230;
   co2=120;

   setfillstyle(1,RED);
   bar3d(co1,co2,co1+30,co2+30,8,1);	      //l=30,b=30  bar3d
   bar3d(co1,co2+40,co1+30,co2+70,8,1);	      //l=30,b=30  bar3d
   bar3d(co1,co2+80,co1+30,co2+110,8,1);	      //l=30,b=30  bar3d
   bar3d(co1,co2+120,co1+30,co2+150,8,1);	      //l=30,b=30  bar3d
   bar3d(co1+40,co2,co1+70,co2+30,8,1);	      //l=30,b=30  bar3d
   bar3d(co1+40,co2+40,co1+70,co2+70,8,1);	      //l=30,b=30  bar3d
   bar3d(co1+40,co2+80,co1+70,co2+110,8,1);	      //l=30,b=30  bar3d
   bar3d(co1+40,co2+120,co1+70,co2+150,8,1);	      //l=30,b=30  bar3d

   bar3d(co1+80,co2,co1+110,co2+30,8,1);	      //l=30,b=30  bar3d
   bar3d(co1+80,co2+40,co1+110,co2+70,8,1);	      //l=30,b=30  bar3d
   bar3d(co1+80,co2+80,co1+110,co2+110,8,1);	      //l=30,b=30  bar3d
   bar3d(co1+80,co2+120,co1+110,co2+150,8,1);	      //l=30,b=30  bar3d


 }
/* if(winlvl==7)
 {
  co1=400;
  co2=300;
   setcolor(YELLOW);
   randomize();
   for(int i=0;i<10;i++)
   {                                            //rand
    co1=ab+100;
    co2=ac;
   setfillstyle(1,i);
   bar3d(co1,co2,co1+30,co2+80,10,1);
   floodfill(co1+1,co2+1,YELLOW);
   }

 }*/
 setcolor(BLUE);
 if(cx>0&&dx>400&&cx<100&&dx<500)
  if(bx==1)
   {
    flow();

    if(winlvl==1)
    {
     if(s1>=490&&s2>=380)//&&s1<=510&&s2<=450)
       break;
     else
      {lose=0;los();retry();}
    }
    if(winlvl==2)
    {
     if(s1>=410&&s2>=460)
       break;
     else
      {lose=0;los();retry();}
    }
    if(winlvl==3)
    {
     if(s1>=630&&s2>=460)
      break;
     else
      {lose=0;los();retry();}
    }
    if(winlvl==4)
    {
     if(s1>=480&&s2>=360)
       break;
     else
      {lose=0;los();retry();}
    }
    if(winlvl==5)
    {
     if(s1>=470&&s2>=90)
       break;
     else
      {lose=0;los();retry();}
    }
    if(winlvl==6)
    {
     if(s1>=540&&s2>=70)
       break;
     else
      {lose=0;los();retry();}
    }
    if(winlvl==7)
    {
     if(s1>=470&&s2>=90)
       break;
     else
      {lose=0;los();}
    }
    bx=0;
   }

 if(bx==1)
  if(cx>570&&dx>0&&cx<610&&dx<20) //exit
   break;
 }
 if(winlvl==1)
 {
  if(s1>=490&&s2>=380)
    {win();winlvl=2;}
 }
 if(winlvl==2)
 {
  if(s1>=410&&s2>=460)
   {win();winlvl=3;}
 }
 if(winlvl==3)
 {
  if(s1>=630&&s2>=460)
   {win();winlvl=4;}
 }
 if(winlvl==4)
 {
  if(s1>=480&&s2>=360)
   {win();winlvl=5;}
 }
 if(winlvl==5)
 {
  if(s1>=470&&s2>=90)
   {win();winlvl=6;}
 }
 if(winlvl==6)
 {
 if(s1>=540&&s2>=70)
  {win();winlvl=7;}
 }
 if(winlvl==7)
 {
 if(s1>=540&&s2>=70)
  {win();winlvl=8;}
 }
}
//________________________________________________________________
//level designs
void drlvl1()
{
 drawbkg();

   setcolor(YELLOW);
   co1=200;
   co2=200;
   setfillstyle(1,BROWN);
   bar3d(co1,co2,co1+30,co2+80,10,0);               //l=30,b=30  bar3d
   floodfill(co1+1,co2+1,YELLOW);
   setfillstyle(1,BROWN);
   bar3d(co1,co2,co1+30,co2+140,10,0);               //l=30,b=30  bar3d
   floodfill(co1+1,co2+1,YELLOW);
   setfillstyle(1,BROWN);
   bar3d(co1,co2,co1+30,co2-80,10,1);               //l=30,b=30  bar3d
   floodfill(co1+1,co2-1,YELLOW);
   setfillstyle(1,BROWN);
   bar3d(co1+30,co2-80,co1+70,co2-45,10,1);               //l=30,b=30  bar3d
   floodfill(co1+1,co2+1,YELLOW);
   setfillstyle(1,BROWN);
   bar3d(co1+100,co2-80,co1+70,co2-45,10,1);               //l=30,b=30  bar3d
   floodfill(co1+1,co2+1,YELLOW);
   setfillstyle(1,BROWN);
   bar3d(co1+100,co2-50,co1+70,co2,10,0);               //l=30,b=30  bar3d
   floodfill(co1+1,co2+1,YELLOW);
   setfillstyle(1,BROWN);
   bar3d(co1+30,co2,co1+100,co2+35,10,1);               //l=30,b=30  bar3d
   floodfill(co1+1,co2+1,YELLOW);


 setcolor(YELLOW);
 line(520,0,520,480);
 line(521,0,521,480);
 line(522,0,522,480);
 line(523,0,523,480);


 setcolor(BLUE);
 setfillstyle(1,LIGHTBLUE);
 rectangle(120,0,140,50); //start
 floodfill(121,1,BLUE);
 setfillstyle(1,LIGHTBLUE);
 rectangle(140,30,160,50); //start
 floodfill(141,36,BLUE);

 setfillstyle(1,LIGHTBLUE);
 rectangle(490,380,510,430); //finish
 floodfill(491,381,BLUE);

 setcolor(CYAN);
 setfillstyle(1,CYAN);
 rectangle(470,430,500,440); //finish
 floodfill(471,431,CYAN);

 setcolor(BLUE);




 s1=120;
 s2=0;
}
//_________________________________________________________________
void drlvl2()
{
 drawbkg();
 co1=270;
 co2=190;
   setcolor(YELLOW);
   setfillstyle(1,BROWN);
   bar3d(co1,co2,co1+30,co2+30,10,1);               //l=30,b=30  bar3d
   floodfill(co1+1,co2+1,YELLOW);
   setfillstyle(1,BROWN);
   bar3d(co1,co2-40,co1+30,co2-10,10,1);               //l=30,b=30  bar3d
   floodfill(co1+1,co2+1,YELLOW);
   setfillstyle(1,BROWN);
   bar3d(co1,co2+30,co1+30,co2+60,10,1);               //l=30,b=30  bar3d
   floodfill(co1+1,co2+1,YELLOW);
   setfillstyle(1,BROWN);
   bar3d(co1,co2+60,co1+30,co2+90,10,1);               //l=30,b=30  bar3d
   floodfill(co1+1,co2+1,YELLOW);
   setfillstyle(1,BROWN);
   bar3d(co1,co2+90,co1+30,co2+130,10,1);               //l=30,b=30  bar3d
   floodfill(co1+1,co2+1,YELLOW);


 setcolor(BLUE);
 setfillstyle(1,LIGHTBLUE);
 rectangle(150,0,170,50); //start
 floodfill(151,1,BLUE);

 setfillstyle(1,LIGHTBLUE);
 rectangle(410,440,460,460);  //finish
 floodfill(421,451,BLUE);



 line(160,0,160,50);
 line(410,450,460,450);

 setcolor(CYAN);
 setfillstyle(1,CYAN);
 rectangle(460,410,465,470);
 floodfill(461,411,CYAN);

 s1=150;
 s2=0;

}
//_____________________________________________________________

void drlvl3()
{
 drawbkg();
  setcolor(YELLOW);
   co1=450;
   co2=250;
   setfillstyle(1,BROWN);
   bar3d(co1,co2,co1+30,co2+80,10,0);               //l=30,b=30  bar3d
   floodfill(co1+1,co2+1,YELLOW);
   setfillstyle(1,BROWN);
   bar3d(co1,co2,co1+30,co2+140,10,0);               //l=30,b=30  bar3d
   floodfill(co1+1,co2+1,YELLOW);
   setfillstyle(1,BROWN);
   bar3d(co1,co2,co1+30,co2-80,10,1);               //l=30,b=30  bar3d
   floodfill(co1+1,co2-1,YELLOW);
   setfillstyle(1,BROWN);
   bar3d(co1+30,co2-80,co1+70,co2-45,10,1);               //l=30,b=30  bar3d
   floodfill(co1+1,co2+1,YELLOW);
   setfillstyle(1,BROWN);
   bar3d(co1+100,co2-80,co1+70,co2-45,10,1);               //l=30,b=30  bar3d
   floodfill(co1+1,co2+1,YELLOW);
   setfillstyle(1,BROWN);
   bar3d(co1+100,co2-50,co1+70,co2,10,0);               //l=30,b=30  bar3d
   floodfill(co1+1,co2+1,YELLOW);
   setfillstyle(1,BROWN);
   bar3d(co1+30,co2,co1+100,co2+35,10,1);               //l=30,b=30  bar3d
   floodfill(co1+1,co2+1,YELLOW);



 setfillstyle(1,LIGHTBLUE);
 circle(300,420,25);
 arc(300,455,50,130,40);
 arc(300,393,230,310,40);
 floodfill(300,420,YELLOW);
 setfillstyle(1,BLUE);
 floodfill(300,435,YELLOW);
 setfillstyle(1,BROWN);
 bar3d(280,450,280+30,450+30,8,1);
 floodfill(281,451,YELLOW);

 co1-=200;

 setfillstyle(1,GREEN);
 bar3d(co1,co2,co1+30,co2+100,10,1);               //l=30,b=30  bar3d
 floodfill(co1+1,co2+1,YELLOW);

 setfillstyle(1,GREEN);
 bar3d(co1-40,co2,co1-10,co2+100,10,1);               //l=30,b=30  bar3d
 floodfill(co1+1,co2+1,YELLOW);
 setfillstyle(1,GREEN);
 bar3d(co1-80,co2,co1-50,co2+100,10,1);               //l=30,b=30  bar3d
 floodfill(co1+1,co2+1,YELLOW);


 setfillstyle(1,LIGHTBLUE);
 circle(350,100,65);
 arc(350,175,50,130,100);
 arc(350,20,230,310,100);
 floodfill(350,100,YELLOW);
 setfillstyle(1,BLUE);
 floodfill(350,130,YELLOW);


 setcolor(BLUE);
 setfillstyle(1,LIGHTBLUE);
 rectangle(150,0,170,50); //start
 floodfill(151,1,BLUE);

 setfillstyle(1,LIGHTBLUE);
 rectangle(580,460,630,480);  //finish
 floodfill(581,461,BLUE);

 s1=150;
 s2=0;

}
//_____________________________________________________________

void drlvl4()
{
 drawbkg();
 setcolor(YELLOW);
 for(ct=4;ct>0;ct--)
 {
  for(ut=4;ut>0;ut--)
  {
   setfillstyle(1,BROWN);
   bar3d(co1,co2,co1+30,co2+30,8,1);	      //l=30,b=30  bar3d
   floodfill(co1+1,co2+1,YELLOW);
   co1+=90;
  }
  co2+=100;
  co1=130;
 }

 setcolor(BLUE);
 setfillstyle(1,LIGHTBLUE);
 rectangle(450,340,480,360); //finish
 floodfill(451,341,BLUE);

 setfillstyle(1,LIGHTBLUE);
 rectangle(110,0,130,50); //start
 floodfill(111,1,BLUE);
 setfillstyle(1,LIGHTBLUE);
 rectangle(130,30,150,50); //start
 floodfill(131,31,BLUE);

 s1=110;
 s2=0;
}
//_____________________________________________________________
void drlvl5()
{

   co1=400;
   co2=300;
   setcolor(YELLOW);

   setfillstyle(1,BROWN);
   bar3d(co1,co2,co1+30,co2+60,10,1);               //l=30,b=30  bar3d
   floodfill(co1+1,co2+1,YELLOW);
   bar3d(co1,co2,co1+30,co2-60,10,1);               //l=30,b=30  bar3d
   floodfill(co1+1,co2+1,YELLOW);
   bar3d(co1,co2-25,co1+80,co2-60,10,1);               //l=30,b=30  bar3d
   floodfill(co1+1,co2+1,YELLOW);
   bar3d(co1+80,co2-25,co1+130,co2-60,10,1);               //l=30,b=30  bar3d
   floodfill(co1+1,co2+1,YELLOW);
   bar3d(co1+100,co2-25,co1+130,co2+40,10,0);               //l=30,b=30  bar3d
   floodfill(co1+1,co2+1,YELLOW);
   bar3d(co1+30,co2+20,co1+130,co2+55,10,1);               //l=30,b=30  bar3d
   floodfill(co1+1,co2+1,YELLOW);
   bar3d(co1,co2+30,co1+30,co2+90,10,0);               //l=30,b=30  bar3d
   floodfill(co1+1,co2+1,YELLOW);
   bar3d(co1,co2+90,co1+130,co2+120,10,1);               //l=30,b=30  bar3d
   floodfill(co1+1,co2+1,YELLOW);



 setcolor(YELLOW);
 setfillstyle(1,LIGHTGRAY);
 bar3d(300,220,340,290,8,0);
 floodfill(301,221,YELLOW);
 bar3d(300,290,340,360,8,0);
 floodfill(301,291,YELLOW);
 bar3d(300,360,340,430,8,0);
 floodfill(301,361,YELLOW);
 bar3d(300,430,340,500,8,0);
 floodfill(301,431,YELLOW);

 bar3d(300,180,370,220,8,1);
 floodfill(301,181,YELLOW);
 bar3d(370,180,440,220,8,1);
 floodfill(371,181,YELLOW);
 bar3d(440,180,510,220,8,1);
 floodfill(441,181,YELLOW);
 bar3d(510,180,580,220,8,1);
 floodfill(511,181,YELLOW);





 setcolor(BLUE);
 setfillstyle(1,LIGHTBLUE);
 rectangle(110,350,130,400);        //start
 floodfill(111,351,BLUE);

 setfillstyle(1,BROWN);
 rectangle(110,400,130,410);
 floodfill(111,401,BLUE);            //start

 setfillstyle(1,LIGHTBLUE);
 rectangle(420,90,470,110);        //finish
 floodfill(421,101,BLUE);

 setfillstyle(1,BROWN);
 rectangle(470,90,480,110);        //finish
 floodfill(471,101,BLUE);


 drawbkg();
 s1=110;
 s2=400;


}
//_____________________________________________________________

void drlvl6()
{

   co1=350;
   co2=350;
   setcolor(YELLOW);

   setfillstyle(1,BROWN);
   bar3d(co1,co2,co1+30,co2+60,10,1);               //l=30,b=30  bar3d
   floodfill(co1+1,co2+1,YELLOW);
   bar3d(co1,co2,co1+30,co2-60,10,1);               //l=30,b=30  bar3d
   floodfill(co1+1,co2+1,YELLOW);
   bar3d(co1,co2-25,co1+80,co2-60,10,1);               //l=30,b=30  bar3d
   floodfill(co1+1,co2+1,YELLOW);
   bar3d(co1+80,co2-25,co1+130,co2-60,10,1);               //l=30,b=30  bar3d
   floodfill(co1+1,co2+1,YELLOW);
   bar3d(co1,co2+30,co1+30,co2+90,10,0);               //l=30,b=30  bar3d
   floodfill(co1+1,co2+1,YELLOW);
   bar3d(co1,co2+90,co1+130,co2+120,10,1);               //l=30,b=30  bar3d
   floodfill(co1+1,co2+1,YELLOW);
   bar3d(co1+110,co2,co1+140,co2+120,10,1);               //l=30,b=30  bar3d
   floodfill(co1+1,co2+1,YELLOW);
   bar3d(co1+110,co2,co1+140,co2-220,10,1);               //l=30,b=30  bar3d
   floodfill(co1+1,co2+1,YELLOW);
   co1=230;
   co2=120;
   setfillstyle(1,RED);
   bar3d(co1,co2,co1+30,co2+30,8,1);	      //l=30,b=30  bar3d
   floodfill(co1+1,co2+1,YELLOW);
   setfillstyle(1,RED);
   bar3d(co1,co2+40,co1+30,co2+70,8,1);	      //l=30,b=30  bar3d
   floodfill(co1+1,co2+1,YELLOW);
   setfillstyle(1,RED);
   bar3d(co1,co2+80,co1+30,co2+110,8,1);	      //l=30,b=30  bar3d
   floodfill(co1+1,co2+1,YELLOW);
   bar3d(co1,co2+120,co1+30,co2+150,8,1);	      //l=30,b=30  bar3d
   floodfill(co1+1,co2+1,YELLOW);

   setfillstyle(1,RED);
   bar3d(co1+40,co2,co1+70,co2+30,8,1);	      //l=30,b=30  bar3d
   floodfill(co1+41,co2+1,YELLOW);
   setfillstyle(1,RED);
   bar3d(co1+40,co2+40,co1+70,co2+70,8,1);	      //l=30,b=30  bar3d
   floodfill(co1+41,co2+1,YELLOW);
   setfillstyle(1,RED);
   bar3d(co1+40,co2+80,co1+70,co2+110,8,1);	      //l=30,b=30  bar3d
   floodfill(co1+41,co2+1,YELLOW);
   bar3d(co1+40,co2+120,co1+70,co2+150,8,1);	      //l=30,b=30  bar3d
   floodfill(co1+41,co2+1,YELLOW);

   setfillstyle(1,RED);
   bar3d(co1+80,co2,co1+110,co2+30,8,1);	      //l=30,b=30  bar3d
   floodfill(co1+81,co2+1,YELLOW);
   setfillstyle(1,RED);
   bar3d(co1+80,co2+40,co1+110,co2+70,8,1);	      //l=30,b=30  bar3d
   floodfill(co1+81,co2+1,YELLOW);
   setfillstyle(1,RED);
   bar3d(co1+80,co2+80,co1+110,co2+110,8,1);	      //l=30,b=30  bar3d
   floodfill(co1+81,co2+1,YELLOW);
   bar3d(co1+80,co2+120,co1+110,co2+150,8,1);	      //l=30,b=30  bar3d
   floodfill(co1+81,co2+1,YELLOW);


   co1=350;
   co2=350;




 setcolor(BLUE);
 setfillstyle(1,LIGHTBLUE);
 rectangle(110,350,130,400);        //start
 floodfill(111,351,BLUE);

 setfillstyle(1,LIGHTBLUE);
 rectangle(130,350,150,370);        //start
 floodfill(131,351,BLUE);

 setfillstyle(1,BROWN);
 rectangle(110,400,130,410);
 floodfill(111,401,BLUE);            //start


 setfillstyle(1,LIGHTBLUE);
 rectangle(540,70,590,90);        //finish
 floodfill(541,71,BLUE);

 setfillstyle(1,BROWN);
 rectangle(590,70,600,90);        //finish
 floodfill(591,71,BLUE);

 drawbkg();
 s1=110;
 s2=400;

}

//_____________________________________________________________
void drlvl7()
{
  co1=400;
  co2=300;
   setcolor(YELLOW);
   randomize();
   for(int i=0;i<10;i++)
   {                                            //rand
     ab=random(getmaxx());
     ac=random(getmaxy());
    co1=ab+100;
    co2=ac;
   setfillstyle(1,i);
   bar3d(co1,co2,co1+30,co2+80,10,1);
   floodfill(co1+1,co2+1,YELLOW);
   }



 setcolor(BLUE);

 setfillstyle(1,LIGHTBLUE);
 rectangle(110,320,130,370);        //start
 floodfill(111,321,BLUE);

 setfillstyle(1,LIGHTBLUE);
 rectangle(130,320,150,340);        //start
 floodfill(131,321,BLUE);

 setfillstyle(1,LIGHTBLUE);
 rectangle(530,240,580,260);        //finish
 floodfill(531,241,BLUE);

 setfillstyle(1,BROWN);
 rectangle(580,240,590,260);        //finish
 floodfill(581,241,BLUE);

 drawbkg();
 s1=110;
 s2=370;



}
//_______________________________________________________________
void game()
{
 setbkcolor(0);
 if(winlvl==0)
 {
  cleardevice();
  setcolor(RED);
  settextstyle(2,0,6);
  outtextxy(300,200,"PLUMBERS CLASS");
  getch();
  cleardevice();
  tutorial();

 }

 if(winlvl==1)
 {
  cleardevice();
  setcolor(RED);
  settextstyle(2,0,9);
  outtextxy(300,200,"UNIT 1");
  getch();
  cleardevice();
  retry();
  b1=160;b2=30; //starting points fr putting pipes
  lvl();
 }
 if(winlvl==2)
 {
  cleardevice();
  settextstyle(2,0,9);
  outtextxy(300,200,"UNIT 2");
  getch();
  cleardevice();
  retry();
  b1=150;b2=50;
  lvl();
 }
 if(winlvl==3)
 {
  cleardevice();
  settextstyle(2,0,9);
  outtextxy(300,200,"UNIT 3");
  getch();
  cleardevice();
  retry();
  b1=150;b2=50;
  lvl();
 }
 if(winlvl==4)
 {
  cleardevice();
  settextstyle(2,0,9);
  outtextxy(300,200,"UNIT 4");
  getch();
  cleardevice();
  retry();
  b1=110;b2=0;
  lvl();
 }
 if(winlvl==5)
 {
  cleardevice();
  settextstyle(2,0,9);
  outtextxy(300,200,"UNIT 5");
  getch();
  cleardevice();
  retry();
  b1=110;b2=0;
  lvl();
 }
 if(winlvl==6)
 {
  cleardevice();
  settextstyle(2,0,9);
  outtextxy(300,200,"UNIT 6");
  getch();
  cleardevice();
  retry();
  b1=110;b2=0;
  lvl();
 }
 if(winlvl==7)
 {
  cleardevice();
  settextstyle(2,0,9);
  outtextxy(300,200,"UNIT 7");
  getch();
  cleardevice();
  retry();
  b1=110;b2=0;
  lvl();
 }
}

//////////////////////main///////////////////////////////////

main()
{
 clrscr();
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"D:\\BGI");
 start();
 menu();
}


