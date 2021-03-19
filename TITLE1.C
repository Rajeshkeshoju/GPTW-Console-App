
//#include<conio.h>
#include"date.c"
#define g gotoxy
#define pf printf
#define cp cprintf
#define tc textcolor
//int title1();
/*void main()
  {
    clrscr();
    title1();
    getch();
  }*/
void L(char ch,int n);
int title1()
  {
     int i;
     for(i=1;i<=80;i++)
	{
	  g(i,1);
	  pf("=");
	}
      for(i=1;i<=24;i++)
	{
	  g(1,i);
	  pf("||");
	}
      g(80,1);
      for(i=1;i<=24;i++)
	{
	  g(79,i);
	  pf("||");
	}
      //L('=',9);
      g(27,3);
      tc(10);
      cp("GOVT. POLYTECHNIC,WARANGAL");
      tc(7);
      g(21,4);
      cp("<<---------------------------------->>");
      g(24,6);
      tc(12);
      cp("DEPARTMENT OF TECHNICAL EDUCATION");
      g(21,7);
      tc(7);
      cp("<<----------------------------------->>");
      /*g(64,6);
      pf("DATE:");
      dates(); */
      for(i=3;i<=78;i++)
	{
	  g(i,8);
	  pf("=");
	}
      for(i=3;i<=78;i++)
	{
	  g(i,24);
	  pf("=");
	}
	return 0;
      //getch();
  }
 void L(char ch,int n)
  {
    int i;
    for(i=1;i<=n;i++)
    {
      pf("%c",ch);
    }
  }