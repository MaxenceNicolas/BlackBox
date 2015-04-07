#include <stdio.h>
#include <stdlib.h>
#include <SDL.h>
#include "laser.h"

int initialiserPlateau(int taille)
{
    //Créé un plateau de taille*taille + 2 lignes et 2 colonnes pour placer entrées/sorties de laser
    //Initialise les cases

    taille += 2;

    int plateau[taille][taille];
    int i = 0;
    for (i; i< taille ; i++)
    {
        int j = 0;
        for (j; j< taille ; j++)
        {
            //Case en bordure de plateau)
            if (i == 0 || j == 0 || i == taille-1 || j== taille-1)
            {
                //Case inexistantes (coins des bordures, on ne peut pas lancer de lasers dessus)
                if (i == j || (i == 0 && j==taille-1) || (i==9 && j==0))
                {
                    plateau[i][j] = -1;
                }
                //Cases cliquables, lancant des lasers
                else
                {
                   plateau[i][j] = 4;
                }
            }

            //Autres cases
            else
            {
                //Cases vides
                plateau[i][j] = 0;
            }
            printf("%d ",plateau[i][j]);
        }
        printf("\n");
    }
    return plateau;
}


int LancerLaser(int plateau, int coordonneClick)
{


}





