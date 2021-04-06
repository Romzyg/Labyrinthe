#include <stdio.h>
  

int main(void) {

	int labyrinthe[15][15] = { {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
							{1,2,0,0,0,0,1,0,0,0,0,1,0,0,1},
							{1,1,1,1,1,0,1,1,1,1,0,1,0,1,1},
							{1,0,0,0,1,0,0,0,1,1,0,0,0,0,1},
							{1,0,1,1,1,1,1,0,1,1,0,1,1,0,1},
							{1,0,0,1,1,1,1,0,0,0,0,0,1,0,1},
							{1,0,1,0,0,0,0,0,1,0,1,0,1,0,1},
							{1,0,1,0,1,1,1,1,1,0,1,1,1,0,1},
							{1,0,1,0,1,1,1,1,1,1,1,0,0,0,1},
							{1,0,1,0,1,0,0,0,0,0,1,0,1,1,1},
							{1,0,1,0,0,0,1,0,1,0,1,0,0,0,1},
							{1,0,1,1,1,1,0,0,1,0,1,1,1,0,1},
							{1,0,1,1,0,1,0,1,1,0,1,1,1,1,1},
							{1,0,0,0,0,1,0,0,1,0,0,0,0,0,3},
							{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1} }; //Grille de 15/15

}

//Fonction Printable pour afficher le labyrinthe
void printable(int labyrinthe[15][15]) {
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 15; j++) {
			if (labyrinthe[i][j] == 0 || labyrinthe[i][j] == 3) {
				printf(" ");
			}
			if (labyrinthe[i][j] == 1) {
				printf("|");
			}
			if (labyrinthe[i][j] == 2) {
				printf("X");
			}
		}
	printf("\n");
	}
}

//Fonction pour entrer les valeurs 
void 

//Fonction switch pour diriger son pion

//Fonction de vérification

//Fonction de félicitation

