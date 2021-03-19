#include<conio.h>
#include "courses1.c"
#define cp cprintf
#define tc textcolor
#define pf printf
#define g gotoxy
#define s scanf
void menu();
void courses()
   {

      int n;
      do{
      clrscr();
      title1();
      g(30,9);
      tc(13);
      cp("COURSES OFFERED");
      g(28,12);
      tc(YELLOW);
      cp("1. CIVIL ENGG.");
      g(28,14);
      cp("2. COMPUTER ENGG.");
      g(28,16);
      cp("3. ELECTRONICS AND COMMUNICATION ENGG.");
      g(28,18);
      cp("4. ELECTRICAL AND ELECTRONICS ENGG.");
      g(28,20);
      cp("5. MECHANICAL ENGG.");
      g(28,22);
      cp("6. BACK TO MAIN MENU");
      g(28,25);
      tc(11);
      cp("Enter your choice:");
      s("%d",&n);

      switch(n)
	{
	  case 1:
	     civ();
	     break;
	  case 2:
	     cme();
	     break;
	  case 3:
	     ece();
	     break;
	  case 4:
	     eee();
	     break;
	  case 5:
	     mec();
	     break;
	  case 6:
	     return;
	  default:
	     pf("Invalid choice...!");
	     getch();
	}
	//return 0;

	}while(1);
      }
