#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <string.h>
#pragma pack(1) 
struct Student
{
	int stdno;
	char name[20];
	char surname[20];
	char adress[20];
	int year;
};
struct Item 
{
	struct Item *next;
	struct Student std;
};
struct List 
{
	struct Item *list;
};
// Bo� liste olu�turur
struct List *create_list(struct List *pl);
//Listenin ba��na bir eleman ekle
void insert_elm(struct List *pl,struct Student std);
// Listenin sonuna bir eleman ekle
void append_elm(struct List *pl,struct Student std);
// Belirtilen ��renciyi listeden ��kar
void remove_elm(struct List *pl,int val);
// Listedeki eleman say�s�n� bul
int length(struct List *pl);
// Listedeki elemanlar� ekrana yaz
void display(struct List *pl);
// Listenin sonunda yer alan elaman�n g�stergecini bul
struct Item *atEnd(struct List *pl);
struct List *create_list(struct List *pl)
// Bo� liste olu�turur
{
	
	pl->list=0;
	return pl;
}
struct Item *atPrv(struct List *pl, int key)
{
	struct Item *curr=0,*temp=0;
	temp=curr=pl->list;
	if(temp==0) return 0;
	while(curr->std.stdno<key) 
	{
		temp=curr;
		if(curr->next==0) break;
		curr=curr->next;
	}
	
   	return temp;
}
void insert_elm(struct List *pl, struct Student std)
// listenin ba��na yeni bir eleman ekler.
{
	struct Item *pt = (struct Item *)malloc(sizeof(struct Item));
	struct Item *tmpdata = (struct Item *)malloc(sizeof(struct Item));
	pt->std = std;
	tmpdata=pl->list;
	
	if(pl->list == 0 || ((pl->list)->std).stdno>(pt->std).stdno){
		pt->next = pl->list;
		pl->list = pt;}
	else{
	while(tmpdata->next!=0 && (pt->std).stdno>((tmpdata->next)->std).stdno)
		tmpdata=tmpdata->next;
		if(tmpdata->next==0){
			append_elm(pl,pt->std);}
		else{
			pt->next=tmpdata->next;
			tmpdata->next=pt;
		}
	}
}
void append_elm(struct List *pl, struct Student std)
// listenin sonuna yeni bir eleman ekler.
{
	struct Item *pt = (struct Item *)malloc(sizeof(struct Item));
	pt->std = std;
	pt->next = 0;
	if (pl->list == 0)  pl->list = pt;
	else atEnd(pl)->next = pt;
}
struct Item *atEnd(struct List *pl)
// listenin son eleman�n� bulup onu g�steren g�sterge�i d�ner.
{
	struct Item *curr;
	if (pl->list == 0)
		return 0; // liste bo�. 
	curr = pl->list;
	while (curr->next)
		curr = curr->next;
	return curr;
}
void remove_elm(struct List *pl,int val)
// Parametre olarak belirtilen de�ere sahip elaman� bulup listeden ��kar�r.
{
	struct Item *prv=0, *pt = pl->list; // listenin ba��ndaki eleman i�in.
    if ( (pt) && ((pt->std).stdno==val) )
	{
		pl->list= pt->next;
        free(pt);
	}
    // listenin ortas�nda yer alan elemanlar i�in.
    else if (pt)
	{
		for ( prv=pt, pt= pt->next;((pt) && ((pt->std).stdno != val));
        prv=prv->next, pt=pt->next);
		if ((pt->std).stdno==val)
        {
			prv->next=pt->next;
			free(pt);
		}
	}
 }
int length(struct List *pl)
{
	struct Item *tmp=pl->list;
	int i=0;
    while (tmp)  
	{
		i++;
		tmp=tmp->next;
	}
	return i;
}
void display(struct List *pl)
{
	struct Item *tmp=pl->list;
	while (tmp)
	{
		printf("\n%d ", (tmp->std).stdno);
		printf("\n%s ", (tmp->std).name);
		printf("\n%s ", (tmp->std).surname);
		printf("\n%s ", (tmp->std).adress);
		printf("\n%d ", (tmp->std).year) ;
		printf("\n\n");
		tmp=tmp->next;
   }
}           
int main()
{
	struct List *pl=0;
	pl= create_list(pl);
	struct Student std;
	std.stdno=47;
	strcpy(std.name,"Ahmet");
    strcpy(std.surname,"Tekin");
	strcpy(std.adress,"Matematik M�h.");
	std.year=1;
	insert_elm(pl,std);

	std.stdno=42;
	strcpy(std.name,"Burak");
    strcpy(std.surname,"Y�lmaz");
	strcpy(std.adress,"Bilgisayar M�h.");
	std.year=4;

	insert_elm(pl,std);
	std.stdno=35;
	strcpy(std.name,"Burkay");
    strcpy(std.surname,"Demir");
	strcpy(std.adress,"Bilgisayar M�h.");
	std.year=2;
	insert_elm(pl,std);

	std.stdno=43;
	strcpy(std.name,"Figen");
    strcpy(std.surname,"Can");
	strcpy(std.adress,"Cevre M�h.");
	std.year=3;
	insert_elm(pl,std);
	
	std.stdno=41;
	strcpy(std.name,"Ahmet");
    strcpy(std.surname,"Orhan");
	strcpy(std.adress,"Cevre M�h.");
	std.year=4;
	insert_elm(pl,std);
	
	std.stdno=46;
	strcpy(std.name,"Ali");
    strcpy(std.surname,"Candemir");
	strcpy(std.adress,"Cevre M�h.");
	std.year=3;
	insert_elm(pl,std);
	
	std.stdno=50;
	strcpy(std.name,"Burki");
    strcpy(std.surname,"Da�deviren");
	strcpy(std.adress,"Cevre M�h.");
	std.year=3;
	insert_elm(pl,std);

	std.stdno=98;
	strcpy(std.name,"Hakan");
    strcpy(std.surname,"Ero�lu");
	strcpy(std.adress,"Cevre M�h.");
	std.year=3;
	insert_elm(pl,std);

	std.stdno=72;
	strcpy(std.name,"Nuran");
    strcpy(std.surname,"Demirci");
	strcpy(std.adress,"Cevre M�h.");
	std.year=3;
	insert_elm(pl,std);

	std.stdno=10;
	strcpy(std.name,"S�leyman");
    strcpy(std.surname,"Haktan");
	strcpy(std.adress,"Cevre M�h.");
	std.year=3;
	insert_elm(pl,std);

	remove_elm(pl,10);
	
	display(pl);
	free(pl);
	return 0;
}


