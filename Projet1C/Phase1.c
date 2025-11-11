#include<stdio.h>

int main()
{
	int a;
	int b;
	int s;
	printf(" Veuillez entrer deux entiers :\n"); /*Saisie de a et b*/
	scanf("%d %d", &a,&b); /*Lescture de a et b*/
	s = a+b; /*Calcul de la sommes de a+b*/
	printf("La somme est : %d\n", s); /*affichage de la somme de a+b*/
	return 0; 
}