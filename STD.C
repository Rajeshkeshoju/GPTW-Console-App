#include<conio.h>
#include"std1.c"
#define cp cprintf
#define tc textcolor
#define pf printf
#define g gotoxy
#define s scanf
void menu();
void std()
   {
      do{
      int i,n;
      clrscr();
      title1();
      g(33,9);
      tc(13);
      cp("STUDENT CORNER");
      g(31,12);
      tc(YELLOW);
      cp("1. ADD STUDENT");
      g(31,14);
      cp("2. VIEW STUDENT'S DATA");
      g(31,16);
      cp("3. SEARCH STUDENT ");
      g(31,18);
      cp("4. MODIFY STUDENT");
      g(31,20);
      cp("5. DELETE STUDENT");
      g(31,22);
      cp("6. BACK TO MAIN MENU");
      g(31,25);
      tc(11);
      cp("Enter your choice:");
      s("%d",&n);

      switch(n)
	{
	  case 1:
	     addstd();
	     break;
	  case 2:
	     viewstd();
	     break;
	  case 3:
	     searchs();
	     break;
	  case 4:
	     modstd();
	     break;
	  case 5:
	     delstd();
	     break;
	  case 6:
	      return;
	  default:
	     pf("Invalid choice...!");
	     getch();
	}
	}while(1);

   }
