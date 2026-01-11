
#include<stdio.h>

//Phase 1 – Addition de deux nombres (niveau débutant)

/*
int main()
{
	int a;
	int b;
	int somme;

	printf(" Veuillez entrer deux entiers :\n"); //Saisie de a et b
	scanf("%d %d", &a,&b); //Lescture de a et b

	somme = a+b; //Calcul de la sommes de a+b
	printf("La somme est : %d\n", somme); //affichage de la somme de a+b
	return 0; 
}*/

//Phase 2 – Quatre opérations (niveau intermédiaire)
/*int main()
{
    int menu; 
    int a;
    int b;
    int resultat;
    // Affichage du menu en fontion des 4 operations
    printf("Proposition de menu :\n");

    printf("\nle menu 1 est pour : l'addition\n");
    printf("le menu 2 est pour : la soustraction\n");
    printf("le menu 3 est pour : la multiplication\n");
    printf("le menu 4 est pour : la division\n");
        resultat = a - b;
        printf("Le soustraction des deux est : %d\n", resultat);
    }
    else if (menu == 3)
    {
        resultat = a * b;
        printf("Le produit des deux est : %d\n", resultat);

    }
    else if (menu == 4 && b != 0)
    {
        resultat = a / b;
        printf("Le resultat de la division est : %d\n", resultat);
    }
    else if (menu == 4 && b == 0)
    {
        printf("Erreur : impossible de faire la division par 0");
    }

    return 0;
}*/

//Phase 3 – Calculs en boucle (niveau moyen)
int main()
{
    int menu;
    int a;
    int b;
    int resultat;
    int saisie; // pour quitter en choisissant 0

    do {
        printf("Proposition de menu :\n");

        printf("\n 0 pour quitter\n");
        printf("le menu 1 est pour : l'addition\n");
        printf("le menu 2 est pour : la soustraction\n");
        printf("le menu 3 est pour : la multiplication\n");
        printf("le menu 4 est pour : la division\n");

    
        printf("\nVeuillez choisir votre menu: ");
        scanf("%d", &menu);


        printf("\n Veuillez entrer deux entiers :\n"); //Saisie de a et b
        scanf("%d %d", &a, &b); //Lescture de a et b

    } while (saisie== 0);
     printf("\n bye, a la prochaine:\n");
}