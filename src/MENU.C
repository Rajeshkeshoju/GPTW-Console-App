#include<conio.h>
#include<process.h>
#include "about.c"
#include"title1.c"
#include"courses.c"
#include"std.c"
#include"faculty.c"
#define cp cprintf
#define tc textcolor
#define pf printf
#define g gotoxy
#define s scanf
//void L(char ch,int n);
void menu()
   {
      do{
      int i,n;
      //char ch;
      clrscr();
      title1();
      g(28,9);
      tc(13);
      cp("MAIN MENU: COLLEGE PORTAL");
      g(31,12);
      tc(YELLOW);
      cp("1. ABOUT COLLEGE");
      g(31,14);
      cp("2. COURSES OFFERED");
      g(31,16);
      cp("3. STUDENT CORNER");
      g(31,18);
      cp("4. FACULTY DATA");
      g(31,20);
      cp("5. EXIT");
      g(31,25);
      tc(11);
      cp("Enter your choice:");
      s("%d",&n);

      switch(n)
	{
	  case 1:
	     about();
	     break;
	  case 2:
	     courses();
	     break;
	  case 3:
	     std();
	     break;
	  case 4:
	     faculty();
	     break;
	  case 5:
	     exit(0);
	     break;
	  default:
	     pf("Invalid choice...!");
	getch();
      }
      }while(1);

   }
   /*void L(char ch,int n)
   {
     int i;
     for(i=1;i<=n;i++)
      {
	pf("%c",ch);
	}
   } */
