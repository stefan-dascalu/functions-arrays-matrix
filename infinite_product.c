#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long long putere(long long p) //ridicare la putere
{
	long long i, rezultat = 1;
	for (i = 1; i <= p; i++)
		rezultat *= 8;
	return rezultat;
}

	long long baza8_baza10(long long numar8) //transformare baza 8 in baza 10
{
	long long numar10 = 0, p = 0;
	while (numar8 != 0) {
		numar10 += (numar8 % 10) * putere(p);
		p++;
		numar8 /= 10;
	}

	return numar10;
}

int main(void)
{
	//initializare, declarare
	long long a_max, b_max, a_MAX, b_MAX, N, i, a, b, ps;
	double n_a, n_b;
	scanf("%lld", &N);
	n_a = 0;
	n_b = 0;
	ps = 0;
	a_max = -1;
	b_max = -1;
	a_MAX = -1;
	b_MAX = -1;
	for (i = 0; i < N; i++) {
		scanf("%lld%lld", &a, &b);  //citirea vectorilor
		a = baza8_baza10(a);		//transformarile vectorilor in baza 10
		b = baza8_baza10(b);
		if (a > a_MAX) {  //gasirea celui de-al doilea maxim din primul vector
			a_max = a_MAX;
			a_MAX = a;
		} else if (a > a_max && a_MAX != a) {
			a_max = a;
			} else if (a_MAX == a_max && a_MAX != a) {
				a_max = a;
		}
		if (b > b_MAX) { //gasirea celui de-al doilea maxim din al doilea vector
			b_max = b_MAX;
			b_MAX = b;
		} else if (b > b_max && b_MAX != b) {
			b_max = b;
			} else if (b_MAX == b_max && b_max != b) {
				b_max = b;
		}
		ps += (double)(a * b); //produsul scalar
		n_a += (double)(a * a); //norma lui a
		n_b += (double)(b * b); // norma lui b
	}

	n_a = (double)(sqrt(n_a));

	n_b = (double)(sqrt(n_b));

	printf("%lld\n%lld %lld\n%0.7F %0.7F\n", ps, a_max, b_max, n_a, n_b);
	//afisarea corespunzatoare cu cele 7 zecimale
	return 0;
}
