#ifndef PILE_H_INCLUDED
#define PILE_H_INCLUDED

typedef struct {
	int sommet;
	int taille;
	int pile[40];
}PILE;

int estvide(PILE P){
	return P.sommet==0;
}

int estpleine(PILE P){
	return P.sommet==P.taille;
}

void empiler(PILE *P,int v){
	P->pile[P->sommet++]=v;
}
int depiler(PILE *P){
	return P->pile[--P->sommet];
}

#endif
