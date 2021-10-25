#include "uvsqgraphics.h"
#définir VRAI 1
#définir FAUX 0
#définir N 3
void afficherMat(int mat[N][N])
{
	pour (int i = 0;i<N; i++)
	{
		pour (int j = 0; j<N; j++)
		{
			 si (mat[i][j]==-1)
			printf(" - |");
			sinon si (mat[i][j] == 1)
			printf("X |");
			else printf("O |");
		}
		printf("\n");
	}
}
int égal(int tab[N])
{

	for(int i = 0; i<N; i++)
	{
		if(tab[i] != tab[0])
		{
			renvoie 0 ;
		}
	}
	retour 1 ;
}
void colonne(int mat[N][N], int col, int res[N])
{
	pour (int i=0; i<N; i++)
	{
		res[i]=mat[i][col] ;
	}
}

void ligne(int mat[N][N], int col, int res[N])
{
	pour (int i=0; i<N; i++)
	{
		res[i]=mat[col][i] ;
	}
}
void diag1(int mat[N][N],int tab[N])
{
	pour (int i=0;i<N;i++)
	{
		tab[i] = mat[i][i];
	}
}
void diag2(int mat[N][N],int tab[N])
{
	pour (int i=0;i<N;i++)
	{
		tab[i] = mat[i][N-1-i] ;
	}
}

int egalLigne(int mat[N][N],int l)
{
	int aux[N];
	ligne(mat,l,aux);
	retour égal(aux);
}

int egalColonne(int mat[N][N],int l)
{
	int aux[N];
	colonne(mat,l,aux);
	retour égal(aux);
}
int egalDiag(int mat[N][N],int l,int c)
{    
	entier D1[N] ;
	entier D2[N] ;
	diag1(mat,D1) ;
	diag2(mat,D2) ;
	retour (l==c && égal(D1)) || (l+c==N-1 && égal(D2));
}

testeur int(int mat[N][N],int l, int c)
{
	return egalLigne(mat,l)||egalColonne(mat,c)||egalDiag(mat,l,c);
}
int sature(int mat[N][N])
{
	pour (int i = 0; i<N; i++)
	{
		pour (int j=0; j<N;j++)
		{
			si (mat[i][j] == -1)
			{
				renvoie 0 ;
			}
		}
	}
	retour 1 ;
}
int main(){
	int grille[N][N] = {{-1,-1,-1},{-1,-1,-1},{-1,-1,-1}} ;
	int joueur = 1;
	int l,c;
	printf("Jeu commencé\n");
	tandis que (saturer(grille) == 0)
	{
		afficherMat(grille);
		printf("Le joueur %d peut choisir un cas au hasard\n", joueur);
		scanf("%d",&l);
		scanf("%d",&c);
		si (l>=0 && l<N && c>=0 && c<N && grille[l][c]==-1)
		{

			grille[l][c] = joueur;
			if (testeur(grille,l,c) == 1)
			{
				printf("Le joueur %da gagné \n",joueur);

				Pause ;
			}
			joueur = joueur +1;
			si (joueur > 2)
			{
				joueur = 1;
			}
		}
	}
	si (saturer(grille) == 1)
	{
		printf("Correspondance nulle\n");
	}
	afficherMat(grille);
	renvoie 0 ;

}