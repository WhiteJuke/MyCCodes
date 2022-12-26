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
// Boş liste oluşturur
struct List *create_list(struct List *pl);
//Listenin başına bir eleman ekle
void insert_elm(struct List *pl,struct Student std);
// Listenin sonuna bir eleman ekle
void append_elm(struct List *pl,struct Student std);
// Belirtilen öğrenciyi listeden çıkar
void remove_elm(struct List *pl,int val);
// Listedeki eleman sayısını bul
int length(struct List *pl);
// Listedeki elemanları ekrana yaz
void display(struct List *pl);
// Listenin sonunda yer alan elamanın göstergecini bul
struct Item *atEnd(struct List *pl);
struct List *create_list(struct List *pl)
// Boş liste oluşturur
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
// listenin başına yeni bir eleman ekler.
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
// listenin son elemanını bulup onu gösteren göstergeçi döner.
{
	struct Item *curr;
	if (pl->list == 0)
		return 0; // liste boş. 
	curr = pl->list;
	while (curr->next)
		curr = curr->next;
	return curr;
}
void remove_elm(struct List *pl,int val)
// Parametre olarak belirtilen değere sahip elamanı bulup listeden çıkarır.
{
	struct Item *prv=0, *pt = pl->list; // listenin başındaki eleman için.
    if ( (pt) && ((pt->std).stdno==val) )
	{
		pl->list= pt->next;
        free(pt);
	}
    // listenin ortasında yer alan elemanlar için.
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
	strcpy(std.adress,"Matematik Müh.");
	std.year=1;
	insert_elm(pl,std);

	std.stdno=42;
	strcpy(std.name,"Burak");
    strcpy(std.surname,"Yılmaz");
	strcpy(std.adress,"Bilgisayar Müh.");
	std.year=4;

	insert_elm(pl,std);
	std.stdno=35;
	strcpy(std.name,"Burkay");
    strcpy(std.surname,"Demir");
	strcpy(std.adress,"Bilgisayar Müh.");
	std.year=2;
	insert_elm(pl,std);

	std.stdno=43;
	strcpy(std.name,"Figen");
    strcpy(std.surname,"Can");
	strcpy(std.adress,"Cevre Müh.");
	std.year=3;
	insert_elm(pl,std);
	
	std.stdno=41;
	strcpy(std.name,"Ahmet");
    strcpy(std.surname,"Orhan");
	strcpy(std.adress,"Cevre Müh.");
	std.year=4;
	insert_elm(pl,std);
	
	std.stdno=46;
	strcpy(std.name,"Ali");
    strcpy(std.surname,"Candemir");
	strcpy(std.adress,"Cevre Müh.");
	std.year=3;
	insert_elm(pl,std);
	
	std.stdno=50;
	strcpy(std.name,"Burki");
    strcpy(std.surname,"Dağdeviren");
	strcpy(std.adress,"Cevre Müh.");
	std.year=3;
	insert_elm(pl,std);

	std.stdno=98;
	strcpy(std.name,"Hakan");
    strcpy(std.surname,"Eroğlu");
	strcpy(std.adress,"Cevre Müh.");
	std.year=3;
	insert_elm(pl,std);

	std.stdno=72;
	strcpy(std.name,"Nuran");
    strcpy(std.surname,"Demirci");
	strcpy(std.adress,"Cevre Müh.");
	std.year=3;
	insert_elm(pl,std);

	std.stdno=10;
	strcpy(std.name,"Süleyman");
    strcpy(std.surname,"Haktan");
	strcpy(std.adress,"Cevre Müh.");
	std.year=3;
	insert_elm(pl,std);

	remove_elm(pl,10);
	
	display(pl);
	free(pl);
	return 0;
}


