#include <stdio.h>	
#include <string.h>
typedef char infor1[30];
typedef float infor2;
typedef int infor3;
struct element{
	infor1 ht;
	infor2 cc;
	infor3 cntc;
	element *next;
};
typedef element *List;
List F;
infor1 x;
infor2 y;
infor3 z;

void Create(List &F){
	F = NULL;
}

void Display( List &F){
	List p;
	p = F;
	while(p!= NULL)
	{
		printf("\n %15s %7.2f %7d",(*p).ht, (*p).cc, (*p).cntc);
		p = (*p).next;
	}
}

void InsertFirst (List &F, infor1 x, infor2 y, infor3 z) {
	List p;
	p = new element;
	strcpy((*p).ht,x);
	(*p).cc = y;
	(*p).cntc = z;
	(*p).next = F;
	F = p;
}

void nhap(List &F) {
	F = NULL;
	do{
		printf("\nNhap ten: "); fflush(stdin); gets(x);
		if(strlen(x)!=0){
			printf("\nNhap chieu cao:");   scanf("%f", &y);
			 z = 100*y - 105;
		}
		InsertFirst(F, x, y, z);
	}while (strlen(x)==0);
	
}



}




