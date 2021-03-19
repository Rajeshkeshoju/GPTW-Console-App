#define g gotoxy
#define cp cprintf
#define p printf
#define s scanf
#define t textcolor
void about()
{
	char ch;

	FILE *fp=fopen("about.txt","r");
	clrscr();
	title1();
	g(33,10);
    t(13);
    cp("ABOUT COLLEGE");
    g(30,11);
    cp("*******************");
	g(5,13);
	if(fp==NULL)
	{
	p("\nerror:unable to open");
	getch();
	return;
	}

	while((ch=fgetc(fp))!=EOF)
		{
		p("%c",ch);
		}
	g(1,13);p("|");
	g(2,13);p("|");
	g(1,15);p("|");
	g(2,15);p("|");
	g(1,17);p("|");
	g(2,17);p("|");
	g(1,18);p("|");
	g(2,18);p("|");
	g(1,20);p("|");
	g(2,20);p("|");
	g(1,21);p("|");
	g(2,21);p("|");
	gotoxy(25,25);
	t(YELLOW);
	cp("press any key to continue...");
	fflush(stdin);
	fclose(fp);
	getch();
	return;
}
