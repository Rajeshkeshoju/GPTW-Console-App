#include<conio.h>
void courses();
void civ()
  {

    char ch;
    int n;
    do{
    FILE *fp;
    clrscr();
    title1();
    gotoxy(1,12);
    fp=fopen("civ.txt","r");
    if(fp==NULL)
       printf("No data found...");
    else
      {
	 while((ch=fgetc(fp))!=EOF)
	  {
	    printf("%c",ch);

	  }
	    gotoxy(30,25);
	    t(11);
	    cprintf("press 0 to go back:");
	    scanf("%d",&n);
	    if(n==0)
	      return;

      }

    fclose(fp);
    getch();
    }while(1);
    //return 0;

  }

void cme()
  {

    char ch;
    int n;
    do{
    FILE *fp;
    clrscr();
    title1();
    gotoxy(1,12);
    fp=fopen("cme.txt","r");
    if(fp==NULL)
       printf("No data found...!");
    else
      {
	 while((ch=fgetc(fp))!=EOF)
	  {
	    printf("%c",ch);
	  }
	    gotoxy(30,25);
	    t(11);
	    cprintf("press 0 to go back:");
	    scanf("%d",&n);
	    if(n==0)
	      return;
      }
    fclose(fp);
    getch();
    }while(1);
  }

void ece()
  {

    char ch;
    int n;
    do{
    FILE *fp;
    clrscr();
    title1();
    gotoxy(1,12);
    fp=fopen("ece.txt","r");
    if(fp==NULL)
       printf("No data found...!");
    else
      {
	 while((ch=fgetc(fp))!=EOF)
	  {
	    printf("%c",ch);
	  }
	     gotoxy(30,25);
	    t(11);
	    cprintf("press 0 to go back:");
	    scanf("%d",&n);
	    if(n==0)
	      return;
      }
    fclose(fp);
    getch();
    }while(1);
  }

void eee()
  {

    char ch;
    int n;
    do{
    FILE *fp;
    clrscr();
    title1();
    gotoxy(1,12);
    fp=fopen("eee.txt","r");
    if(fp==NULL)
       printf("No data found...!");
    else
      {
	 while((ch=fgetc(fp))!=EOF)
	  {
	    printf("%c",ch);
	  }
	     gotoxy(30,25);
	    t(11);
	    cprintf("press 0 to go back:");
	    scanf("%d",&n);
	    if(n==0)
	      return;
      }
    fclose(fp);
    getch();
    }while(1);
  }

void mec()
  {

    char ch;
    int n;
    do{
    FILE *fp;
    clrscr();
    title1();
    gotoxy(1,12);
    fp=fopen("mec.txt","r");
    if(fp==NULL)
       printf("No data found...!");
    else
      {
	 while((ch=fgetc(fp))!=EOF)
	  {
	    printf("%c",ch);
	  }
	     gotoxy(30,25);
	     t(11);
	    cprintf("press 0 to go back:");
	    scanf("%d",&n);
	    if(n==0)
	      return;
      }
    fclose(fp);
    getch();
    }while(1);
  }
