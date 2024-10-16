#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// functia sortare sorteaza doua tablouri index si dif in ordine descrescatoare
void sortare(int index[], int dif[], int n)
{
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (dif[j] > dif[i]) {
				int aux = dif[i];
				dif[i] = dif[j];
				dif[j] = aux;

				aux = index[i];
				index[i] = index[j];
				index[j] = aux;
			}
		}
	}
}

// functia returneaza numarul minim de materii pentru care nota trebuie
// marita astfel incat punctajul total sa fie cel putin p_min
int minim_materii_pentru_marit(int n, int c[], int x[], int p_min)
{
	int punctaj = 0, m = 0, num = 0, dif[n], index[n];
	for (int i = 0; i < n; i++)
		punctaj += c[i] * x[i];

	// calculam diferenta dintre punctajul potential (daca nota ar fi 10)
	// si punctajul curent pentru fiecare materie
	for (int i = 0; i < n; i++) {
		if (c[i] < 10) {
			dif[num] = x[i] * (10 - c[i]);
			index[num] = i;
			num++;
		}
	}

	sortare(index, dif, num);

	// incercam sa marim notele materiilor in ordinea diferentei
	// pana cand punctajul devine mai mare sau egal cu p_min
	for (int i = 0; i < num; i++) {
		punctaj += dif[i];
		m++;

		if (punctaj >= p_min)
			return m;
	}

	return -1;
}

int main(void)
{
	int n, p_min;

	scanf("%d", &n);

	int c[n], x[n];

	// citim notele pentru fiecare materie
	for (int i = 0; i < n; i++)
		scanf("%d", &c[i]);

	// citim punctajele pentru fiecare materie
	for (int i = 0; i < n; i++)
		scanf("%d", &x[i]);

	scanf("%d", &p_min);

	printf("%d\n", minim_materii_pentru_marit(n, c, x, p_min));
	return 0;
}
