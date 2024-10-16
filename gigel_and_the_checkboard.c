#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define NMAX 1001

void check_y_final(int y_final)
{
	if (y_final < 26) {
		printf("%c\n", y_final + 65);
	} else if (y_final > 26 && y_final < 702) {
		printf("%c", (y_final / 26 + 64));
		printf("%c\n", (y_final % 26 + 65));
		} else if (y_final > 702) {
			printf("%c", 'A');
			printf("%c", (y_final / 26 + 38));
			printf("%c\n", (y_final % 26 + 65));
			} else if (y_final == 26) {
				printf("AA\n");
			}
					else if (y_final == 702) {
						printf("AAA\n");
					}
}

int main(void)
{
	long long n, i, j, a[NMAX][NMAX], x_final, distance, x;
	int y_final; //initializare, declarare
	distance = 0;
	scanf("%lld", &n);
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			scanf("%lld", &a[i][j]); //citirea matricei
	i = 0;
	j = 0;
	x = a[i][j];
	while (x != 0) {
		if ((i + j) % 2 != 0 && x > 0) { //verif zona neagra + element pozitiv
			a[i][j] = 0; //pentru a nu ne intersecta cu acelasi element din nou
			if (i + x < n) //verif daca depaseste linia
				i += x;
			else if (i + x == n)
				i = 0;
				else
					i = (i + x) % n;
			distance += x;
			x = a[i][j];
			x_final = i;
			y_final = j;
		} else {
			if ((i + j) % 2 != 0 && x < 0) {
				//verif zona neagra + element negativ
				a[i][j] = 0;
				//pentru a nu ne intersecta cu acelasi element din nou
				if (i + x >= 0) //verif daca depaseste linia
					i += x;
				else
					i = n + (i + x) % n;
				distance += -x;
				x = a[i][j];
				x_final = i;
				y_final = j;
			}
		}
		if ((i + j) % 2 == 0 && x > 0) { //verif zona alba + element pozitiv
			a[i][j] = 0; //pentru a nu ne intersecta cu acelasi element din nou
			if (j + x < n) //verif daca depaseste coloana
				j += x;
			else if (j + x == n)
				j = 0;
				else
					j = (j + x) % n;
			distance += x;
			x = a[i][j];
			x_final = i;
			y_final = j;
		} else if ((i + j) % 2 == 0 && x < 0) {
			//verif zona alba + element negativ
			a[i][j] = 0; //pentru a nu ne intersecta cu acelasi element din nou
			if (j + x >= 0) //verif daca depaseste coloana
				j += x;
			else
				j = n + (j + x) % n;

			distance += -x;
			x = a[i][j];
			x_final = i;
			y_final = j;
		}
	}
	x_final = n - x_final; // calcularea liniei corespunzatoare tablei de sah
	printf("%lld\n%lld ", distance, x_final);
	check_y_final(y_final);
	return 0;
}
