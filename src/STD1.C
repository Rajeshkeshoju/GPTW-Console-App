#include <string.h>
#define p printf
#define s scanf
#define cp cprintf
#define g gotoxy
#define t textcolor
#include<conio.h>
void std();

struct adds
{
	int college,marks,hno;
	char sname[10],pinno[13],clg[10],address[30];
	long int adharno,phnno;
	struct date d1;
}e2;
void addstd()
{
	struct adds s1;
	char ans;
	int i;//,found=1,found1=0;
	//do{
	FILE *fp;
	clrscr();
	do
	{       START:
		//found=0;
		//found1=0;
		clrscr();
		title1();
		g(34,9);
		t(21);
		cp("ADD STUDENT");
		g(33,10);
		L('*',13);
		g(3,11);
		L('~',76);
		g(4,13);
		t(11);
		cp("College code:");
		g(55,13);
		cp("PIN:");
		g(4,15);
		cp("Student name:");
		g(55,15);
		cp("Phone no:");
		g(4,17);
		cp("H.no:");
		g(55,17);
		cp("Marks:");
		g(4,19);
		cp("Date:");
		g(55,19);
		cp("Aadhaar no:");
		g(4,21);
		cp("Address:");
		g(3,22);
		L('~',76);
		g(3,24);
		L('=',76);
		g(31,23);
		t(YELLOW);
		cp("Press 0 to go back:");
		g(17,13);
		s("%d",&s1.college);
		if(s1.college==0)
		{
		return;
		}
		else
		{
		g(27,23);
		clreol();
		g(79,23);
		p("|");
		g(80,23);
		p("|");
		g(57,13);
		}
		/*
		found=search(s1.college);
		if(found==0)
		{
		g(23,23);
		p("College code is not available..");
		getch();
		goto START;
		} */
		g(59,13);
		s("%s",&s1.pinno);
		/*found1=searchpinno(s1.pinno);
		if(found1==1)
		{
		g(23,23);
		p("PIN no is already exist...!");
		getch();
		goto START;
		} */

		g(17,15);
		fflush(stdin);
		s("%s",&s1.sname);
		g(64,15);
		fflush(stdin);
		s("%ld",&s1.phnno);
		g(9,17);
		fflush(stdin);
		s("%d",&s1.hno);
		g(61,17);
		s("%d",&s1.marks);
		g(9,19);
		getdate(&s1.d1);
		p("%d-%d-%d",s1.d1.da_day,s1.d1.da_mon,s1.d1.da_year);
		g(66,19);
		s("%ld",&s1.adharno);
		g(12,21);
		fflush(stdin);
		s("%s",&s1.address);
		fp=fopen("student.dbf","ab+");
		fwrite(&s1,sizeof(s1),1,fp);
		g(33,21);
		t(6);
		cp("1 Record added");
		g(28,23);
		t(YELLOW);
		cp("Do u want to repeat [y/n]:");
		fflush(stdin);
		g(54,23);
		s("%c",&ans);
		fclose(fp);
		}while(ans=='y' || ans=='Y');

		//getch();
}

void viewstd()
{
struct adds s2;
int count=1;
int i,j=15,k=14;
FILE *fp=fopen("student.dbf","rb+");
clrscr();
title1();
if(fp==NULL)
{
g(1,25);
p("Unable to open...");
getch();
return;
}
g(33,9);
t(YELLOW);
cp("STUDENT'S DATA");
g(31,10);
cp("******************");
g(3,11);
L('=',76);
g(3,12);
t(13);
//cp("   PIN         Name      clg_code  Phoneno    Marks   Adharno      Address");
cp("   PIN         Name      clg_code   Phoneno    Marks   Adharno      Address");
g(3,13);
t(27);
L('=',76);
g(3,14);
while(fread( &s2, sizeof(s2), 1, fp)==1)
{
g(3,k);
k=k+2;
t(11);
cp("%-13s %-13s %-6d %-12ld %-5d %-12ld %-3s\n",s2.pinno,s2.sname,s2.college,s2.phnno,s2.marks/*,s2.d1.da_day,s2.d1.da_mon,s2.d1.da_year*/,s2.adharno,s2.address);
g(3,j);
j=j+2;
L('-',76);
p("\n");
count++;
if(count>4)
{
g(26,25);
 t(6);
 cp("press any key to continue...");
 g(3,24);
 L('=',76);
 g(54,25);
 getch();
  clrscr();
  title1();
  g(33,9);
  t(YELLOW);
cp("STUDENT'S DATA");
g(31,10);
cp("******************");
g(3,11);
L('=',76);
g(3,12);
t(13);
cp("   PIN         Name      clg_code   Phoneno    Marks   Adharno      Address");
g(3,13);
L('=',76);
count=1;
k=14;
j=15;
}
}
g(26,25);
t(6);
cp("press any key to continue...");
g(3,24);
L('=',76);
fclose(fp);
g(54,25);
getch();
}

void college()
{
int i;
title1();
g(4,9);
t(13);
cp("Enter PIN:");
g(3,11);
L('~',76);
		t(11);
		g(54,13);
		cp("Collge code:");
		g(4,13);
		cp("Student name:");
		g(54,15);
		cp("Phone no:");
		g(4,15);
		cp("H.no:");
		g(54,17);
		cp("Marks:");
		g(4,17);
		cp("Date:");
		g(54,19);
		cp("Aadhaar no:");
		g(4,19);
		cp("Address:");
g(3,21);
L('~',76);
g(3,24);
L('=',76);
g(31,23);
t(YELLOW);
cp("Press 0 to go back...");

fflush(stdin);
return;
}
void searchs()
{
struct adds s5;
char pin[13];
int found=0,check;
FILE *fp3;
char ans;
	do
	{
	clrscr();
	college();
	fp3=fopen("student.dbf","rb+");
	if(fp3==NULL)
		{
		p("\n unable to open");
		getch();
		return;
		}
	g(14,9);
	s("%s",&pin);
	check=strcmp(pin,"0");
	if(check==0)
		{
		p("PIN is not existed...");
		return;
		}
		else
		{
		g(30,23);
		clreol();
		g(79,23);
		p("|");
		g(80,23);
		p("|");
		}
	while(fread(&s5,sizeof(s5),1,fp3)==1)
		{

			if(strcmp(s5.pinno,pin))
			{
			found=0;
			}
		       else
		       {
			g(66,13);
			p("%d",s5.college);
			g(17,13);
			p("%s",s5.sname);
			g(63,15);
			p("%ld",s5.phnno);
			g(9,15);
			p("%d",s5.hno);
			g(60,17);
			p("%d",s5.marks);
			g(9,17);
			p("%d-%d-%d",s5.d1.da_day,s5.d1.da_mon,s5.d1.da_year);
			g(65,19);
			p("%ld",s5.adharno);
			g(12,19);
			p("%s",s5.address);
			found=1;
			break;

			}
		}
		fclose(fp3);
	if(found==0)
	{
	g(4,22);
	t(6);
	cp("Not found...");
	}
	g(27,23);
	t(YELLOW);
	cp("Do u want to repeat[y/n]:");
	fflush(stdin);
	g(52,23);
	s("%c",&ans);
	}while(ans=='y' || ans=='Y');
	return;
	//getch();
}

void delstd()
{
struct adds s4;
FILE *fp4,*fp6;
char n[13];
int found=0,check;
char ans;
	do
	{
	clrscr();
	college();
	fp4=fopen("student.dbf","rb+");
	if(fp4==NULL)
	{
	p("\n Unable to open...");
	getch();
	return;
	}
	fp6=fopen("temp7.dbf","wb+");
	if(fp6==NULL)
	{
	p("\n Unable to open....");
	getch();
	return;
	}
	g(14,9);
	s("%s",&n);
	check=strcmp(n,"0");
	if(check==0)
		{
		p("PIN is not existed...");
		if(found==0)
	{
	g(62,20);
	p("\Not found...");
	}
		return;
		}
		else
		{
		g(27,23);
		clreol();
		g(79,23);
		p("|");
		g(80,23);
		p("|");
		}
	while(fread( &s4, sizeof(s4), 1, fp4)==1)
	{
	if(strcmp(s4.pinno,n))
			{
			//found=0;
			fwrite( &s4, sizeof(s4), 1, fp6);

			}
	else{

		g(66,13);
		p("%d",s4.college);
		g(17,13);
		p("%s",s4.sname);
		g(63,15);
		p("%ld",s4.phnno);
		g(9,15);
		p("%d",s4.hno);
		g(60,17);
		p("%d",s4.marks);
		g(9,17);
		p("%d-%d-%d",s4.d1.da_day,s4.d1.da_mon,s4.d1.da_year);
		g(65,19);
		p("%ld",s4.adharno);
		g(12,19);
		p("%s",s4.address);
		g(28,23);
		cp("R u sure to DELETE [y/n]:");
		g(53,23);
		fflush(stdin);
		s("%c",&ans);
		//found=1;

		if(ans=='y'||ans=='Y')
			found=1;
		else
			return;
	   }


	}
	fclose(fp4);
	fclose(fp6);
	remove("student.dbf");
	rename("temp7.dbf","student.dbf");
	//fwrite( &s4, sizeof(s4), 1, fp6);
	if(found==0)
	  {
		g(31,20);
		cp("Record not found...");
	  }
	if(found==1)
	  {
		g(31,20);
		cp("Record deleted...");
	  }
	g(24,23);
	clreol();
	g(79,23);
	p("|");
	g(80,23);
	p("|");
	g(66,13);
	g(26,23);
	cp(" Do u want to repeat [y/n]:");
	g(53,23);
	fflush(stdin);
	s("%c",&ans);
	found=0;
	}while(ans=='y' || ans=='Y');

}

void modstd()
{
struct adds s9,s1,s8;
FILE *fp9;
char n[13];
int found=0,recsize,i,check=1;
char ans;
do
{
clrscr();
college();
fp9=fopen("student.dbf","rb+");
if(fp9==NULL)
{
p("\nUnable to open");
getch();
return;
}
recsize=sizeof(s9);
g(14,9);
s("%s",&n);
while(fread( &s1, sizeof(s1), 1, fp9)==1){
i=strcmp(n,"0");  if(i==0) return;
check=strcmp(s1.pinno,n);
	if(check!=0)
		{

		g(31,25);t(BLACK);
		cp("PIN is not existed...!");
		//return;
		}
		else
		{
		g(27,23);
		clreol();
		g(79,23);
		p("|");
		g(80,23);
		p("|");
		g(66,13);

			p("%d",s1.college);
			g(17,13);
			p("%s",s1.sname);
			g(63,15);
			p("%ld",s1.phnno);
			g(9,15);
			p("%d",s1.hno);
			g(60,17);
			p("%d",s1.marks);
			g(9,17);
			p("%d-%d-%d",s1.d1.da_day,s1.d1.da_mon,s1.d1.da_year);
			g(65,19);
			p("%ld",s1.adharno);
			g(12,19);
			p("%s",s1.address);
			found=1;
			g(27,23);
			t(YELLOW);
			cp("Do u want to MODIFY [y/n]:");
			fflush(stdin);
			t(YELLOW);
			s("%c",&ans);
			if(ans=='y' || ans=='Y')
			goto START;
			else
			return;


//while(fread( &s1, sizeof(s1), 1, fp9)==1)
//{
	START:
	if(strcmp(s1.pinno,n))
			{
			found=0;
			}
			else{

		clrscr();
		found=0;
		clrscr();
		title1();
		g(29,9);
		t(YELLOW);
		cp("MODIFY STUDENT'S DATA");
		g(34,11);
		cp("Enter new data");
		L('*',13);
		g(3,11);
		L('~',76);
		g(4,13);
		t(11);
		cp("College code:");
		g(55,13);
		cp("PIN:");
		g(4,15);
		cp("Student name:");
		g(55,15);
		cp("Phone no:");
		g(4,17);
		cp("H.no:");
		g(55,17);
		cp("Marks:");
		g(4,19);
		cp("Date:");
		g(55,19);
		cp("Aadhaar no:");
		g(4,21);
		cp("Address:");
		g(3,22);
		t(27);
		L('~',76);
		g(3,24);
		L('=',76);
		g(25,23);
		t(YELLOW);
		cp("Press 0 to go back...");
		g(17,13);
		s("%d",&s1.college);
		if(s1.college==0)
		{
		return;
		}
		else
		{
		g(25,23);
		clreol();
		g(79,23);
		p("|");
		g(80,23);
		p("|");
		g(66,13);
		}
		//found=search(s1.college);
	       /*	if(found==0)
		{
		g(23,23);
		//p("College code is not available..");
		getch();
		//goto START;
		}*/
		g(59,13);
		s("%s",&s1.pinno);
		g(17,15);
		s("%s",&s1.sname);
		g(64,15);
		s("%ld",&s1.phnno);
		g(9,17);
		s("%d",&s1.hno);
		g(61,17);
		s("%d",&s1.marks);
		g(9,19);
		getdate(&s1.d1);
		p("%d-%d-%d",s1.d1.da_day,s1.d1.da_mon,s1.d1.da_year);
		g(66,19);
		s("%ld",&s1.adharno);
		g(12,21);
		s("%s",&s1.address);
		found=1;
		g(31,21);
		tc(6);
		cp("Record modifeid...");
		g(5,22);
		t(15);
		fseek(fp9,-recsize,1);
		fwrite(&s1,sizeof(s1),1,fp9);
		}
	      //	}
	}
}
fclose(fp9);
g(30,22);
if(found==0)
{
t(6);
cp("\nRecord not found...");
}
g(27,23);
t(YELLOW);
cp("Do u want to Repeat [y/n]:");
fflush(stdin);
s("%c",&ans);
}while(ans=='Y' || ans=='y');
}
