2023 Dascalu Stefan-Nicolae Grupa 321CA
Tema 1
Programarea calculatoarelor - Functii, Vectori si Matrici

Problema 1 - Un produs infinit
Problema ne cere sa calculam produsul scalar, normelele a n perechi de 2 vectori a si b si aflarea celui de-al doilea maxim din primul vector, respectiv cel de-al doilea vector, citirea vectorilor realizandu-se in baza 8.
In program sunt implementate 2 functii ajutatoare :
1.putere - contribuie la ridicarea la putere;
2.baza8_baza10 - contribuie la transformarea vectorilor cititi din baza 8 in baza 10;
In functia main, dupa declararea si initializarea variabilelor corespunzatoare, se citesc cele n perechi de vectori, care sunt transformate in baza 10. Apoi se cauta cel de-al doilea maxim din primul vector, respectiv din al doilea vector, fiind retinute. Dupa maxime, se calculeaza produsul scalar si normele conform formulelor matematice. Afisarea se realizeaza ca in cerinta, normele avand 7 zecimale.

Problema 2 - Perfectionarea punctajelor
Problema ne cere sa aflam numarul minim de materii pentru care nota trebuie marita astfel incat punctajul total sa ajunga la o valoare minima specificata, p_min.
Logica principala a implementarii se bazeaza pe calculul diferentei dintre punctajul potential (daca nota pentru o materie ar fi maxima, adica 10) si punctajul curent pentru fiecare materie.
Functia sortare este responsabila pentru sortarea descrescatoare a doua tablouri: index si dif. Sortarea se bazeaza pe valoarea diferentei, iar in caz de swap, schimba si indicii materiilor pentru a pastra corespondenta.
In functia minim_materii_pentru_marit, se calculeaza punctajul total initial. Ulterior, pentru fiecare materie care nu are deja nota maxima, se calculeaza diferenta de punctaj si se adauga in tabloul dif. Diferentele sunt apoi sortate descrescator si se incearca marirea notelor materiilor in ordinea acestei diferente pana cand punctajul acumulat devine mai mare sau egal cu p_min.

Problema 3 - Gigel si tabla de sah
Problema ne cere sa mutam pe tabla de sah o piesa speciala, determinand totodata distanta totala parcursa de piesa, precum si coordonatele campului pe care se află piesa la momentul final.
In program este implementata functia check_y_final pentru a ne fi mai usor de a determina formatul afisarii.
In functia main, dupa declararea si initiliazarea variabilelor corespunzatoare, se incepe mutarea piesei de sah din coltul stanga sus, de la pozitia (0,0). Se verifica pozitivitatea numarului de pe bilet si daca patratul in care se afla este alb sau negru. Se retin coordonatele campului si distanta. Dupa se calculeaza linia corespunzatoare tablei de sah si coloana care este transformata folosind reprezentarea existenta in Microsoft Excel.

Problema 4 - Nonogram checker
Problema ne cere sa validam un grid avand la dispozitie un set specific de restrictii pentru linii si coloane.
Elementul cheie al implementarii este functia check_line, care preia o linie sau o coloana si analizeaza restrictiile date. Aceasta parcurge sectiunea data si se asigura ca grupurile de celule consecutive marcate se potrivesc cu valorile din restrictii.
În functia main se initializeaza si se citesc datele: dimensiunile grid-ului, restrictiile pentru randuri si coloane si structura efectiva a grid-ului. Odata cu citirea completa, grid-ul este trecut printr-o serie de verificari, linie cu linie, apoi coloana cu coloana, folosind functia check_line mentionata anterior.Rezultatul acestor verificari determina output-ul final: in cazul unui grid care respecta toate restrictiile, se va afisa "Corect". In situatia opusa, unde cel putin o linie sau coloana nu corespunde cu restrictiile date, se va afisa "Eroare".

