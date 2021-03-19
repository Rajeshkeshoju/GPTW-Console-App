#include<conio.h>
#define g gotoxy
#define p printf
#define cp cprintf
void faculty();
void civfac()
  {

    char ch;
    int n;
    do{
    FILE *fp;
    clrscr();
    gotoxy(1,2);
    fp=fopen("civfac1.txt","r");
    if(fp==NULL)
       printf("No data found...");
    else
      {
	 while((ch=fgetc(fp))!=EOF)
	  {
	    printf("%c",ch);
	  }
	    gotoxy(30,25);
	    textcolor(11);
	    cprintf("\npress 0 to go back:");
	    scanf("%d",&n);
	    if(n==0)
	      return;


      }
    fclose(fp);
    //return 0;
    getch();
    }while(1);
  }

void cmefac()
  {

    char ch;
    int n;
    do{
    FILE *fp;
    clrscr();
    gotoxy(1,1);
    fp=fopen("cmefac.txt","r");
    if(fp==NULL)
       printf("No data found...");
    else
      {
	 while((ch=fgetc(fp))!=EOF)
	  {

	    printf("%c",ch);
	  }
	    gotoxy(30,25);
	    textcolor(11);
	    cprintf("press 0 to go back:");
	    scanf("%d",&n);
	    if(n==0)
	    {
	    return;
	      }
      }
    fclose(fp);
    //return 0;
    getch();
    }while(1);
  }

void ecefac()
  {

    char ch;
    int n;
    do{
    FILE *fp;
    clrscr();
    gotoxy(1,1);
    fp=fopen("ecefac.txt","r");
    if(fp==NULL)
       printf("NO data found...");
    else
      {
	 while((ch=fgetc(fp))!=EOF)
	  {
	    printf("%c",ch);
	  }
	    gotoxy(30,25);
	    textcolor(11);
	    cprintf("press 0 to go back:");
	    scanf("%d",&n);
	    if(n==0)
	      return;
      }
    fclose(fp);
    //return 0;
    getch();
    }while(1);
  }

void eeefac()
  {

    char ch;
    int n;
    do{
    FILE *fp;
    clrscr();
    gotoxy(1,3);
    fp=fopen("eeefac.txt","r");
    if(fp==NULL)
       printf("NO data found...");
    else
      {
	 while((ch=fgetc(fp))!=EOF)
	  {
	    printf("%c",ch);
	  }
	    gotoxy(30,25);
	    textcolor(11);
	    cprintf("press 0 to go back:");
	    scanf("%d",&n);
	    if(n==0)
		return;
       }
	fclose(fp);
	getch();
	}while(1);
}

void mecfac()
  {

    char ch;
    int n;
    do{
    FILE *fp;
    clrscr();
    gotoxy(1,1);
    fp=fopen("mecfac.txt","r");
    if(fp==NULL)
       printf("No data found...");
    else
      {
	 while((ch=fgetc(fp))!=EOF)
	  {
	    printf("%c",ch);
	  }
	    gotoxy(30,25);
	    textcolor(11);
	    cprintf("press 0 to go back:");
	    scanf("%d",&n);
	    if(n==0)
	      return;
      }
    fclose(fp);
    //return 0;
    getch();
    }while(1);
  }
