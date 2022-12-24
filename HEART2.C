#include<stdio.h>
#include<conio.h>
#include<dos.h>

void main()
{
	int i,j;
	clrscr();
	printf("\n\n\n");
	for(i=1;i<=21;i++)
	{
	printf("\t\t");
		for(j=1;j<=21;j++)
		{
			if((i-j==10&&i>=11)||(i==10&&j==1)||(i==9&&j==1)||(i==8&&j==1)||(i==7&&j==1)||(i==6&&j==2)||(i==5&&j==3)||(i==4&&j==4)||(i==3&&j==5)||(i==2&&j==6)||(i==1&&j==7)||(i==2&&j==8)||(i==3&&j==9)||(i==4&&j==10)||(i==5&&j==11)||(i==4&&j==12)||(i==3&&j==13)||(i==2&&j==14)||(i==1&&j==15)||(i==2&&j==16)||(i==3&&j==17)||(i==4&&j==18)||(i==5&&j==19)||(i==6&&j==20)||(i==7&&j==21)||(i==8&&j==21)||(i==9&&j==21)||(i==10&&j==21)||(i==11&&j==21)||(i+j==32&&j>=11))
			{
				textcolor(3);
				textbackground(9);
				cprintf("%c ",3);
			}
			else if((j==7&&i>=7&&i<=13)||(i==7&&j>=7&&j<=10)||(j==11&&i>=7&&i<=13)||(i==10&&j>=7&&j<=11)||(i==9&&j==12)||(i==8&&j==13)||(i==7&&j==14)||(i==11&&j==12)||(i==12&&j==13)||(i==13&&j==14))
			{
				textcolor(7);
				textbackground(4);
				cprintf("%c ",3);
			}
			else
			{
			printf("  ");
			}
		}
		printf("\n");

		delay(80);
	}
	printf("LOVE - ABHAY && KRISHNA");

 getch();
}