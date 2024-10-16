#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define NMAX 100

// functia verifica daca o linie sau coloana respecta restrictiile date
int check_line(int grid[NMAX], int n, int restricts[NMAX], int length)
{
	int index = 0;

	for (int i = 0; i < n;) {
		if (grid[i] == 1) {
			int num = 0;

			// cate celule consecutive sunt marcate
			while (i < n && grid[i] == 1) {
				num++;
				i++;
			}

			// verificam daca numarul de celule consecutive
			// corespunde cu restrictia
			if (index >= length || restricts[index] != num)
				return 0;

			index++;
		} else {
			i++;
		}
	}

	if (index != length)
		return 0;

	return 1;
}

int main(void)
{
	int t;
	scanf("%d", &t);

	while (t--) {
		int n, m;
		scanf("%d%d", &n, &m);

		int restricts_row[n][NMAX], restricts_col[m][NMAX];
		int num_row[n], num_col[m];

		// initializam restrictiile pentru randuri si coloane
		for (int i = 0; i < n; i++)
			for (int j = 0; j < NMAX; j++)
				restricts_row[i][j] = 0;

		for (int i = 0; i < m; i++) {
			for (int j = 0; j < NMAX; j++)
				restricts_col[i][j] = 0;
		}

		// citim restrictiile pentru fiecare rand si coloana
		for (int i = 0; i < n; i++) {
			scanf("%d", &num_row[i]);
			for (int j = 0; j < num_row[i]; j++)
				scanf("%d", &restricts_row[i][j]);
		}

		for (int i = 0; i < m; i++) {
			scanf("%d", &num_col[i]);
			for (int j = 0; j < num_col[i]; j++)
				scanf("%d", &restricts_col[i][j]);
		}

		int grid[NMAX][NMAX];

		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				scanf("%d", &grid[i][j]);

		int ok = 1;

		// verificam randurile
		for (int i = 0; i < n; i++) {
			if (!check_line(grid[i], m, restricts_row[i], num_row[i])) {
				ok = 0;
				break;
			}
		}
		// verificam coloanele
		for (int i = 0; i < m && ok; i++) {
			int col[NMAX];
			for (int j = 0; j < n; j++)
				col[j] = grid[j][i];
			if (!check_line(col, n, restricts_col[i], num_col[i])) {
				ok = 0;
				break;
			}
		}

		if (ok)
			printf("Corect\n");
		else
			printf("Eroare\n");
	}
	return 0;
}
