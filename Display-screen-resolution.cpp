#include <windows.h>
#include <iostream>

using namespace std;

int main() {

	int l = GetSystemMetrics(SM_CXSCREEN); // RÃ©cupÃ¨re la valeur en pixels de la largeur d'un Ã©cran
	int h = GetSystemMetrics(SM_CYSCREEN); // RÃ©cupÃ¨re la valeur en pixels de la hauteur d'un Ã©cran
	int PIXEL_MAX = l * h; // Calcul de la surface en pixels de l'Ã©cran

	SetConsoleTitleA("DisplayScreenResolution");  // Titre + crÃ©ation + placement de la fenÃªtre 
	HWND hwnd = GetConsoleWindow();
	MoveWindow(hwnd, l / 2, h / 2, 500, 200, TRUE);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10); // Couleur rouge

	cout << "La largeur (en pixel) de votre ecran est de: ";
	printf("%d px", l); // Affichage de la largeur en pixel de l'Ã©cran.

	cout << " \n\n";

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12); //Couleur verte
	cout << "La hauteur (en pixel) de votre ecran est de: ";
	printf("%d px", h); // Affichage de la hauteur en pixel de l'Ã©cran

	cout << " \n\n";

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9); //Couleur bleue
	cout << "Soit au total ";
	printf("%d pixels !", PIXEL_MAX);
	// Une rÃ©solution de X * Y (1920 * 1080 par exemple) signifie qu'il existe dans l'image X (1920) colonnes et Y (1080) lignes 
	//un certain nombre de pixels (soit 2 073 600 pixels au total)

	Sleep(7000); //Timer de 7s avant fermeture du programme
	CloseWindow(hwnd);
}
