#include <stdio.h>
#include <conio.h>
#include <stdlib.h> 
int main(){
	int corner;
	cornererror:
	printf("Enter polygon corner amount.");
	scanf("%d",&corner);
	if(corner<3){
		printf("Not enough corners to make polygon.Type again.\n\n");
		goto cornererror;
	}
	float points[corner][2];
	dimensionerror:
	for(int i=0;i<corner;i++){
		sameerror:
		printf("\n%d. X position: ",i+1);
		scanf("%f",&points[i][0]);
		printf("%d. Y position: ",i+1);
		scanf("%f",&points[i][1]);
		for(int j=0;i>=j;j++){
			for(int x=0;x<j;x++){
				if(points[x][0]==points[j][0]&&points[x][1]==points[j][1]){
					printf("%d. and %d. points have same positions. Please type X and Y for %d. again.\n",x+1,j+1,j+1);
					i=j;
						goto sameerror;
				}
			}
		}
	}
	for(int j=0;j<corner-2;j++){
		if((points[j][0]==points[j+1][0]&&points[j+1][0]==points[j+2][0]||points[j][1]==points[j+1][1] &&points[j+1][1]==points[j+2][1])){
			printf("\nThere are 3 or more points on same x or y plane that doesnt make corner.\nPlease type points again to make polygon shape true. Or restart app and type correct polygon corner amount \n");
			goto dimensionerror;
		}
	}
	for(int j=0;j<corner-2;j++){
		if(!(points[j][1]==0||points[j+1][1]==0||points[j+2][1]==0)){ 
			float m1=points[j][0]/points[j][1];
			float m2=points[j+1][0]/points[j+1][1];
			float m3=points[j+2][0]/points[j+2][1];
			if((m1==m2&&m2==m3)){
				printf("\nThere are 3 or more points on same x or y plane that doesnt make corner.\nPlease type points again to make polygon shape true. Or restart app and type correct polygon corner amount \n");
				goto dimensionerror;
			}
		}
		else if(points[j][0]==points[j][1]&&points[j+1][0]==points[j+1][1]&&points[j+2][0]==points[j+2][1]){ 
			printf("\nThere are 3 or more points on same x or y plane that doesnt make corner.\nPlease type points again to make polygon shape true. Or restart app and type correct polygon corner amount \n");
			goto dimensionerror;
		}
	}
	float x,b,c,f,k,h,o,p,t,posxx,posyy,posx,posy;
	for(int j=0;corner-2>j;j++){
		int x=j+2;
		for(;corner-1>x;x++){
			h=-(points[0][1]-points[corner-1][1]);//yson-y1
			o=-(points[0][0]-points[corner-1][0]);//xson-x1
			b=-(points[j][1]-points[j+1][1]);//y2-y1
			c=-(points[j][0]-points[j+1][0]);//x2-x1
			f=-(points[x][1]-points[x+1][1]);//y4-y3	
			k=-(points[x][0]-points[x+1][0]);//x4-x3
			p=-(points[x-1][1]-points[x][1]);//y3-y2	
			t=-(points[x-1][0]-points[x][0]);//x3-x2
			if(!(b*k==c*f)){
				posx=((points[j+1][0]*points[j][1]-points[j+1][1]*points[j][0])*k-(points[x+1][0]*points[x][1]-points[x+1][1]*points[x][0])*c)/(c*f-b*k);
				posy=((points[j+1][0]*points[j][1]-points[j+1][1]*points[j][0])*f-(points[x+1][0]*points[x][1]-points[x+1][1]*points[x][0])*b)/(c*f-b*k);
				if((((posx<=points[j][0]&&posx>=points[j+1][0])|(posx<=points[j+1][0]&&posx>=points[j][0]))&&((posx<=points[x][0]&&posx>=points[x+1][0])||((posx<=points[x+1][0]&&posx>=points[x][0]))))&&(((posy<=points[j+1][1]&&posy>=points[j][1])||(posy<=points[j][1]&&posy>=points[j+1][1]))&&((posy<=points[x][1]&&posy>=points[x+1][1])||(posy<=points[x+1][1]&&posy>=points[x][1])))){
					printf("These lines do not form a simple connected polygon.");
					return(0);
				}
			}
			if(!(h*t==p*o)){
				posxx=((points[corner-1][0]*points[0][1]-points[0][0]*points[corner-1][1])*t-(points[x][0]*points[x-1][1]-points[x-1][0]*points[x][1])*o)/(t*h-p*o);
				posyy=-((points[corner-1][0]*points[0][1]-points[0][0]*points[corner-1][1])*p-(points[x][0]*points[x-1][1]-points[x-1][0]*points[x][1])*h)/(t*h-p*o);
				if((((posxx<=points[0][0]&&posxx>=points[corner-1][0])||(posxx<=points[corner-1][0]&&posxx>=points[0][0]))&&((posxx<=points[x-1][0]&&posxx>=points[x][0])||(posxx<=points[x][0]&&posxx>=points[x-1][0]))) && (((posyy<=points[0][1]&&posyy>=points[corner-1][1])||(posyy<=points[corner-1][1]&&posyy>=points[0][1]))&&((posyy<=points[x-1][1]&&posyy>=points[x][1])||(posyy<=points[x][1]&&posyy>=points[x-1][1])))){
					printf("These lines do not form a simple connected polygon.");
					return(0);
				}
			}
		}
	}
	fflush(stdin); 
	printf("\nPress 'E' if you want to check P(x,y) whether P is on polygon or not.\n");//Nokta kontrolü
	char check=getch();
	if(check=='E'||check=='e'){
		float P[2],h=0;
		printf("X: ");
		scanf("%f",&P[0]);
		printf("Y: ");
		scanf("%f",&P[1]);
		for(int j=0;corner-1>j;j++){
			if(((points[j+1][0]-points[j][0])/(points[j+1][1]-points[j][1]))==(points[j+1][0]-P[0])/(points[j+1][1]-P[1])){
				printf("The point is on polygon.");
				return(0);
			}
		}
	printf("The point is not on polygon.");
	}
}
