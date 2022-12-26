#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <conio.h>
int main()
{
int n=6,m=10,i,j,P=0,p=0,E=0,e=0,H=0;	
char maze[n][m]={{'0','0','1','0','P','0','e','0','p','0'},{'1','0','p','0','1','E','1','0','1','0'},{'1','G','1','0','1','0','1','0','0','K'},{'0','0','P','0','p','0','0','0','1','0'},{'0','1','1','0','K','C','1','0','1','0'},{'0','0','0','0','1','0','p','0','0','0'}};
maze[2][1]='X';
{
for(int i=0;i<n;i++){
		
		for(int j=0;j<m;j++){
		printf("%c  ",maze[i][j]);
	}
	printf("\n\n");
	}
printf("\n\nToplanan Maddeler:\n%d adet P+\n%d adet P-\n%d adet e+\n%d adet e- \n",P,p,E,e);
printf("\n\n\n X karakterin 1 ler duvar K karadelikten uzak dur labirenti bitir");
printf("\n\n\ncreated by Saban Cepni");
}
char yon;
int a=2,b=1;

for(;;){
	yon = getch();
	if(yon==27)
	{
	sleep(1);
	system("cls");
	printf("Oyundan cikis yapildi.");
	return 0;}
	{

	if(yon==75)
	{
		if(maze[a][b-1]=='1')
		{
			maze[a][b]='X';
			system("cls");
			{for(i=0;i<n;i++){
				for(j=0;j<m;j++)
				printf("%c  ",maze[i][j]);
			 	printf("\n\n");
			 }  
			}
			printf("\n\nToplanan Maddeler:\n%d adet P+\n%d adet P-\n%d adet e+\n%d adet e- \n",P,p,E,e);
		}
		else if(maze[a][b-1]=='0')
		{
			maze[a][b]='0';
			maze[a][b-1]='X';
			b--;
			system("cls");
			{for(i=0;i<n;i++){
				for(j=0;j<m;j++)
				printf("%c  ",maze[i][j]);
				printf("\n\n");
			}
			printf("\n\nToplanan Maddeler:\n%d adet P+\n%d adet P-\n%d adet e+\n%d adet e- \n",P,p,E,e);
			}
			
		}
		else if(maze[a][b-1]=='P')
		{
			maze[a][b]='0';
			maze[a][b-1]='X';
			b--;
			system("cls");
			{for(i=0;i<n;i++){
				for(j=0;j<m;j++)
				printf("%c  ",maze[i][j]);
				printf("\n\n");
			}
			P++;
			printf("\n\nToplanan Maddeler:\n%d adet P+\n%d adet P-\n%d adet e+\n%d adet e- \n",P,p,E,e);
			}
		}
		else if(maze[a][b-1]=='p')
		{
			maze[a][b]='0';
			maze[a][b-1]='X';
			b--;
			system("cls");
			{for(i=0;i<n;i++){
				for(j=0;j<m;j++)
				printf("%c  ",maze[i][j]);
				printf("\n\n");
			}
			p++;
			printf("\n\nToplanan Maddeler:\n%d adet P+\n%d adet P-\n%d adet e+\n%d adet e- \n",P,p,E,e);
			}
		}
		else if(maze[a][b-1]=='E')
		{
			maze[a][b]='0';
			maze[a][b-1]='X';
			b--;
			system("cls");
			{for(i=0;i<n;i++){
				for(j=0;j<m;j++)
				printf("%c  ",maze[i][j]);
				printf("\n\n");
			}
			E++;
			printf("\n\nToplanan Maddeler:\n%d adet P+\n%d adet P-\n%d adet e+\n%d adet e- \n",P,p,E,e);
			}
		}
		else if(maze[a][b-1]=='e')
		{
			maze[a][b]='0';
			maze[a][b-1]='X';
			b--;
			system("cls");
			{for(i=0;i<n;i++){
				for(j=0;j<m;j++)
				printf("%c  ",maze[i][j]);
				printf("\n\n");
			}
			e++;
			printf("\n\nToplanan Maddeler:\n%d adet P+\n%d adet P-\n%d adet e+\n%d adet e- \n",P,p,E,e);
			}
		}
		else if(maze[a][b-1]=='K')
		{
			maze[a][b]='0';
			maze[a][b-1]='X';
			b--;
			system("cls");
			{for(i=0;i<n;i++){
				for(j=0;j<m;j++)
				printf("%c  ",maze[i][j]);
				printf("\n\n");
			}
			printf("\n\nToplanan Maddeler:\n%d adet P+\n%d adet P-\n%d adet e+\n%d adet e- \n",P,p,E,e);
			}
			{
			sleep(0);
			system("cls");
			printf("Karadelige dustun!?!? Oyun sonlandi.");
			getch();
			return 0;
			}
		}
		else if(maze[a][b-1]=='C')
		{
			maze[a][b]='0';
			maze[a][b-1]='X';
			b--;
			system("cls");
			{for(i=0;i<n;i++){
				for(j=0;j<m;j++)
				printf("%c  ",maze[i][j]);
				printf("\n\n");
			}
			printf("\n\nToplanan Maddeler:\n%d adet P+\n%d adet P-\n%d adet e+\n%d adet e- \n",P,p,E,e);
			}
			{
			sleep(0);
			system("cls");
			printf("Tebrikler cikisa ulastiniz.");
			printf("\n\nToplanan Maddeler:\n%d adet P+\n%d adet P-\n%d adet e+\n%d adet e- \n",P,p,E,e);
			}
			printf("\n\n");
			{if(p==0 || E==0)
			{printf("0 adet karsit madde uretildi.");}
			else if(p<E)
			{printf("%d adet karsit madde uretildi.",p);}
			else if(E<p)
			{printf("%d adet karsit madde uretildi.",E);}
			}
			return 0;
		}
	}
	if(yon==72)
	{
		if(maze[a-1][b]=='1')
		{
			maze[a][b]='X';
			system("cls");
			{for(i=0;i<n;i++){
				for(j=0;j<m;j++)
				printf("%c  ",maze[i][j]);
			 	printf("\n\n");
			 }  
			}
			printf("\n\nToplanan Maddeler:\n%d adet P+\n%d adet P-\n%d adet e+\n%d adet e- \n",P,p,E,e);
		}
		else if(maze[a-1][b]=='0')
		{
			maze[a][b]='0';
			maze[a-1][b]='X';
			a--;
			system("cls");
			{for(i=0;i<n;i++){
				for(j=0;j<m;j++)
				printf("%c  ",maze[i][j]);
				printf("\n\n");
			}
			printf("\n\nToplanan Maddeler:\n%d adet P+\n%d adet P-\n%d adet e+\n%d adet e- \n",P,p,E,e);
			}
			
		}
		else if(maze[a-1][b]=='P')
		{
			maze[a][b]='0';
			maze[a-1][b]='X';
			a--;
			system("cls");
			{for(i=0;i<n;i++){
				for(j=0;j<m;j++)
				printf("%c  ",maze[i][j]);
				printf("\n\n");
			}
			P++;
			printf("\n\nToplanan Maddeler:\n%d adet P+\n%d adet P-\n%d adet e+\n%d adet e- \n",P,p,E,e);
			}
		}
		else if(maze[a-1][b]=='p')
		{
			maze[a][b]='0';
			maze[a-1][b]='X';
			a--;
			system("cls");
			{for(i=0;i<n;i++){
				for(j=0;j<m;j++)
				printf("%c  ",maze[i][j]);
				printf("\n\n");
			}
			p++;
			printf("\n\nToplanan Maddeler:\n%d adet P+\n%d adet P-\n%d adet e+\n%d adet e- \n",P,p,E,e);
			}
		}
		else if(maze[a-1][b]=='E')
		{
			maze[a][b]='0';
			maze[a-1][b]='X';
			a--;
			system("cls");
			{for(i=0;i<n;i++){
				for(j=0;j<m;j++)
				printf("%c  ",maze[i][j]);
				printf("\n\n");
			}
			E++;
			printf("\n\nToplanan Maddeler:\n%d adet P+\n%d adet P-\n%d adet e+\n%d adet e- \n",P,p,E,e);
			}
		}
		else if(maze[a-1][b]=='e')
		{
			maze[a][b]='0';
			maze[a-1][b]='X';
			a--;
			system("cls");
			{for(i=0;i<n;i++){
				for(j=0;j<m;j++)
				printf("%c  ",maze[i][j]);
				printf("\n\n");
			}
			e++;
			printf("\n\nToplanan Maddeler:\n%d adet P+\n%d adet P-\n%d adet e+\n%d adet e- \n",P,p,E,e);
			}
		}
		else if(maze[a-1][b]=='K')
		{
			maze[a][b]='0';
			maze[a-1][b]='X';
			a--;
			system("cls");
			{for(i=0;i<n;i++){
				for(j=0;j<m;j++)
				printf("%c  ",maze[i][j]);
				printf("\n\n");
			}
			printf("\n\nToplanan Maddeler:\n%d adet P+\n%d adet P-\n%d adet e+\n%d adet e- \n",P,p,E,e);
			}
			{
			sleep(0);
			system("cls");
			printf("Karadelige dustun!?!? Oyun sonlandi.");
			return 0;
			}
		}
		else if(maze[a-1][b]=='C')
		{
			maze[a][b]='0';
			maze[a-1][b]='X';
			a--;
			system("cls");
			{for(i=0;i<n;i++){
				for(j=0;j<m;j++)
				printf("%c  ",maze[i][j]);
				printf("\n\n");
			}
			printf("\n\nToplanan Maddeler:\n%d adet P+\n%d adet P-\n%d adet e+\n%d adet e- \n",P,p,E,e);
			}
			{
			sleep(0);
			system("cls");
			printf("Tebrikler cikisa ulastiniz.");
			printf("\n\nToplanan Maddeler:\n%d adet P+\n%d adet P-\n%d adet e+\n%d adet e- \n",P,p,E,e);
			}
			printf("\n\n");
			{if(p==0 || E==0)
			{printf("0 adet karsit madde uretildi.");}
			else if(p<E)
			{printf("%d adet karsit madde uretildi.",p);}
			else if(E<p)
			{printf("%d adet karsit madde uretildi.",E);}
			return 0;}
		}
	}
	if(yon==80)
	{
		if(maze[a+1][b]=='1')
		{
			maze[a][b]='X';
			system("cls");
			{for(i=0;i<n;i++){
				for(j=0;j<m;j++)
				printf("%c  ",maze[i][j]);
			 	printf("\n\n");
			 }  
			}
			printf("\n\nToplanan Maddeler:\n%d adet P+\n%d adet P-\n%d adet e+\n%d adet e- \n",P,p,E,e);
		}
		else if(maze[a+1][b]=='0')
		{
			maze[a][b]='0';
			maze[a+1][b]='X';
			a++;
			system("cls");
			{for(i=0;i<n;i++){
				for(j=0;j<m;j++)
				printf("%c  ",maze[i][j]);
				printf("\n\n");
			}
			printf("\n\nToplanan Maddeler:\n%d adet P+\n%d adet P-\n%d adet e+\n%d adet e- \n",P,p,E,e);
			}
			
		}
		else if(maze[a+1][b]=='P')
		{
			maze[a][b]='0';
			maze[a+1][b]='X';
			a++;
			system("cls");
			{for(i=0;i<n;i++){
				for(j=0;j<m;j++)
				printf("%c  ",maze[i][j]);
				printf("\n\n");
			}
			P++;
			printf("\n\nToplanan Maddeler:\n%d adet P+\n%d adet P-\n%d adet e+\n%d adet e- \n",P,p,E,e);
			}
		}
		else if(maze[a+1][b]=='p')
		{
			maze[a][b]='0';
			maze[a+1][b]='X';
			a++;
			system("cls");
			{for(i=0;i<n;i++){
				for(j=0;j<m;j++)
				printf("%c  ",maze[i][j]);
				printf("\n\n");
			}
			p++;
			printf("\n\nToplanan Maddeler:\n%d adet P+\n%d adet P-\n%d adet e+\n%d adet e- \n",P,p,E,e);
			}
		}
		else if(maze[a+1][b]=='E')
		{
			maze[a][b]='0';
			maze[a+1][b]='X';
			a++;
			system("cls");
			{for(i=0;i<n;i++){
				for(j=0;j<m;j++)
				printf("%c  ",maze[i][j]);
				printf("\n\n");
			}
			E++;
			printf("\n\nToplanan Maddeler:\n%d adet P+\n%d adet P-\n%d adet e+\n%d adet e- \n",P,p,E,e);
			}
		}
		else if(maze[a+1][b]=='e')
		{
			maze[a][b]='0';
			maze[a+1][b]='X';
			a++;
			system("cls");
			{for(i=0;i<n;i++){
				for(j=0;j<m;j++)
				printf("%c  ",maze[i][j]);
				printf("\n\n");
			}
			e++;
			printf("\n\nToplanan Maddeler:\n%d adet P+\n%d adet P-\n%d adet e+\n%d adet e- \n",P,p,E,e);
			}
		}
		else if(maze[a+1][b]=='K')
		{
			maze[a][b]='0';
			maze[a+1][b]='X';
			a++;
			system("cls");
			{for(i=0;i<n;i++){
				for(j=0;j<m;j++)
				printf("%c  ",maze[i][j]);
				printf("\n\n");
			}
			printf("\n\nToplanan Maddeler:\n%d adet P+\n%d adet P-\n%d adet e+\n%d adet e- \n",P,p,E,e);
			}
			{
			sleep(0);
			system("cls");
			printf("Karadelige dustun!?!? Oyun sonlandi.");
			return 0;
			}
		}
		else if(maze[a+1][b]=='C')
		{
			maze[a][b]='0';
			maze[a+1][b]='X';
			a++;
			system("cls");
			{for(i=0;i<n;i++){
				for(j=0;j<m;j++)
				printf("%c  ",maze[i][j]);
				printf("\n\n");
			}
			printf("\n\nToplanan Maddeler:\n%d adet P+\n%d adet P-\n%d adet e+\n%d adet e- \n",P,p,E,e);
			}
			{
			sleep(0);
			system("cls");
			printf("Tebrikler cikisa ulastiniz.");
			printf("\n\nToplanan Maddeler:\n%d adet P+\n%d adet P-\n%d adet e+\n%d adet e- \n",P,p,E,e);
			}
			printf("\n\n");
			{if(p==0 || E==0)
			{printf("0 adet karsit madde uretildi.");}
			else if(p<E)
			{printf("%d adet karsit madde uretildi.",p);}
			else if(E<p)
			{printf("%d adet karsit madde uretildi.",E);}
			return 0;}
		}
	}
	if(yon==77)
	{
		if(maze[a][b+1]=='1')
		{
			maze[a][b]='X';
			system("cls");
			{for(i=0;i<n;i++){
				for(j=0;j<m;j++)
				printf("%c  ",maze[i][j]);
			 	printf("\n\n");
			 }  
			}
			printf("\n\nToplanan Maddeler:\n%d adet P+\n%d adet P-\n%d adet e+\n%d adet e- \n",P,p,E,e);
		}
		else if(maze[a][b+1]=='0')
		{
			maze[a][b]='0';
			maze[a][b+1]='X';
			b++;
			system("cls");
			{for(i=0;i<n;i++){
				for(j=0;j<m;j++)
				printf("%c  ",maze[i][j]);
				printf("\n\n");
			}
			printf("\n\nToplanan Maddeler:\n%d adet P+\n%d adet P-\n%d adet e+\n%d adet e- \n",P,p,E,e);
			}
			
		}
		else if(maze[a][b+1]=='P')
		{
			maze[a][b]='0';
			maze[a][b+1]='X';
			b++;
			system("cls");
			{for(i=0;i<n;i++){
				for(j=0;j<m;j++)
				printf("%c  ",maze[i][j]);
				printf("\n\n");
			}
			P++;
			printf("\n\nToplanan Maddeler:\n%d adet P+\n%d adet P-\n%d adet e+\n%d adet e- \n",P,p,E,e);
			}
		}
		else if(maze[a][b+1]=='p')
		{
			maze[a][b]='0';
			maze[a][b+1]='X';
			b++;
			system("cls");
			{for(i=0;i<n;i++){
				for(j=0;j<m;j++)
				printf("%c  ",maze[i][j]);
				printf("\n\n");
			}
			p++;
			printf("\n\nToplanan Maddeler:\n%d adet P+\n%d adet P-\n%d adet e+\n%d adet e- \n",P,p,E,e);
			}
		}
		else if(maze[a][b+1]=='E')
		{
			maze[a][b]='0';
			maze[a][b+1]='X';
			b++;
			system("cls");
			{for(i=0;i<n;i++){
				for(j=0;j<m;j++)
				printf("%c  ",maze[i][j]);
				printf("\n\n");
			}
			E++;
			printf("\n\nToplanan Maddeler:\n%d adet P+\n%d adet P-\n%d adet e+\n%d adet e- \n",P,p,E,e);
			}
		}
		else if(maze[a][b+1]=='e')
		{
			maze[a][b]='0';
			maze[a][b+1]='X';
			b++;
			system("cls");
			{for(i=0;i<n;i++){
				for(j=0;j<m;j++)
				printf("%c  ",maze[i][j]);
				printf("\n\n");
			}
			e++;
			printf("\n\nToplanan Maddeler:\n%d adet P+\n%d adet P-\n%d adet e+\n%d adet e- \n",P,p,E,e);
			}
		}
		else if(maze[a][b+1]=='K')
		{
			maze[a][b]='0';
			maze[a][b+1]='X';
			b++;
			system("cls");
			{for(i=0;i<n;i++){
				for(j=0;j<m;j++)
				printf("%c  ",maze[i][j]);
				printf("\n\n");
			}
			printf("\n\nToplanan Maddeler:\n%d adet P+\n%d adet P-\n%d adet e+\n%d adet e- \n",P,p,E,e);
			}
			{
			sleep(0);
			system("cls");
			printf("Karadelige dustun!?!? Oyun sonlandi.");
			return 0;
			}
		}
		else if(maze[a][b+1]=='C')
		{
			maze[a][b]='0';
			maze[a][b+1]='X';
			b++;
			system("cls");
			{for(i=0;i<n;i++){
				for(j=0;j<m;j++)
				printf("%c  ",maze[i][j]);
				printf("\n\n");
			}
			printf("\n\nToplanan Maddeler:\n%d adet P+\n%d adet P-\n%d adet e+\n%d adet e- \n",P,p,E,e);
			}
			{
			sleep(0);
			system("cls");
			printf("Tebrikler cikisa ulastiniz.");
			printf("\n\nToplanan Maddeler:\n%d adet P+\n%d adet P-\n%d adet e+\n%d adet e- \n",P,p,E,e);
			}
			printf("\n\n");
			{if(p==0 || E==0)
			{printf("0 adet karsit madde uretildi.");}
			else if(p<E)
			{printf("%d adet karsit madde uretildi.",p);}
			else if(E<p)
			{printf("%d adet karsit madde uretildi.",E);}
			return 0;}
		}
	}
}
}

return 0;}
