//coder par DalasK
#include <windows.h>
#include <iostream>

using namespace std;

int main() {

	int l = GetSystemMetrics(SM_CXSCREEN); // Récupère la valeur en pixels de la largeur d'un écran
	int h = GetSystemMetrics(SM_CYSCREEN); // Récupère la valeur en pixels de la hauteur d'un écran
	int PIXEL_MAX = l * h; // Calcul de la surface en pixels de l'écran

	SetConsoleTitleA("DisplayScreenResolution");  // Titre + création + placement de la fenêtre 
	HWND hwnd = GetConsoleWindow();
	MoveWindow(hwnd, l / 2, h / 2, 500, 200, TRUE); // Bouge la le coin supérieur gauche de la fenêtre au centre de l'écran
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10); // Couleur rouge du texte

	cout << "La largeur (en pixel) de votre ecran est de: ";
	printf("%d px", l); // Affichage de la largeur en pixel de l'écran.

	cout << " \n\n";

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12); //Couleur verte du texte
	cout << "La hauteur (en pixel) de votre ecran est de: ";
	printf("%d px", h); // Affichage de la hauteur en pixel de l'écran

	cout << " \n\n";

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9); //Couleur bleue du texte
	cout << "Soit au total ";
	printf("%d pixels !", PIXEL_MAX);
	// Une résolution de X * Y (1920 * 1080 par exemple) signifie qu'il existe dans l'image X (1920) colonnes et Y (1080) lignes 
	//un certain nombre de pixels (soit 2 073 600 pixels au total)

	Sleep(7000); //Timer de 7s avant fermeture du programme
	CloseWindow(hwnd);
}
