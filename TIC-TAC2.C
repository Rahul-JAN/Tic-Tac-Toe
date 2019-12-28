#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>

int midx,midy,i;
int l[10]={0,0,0,0,0,0,0,0,0,0};

void structure();
int win();
void show();
void startup();

int main()
{
	int gd=0,gm,n,k,c=0;
	int s[11];
	char j,v;
	initgraph(&gd,&gm,"../bgi");
	midx=getmaxx()/2;
	midy=getmaxy()/2;

	startup();
	structure();

	outtextxy(midx-35,midy-35,"1");
	outtextxy(midx-5,midy-35,"2");
	outtextxy(midx+35,midy-35,"3");
	outtextxy(midx-35,midy-5,"4");
	outtextxy(midx-5,midy-5,"5");
	outtextxy(midx+35,midy-5,"6");
	outtextxy(midx-35,midy+35,"7");
	outtextxy(midx-5,midy+35,"8");
	outtextxy(midx+35,midy+35,"9");
	outtextxy(240,400,"PRESS ANY KEY TO PLAY");
	getch();
	cleardevice();
	outtextxy(midx-230,100,"PLAYER FIRST (X)");
	outtextxy(midx+100,100,"PLAYER SECOND (0)");
	for(i=1;i<=10;i++)
	{
	  if(i>4)
	  {
	    c=win();
	  }
	  if(c)
	  {
	    break;
	  }
	  again:
	  structure();

	  if(i<=9)
	  {

	    if(i%2!=0)
	    {
	      outtextxy(50,400,"PLAYER FIRST ENTER A NUMBER:");
	      v=getch();
	      n=v-48;
	    }

	    else
	    {
	      outtextxy(300,400,"PLAYER SECOND ENTER A NUMBER:");
	      v=getch();
	      n=v-48;
	    }

	    if(i>0)
	    {
	      for(k=1;k<i;k++)
	      {
		if(s[k]==n||n>9)
		{
		  outtextxy(240,350,"RE-ENTER NUMBER:");
		  goto again;
		}
	      }
	    }

	    s[i]=n;
	  }
	  cleardevice();
	  if(n==1&&i%2!=0)
	  {
	    outtextxy(midx-35,midy-35,"X");
	    l[1]=1;
	  }
	  if(n==1&&i%2==0)
	  {
	    outtextxy(midx-35,midy-35,"O");
	    l[1]=2;
	  }

	  if(n==2&&i%2!=0)
	  {
	    outtextxy(midx-5,midy-35,"X");
	    l[2]=1;
	  }
	  if(n==2&&i%2==0)
	  {
	    outtextxy(midx-5,midy-35,"O");
	    l[2]=2;
	  }
	  if(n==3&&i%2!=0)
	  {
	    outtextxy(midx+35,midy-35,"X");
	    l[3]=1;
	  }
	  if(n==3&&i%2==0)
	  {
	    outtextxy(midx+35,midy-35,"O");
	    l[3]=2;
	  }
	  if(n==4&&i%2!=0)
	  {
	    outtextxy(midx-35,midy-5,"X");
	    l[4]=1;
	  }
	  if(n==4&&i%2==0)
	  {
	    outtextxy(midx-35,midy-5,"O");
	    l[4]=2;
	  }

	  if(n==5&&i%2!=0)
	  {
	    outtextxy(midx-5,midy-5,"X");
	    l[5]=1;
	  }
	  if(n==5&&i%2==0)
	  {
	    outtextxy(midx-5,midy-5,"O");
	    l[5]=2;
	  }
	  if(n==6&&i%2!=0)
	  {
	    outtextxy(midx+35,midy-5,"X");
	    l[6]=1;
	  }
	  if(n==6&&i%2==0)
	  {
	    outtextxy(midx+35,midy-5,"O");
	    l[6]=2;
	  }
	  if(n==7&&i%2!=0)
	  {
	    outtextxy(midx-35,midy+35,"X");
	    l[7]=1;
	  }
	  if(n==7&&i%2==0)
	  {
	    outtextxy(midx-35,midy+35,"O");
	    l[7]=2;
	  }
	  if(n==8&&i%2!=0)
	  {
	    outtextxy(midx-5,midy+35,"X");
	    l[8]=1;
	  }
	  if(n==8&&i%2==0)
	  {
	    outtextxy(midx-5,midy+35,"O");
	    l[8]=2;
	  }
	  if(n==9&&i%2!=0)
	  {
	    outtextxy(midx+35,midy+35,"X");
	    l[9]=1;
	  }
	  if(n==9&&i%2==0)
	  {
	    outtextxy(midx+35,midy+35,"O");
	    l[9]=2;
	  }

	  show();
	  structure();


	  if(i==10)
	  {
	    outtextxy(300,330,"DRAW");
	  }
	}
	getch();
	return 0;
}

void structure()
{
	line(midx-50,midy-20,midx+50,midy-20);
	line(midx-50,midy+20,midx+50,midy+20);
	line(midx-20,midy-50,midx-20,midy+50);
	line(midx+20,midy-50,midx+20,midy+50);
}


int win()
{
	if(l[1]==1&&l[2]==1&&l[3]==1)
	{
	  outtextxy(250,100,"PLATER FIRST WINS");
	  return 1;
	}
	if(l[4]==1&&l[5]==1&&l[6]==1)
	{
	  outtextxy(250,100,"PLATER FIRST WINS");
	  return 1;
	}
	if(l[7]==1&&l[8]==1&&l[9]==1)
	{
	  outtextxy(250,100,"PLATER FIRST WINS");
	  return 1;
	}
	if(l[1]==1&&l[4]==1&&l[7]==1)
	{
	  outtextxy(250,100,"PLATER FIRST WINS");
	  return 1;
	}
	if(l[2]==1&&l[5]==1&&l[8]==1)
	{
	  outtextxy(250,100,"PLATER FIRST WINS");
	  return 1;
	}
	if(l[3]==1&&l[6]==1&&l[9]==1)
	{
	  outtextxy(250,100,"PLATER FIRST WINS");
	  return 1;
	}
	if(l[1]==1&&l[5]==1&&l[9]==1)
	{
	  outtextxy(250,100,"PLATER FIRST WINS");
	  return 1;
	}
	if(l[3]==1&&l[5]==1&&l[7]==1)
	{
	  outtextxy(250,100,"PLATER FIRST WINS");
	  return 1;
	}
	if(l[1]==2&&l[2]==2&&l[3]==2)
	{
	  outtextxy(250,100,"PLATER SECOND WINS");
	  return 1;
	}
	if(l[4]==2&&l[5]==2&&l[6]==2)
	{
	  outtextxy(250,100,"PLATER SECOND WINS");
	  return 1;
	}
	if(l[7]==2&&l[8]==2&&l[9]==2)
	{
	  outtextxy(250,100,"PLATER SECOND WINS");
	  return 1;
	}
	if(l[1]==2&&l[4]==2&&l[7]==2)
	{
	  outtextxy(250,100,"PLATER SECOND WINS");
	  return 1;
	}
	if(l[2]==2&&l[5]==2&&l[8]==2)
	{
	  outtextxy(250,100,"PLATER SECOND WINS");
	  return 1;
	}
	if(l[3]==2&&l[6]==2&&l[9]==2)
	{
	  outtextxy(250,100,"PLATER SECOND WINS");
	  return 1;
	}
	if(l[1]==2&&l[5]==2&&l[9]==2)
	{
	  outtextxy(250,100,"PLATER SECOND WINS");
	  return 1;
	}
	if(l[3]==2&&l[5]==2&&l[7]==2)
	{
	  outtextxy(250,100,"PLATER SECOND WINS");
	  return 1;
	}
	return 0;
}

void show()
{

	if(l[1]==1)
	{
	  outtextxy(midx-35,midy-35,"X");
	}
	if(l[1]==2)
	{
	  outtextxy(midx-35,midy-35,"O");
	}
	if(l[2]==1)
	{
	  outtextxy(midx-5,midy-35,"X");
	}
	if(l[2]==2)
	{
	  outtextxy(midx-5,midy-35,"O");
	}
	if(l[3]==1)
	{
	  outtextxy(midx+35,midy-35,"X");
	}
	if(l[3]==2)
	{
	  outtextxy(midx+35,midy-35,"O");
	}
	if(l[4]==1)
	{
	  outtextxy(midx-35,midy-5,"X");
	}
	if(l[4]==2)
	{
	  outtextxy(midx-35,midy-5,"O");
	}
	if(l[5]==1)
	{
	  outtextxy(midx-5,midy-5,"X");
	}
	if(l[5]==2)
	{
	  outtextxy(midx-5,midy-5,"O");
	}
	if(l[6]==1)
	{
	  outtextxy(midx+35,midy-5,"X");
	}
	if(l[6]==2)
	{
	  outtextxy(midx+35,midy-5,"O");
	}
	if(l[7]==1)
	{
	  outtextxy(midx-35,midy+35,"X");
	}
	if(l[7]==2)
	{
	  outtextxy(midx-35,midy+35,"O");
	}
	if(l[8]==1)
	{
	  outtextxy(midx-5,midy+35,"X");
	}
	if(l[8]==2)
	{
	  outtextxy(midx-5,midy+35,"O");
	}
	if(l[9]==1)
	{
	  outtextxy(midx+35,midy+35,"X");
	}
	if(l[9]==2)
	{
	  outtextxy(midx+35,midy+35,"O");
	}
}

void startup()
{
	int flag=1;
	for(i=1;i<=250;i++)
	{
	  setcolor(i);
	  line(midx-i,midy,midx+i,midy);
	  delay(5);
	}

	for(i=1;i<=50;i++)
	{
	  line(midx-250,midy-i,midx+250,midy-i);
	  line(midx-250,midy+i,midx+250,midy+i);
	  line(midx-250,midy-i,midx-250,midy+i);
	  line(midx+250,midy-i,midx+250,midy+i);
	  setcolor(i);
	  delay(5);
	  cleardevice();
	}

	for(i=0;flag==1;i++)
	{
	  setcolor(i);
	  rectangle(midx-250,midy-50,midx+250,midy+50);
	  settextjustify(1,1);
	  settextstyle(1,HORIZ_DIR,5);
	  outtextxy(midx,midy,"TIC-TAC TOE");
	  delay(100);
	  cleardevice();
	  if(kbhit())
	  {
	    flag=0;
	  }
	  setcolor(15);
	  settextstyle(1,HORIZ_DIR,1);
	  outtextxy(midx,350,"PRESS ANY KEY");
	}
	cleardevice();
	getch();
	setcolor(15);
	settextstyle(0,HORIZ_DIR,1);
	settextjustify(0,1);
	outtextxy(midx-230,100,"PLAYER FIRST (X)");
	outtextxy(midx+100,100,"PLAYER SECOND (0)");
}
