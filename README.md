# 2023 Dascalu Stefan-Nicolae - Grupa 321CA  
## Programarea calculatoarelor - Tema 1: Funcții, Vectori și Matrici

### Problema 1 - Un produs infinit
Problema ne cere să calculăm **produsul scalar**, **normele** a `n` perechi de doi vectori `a` și `b`, și să aflăm **al doilea maxim** din ambii vectori. Citirea vectorilor se face în **baza 8**.

În program sunt implementate 2 funcții ajutătoare:
1. **`putere`** - pentru ridicarea la putere;
2. **`baza8_baza10`** - pentru transformarea vectorilor citiți din baza 8 în baza 10.

În **funcția `main`**, după declararea și inițializarea variabilelor, se citesc perechile de vectori `n`, care sunt apoi transformate în baza 10. Ulterior, se determină și se rețin **al doilea maxim** din ambii vectori. După aceasta, se calculează **produsul scalar** și **normele** conform formulelor matematice. **Afișarea** se face conform cerinței, normele având 7 zecimale.

### Problema 2 - Perfectionarea punctajelor
Problema ne cere să determinăm numărul minim de materii pentru care trebuie mărită nota astfel încât punctajul total să ajungă la o valoare minimă specificată, **`p_min`**.

Logica principală constă în calcularea **diferenței dintre punctajul maxim posibil** (dacă nota la o materie ar fi 10) și **punctajul curent** pentru fiecare materie.

Funcția **`sortare`** sortează descrescător două tablouri: **`index`** și **`dif`**, în funcție de valoarea diferențelor. La un swap, sunt actualizați și indicii pentru a menține corespondența.

În funcția **`minim_materii_pentru_marit`**, se calculează punctajul total inițial. Pentru fiecare materie care nu are nota maximă, se calculează diferența de punctaj și se adaugă în tabloul **`dif`**. Diferențele sunt apoi sortate descrescător și se măresc notele în ordinea diferenței până când punctajul devine mai mare sau egal cu **`p_min`**.

### Problema 3 - Gigel și tabla de șah
Problema solicită să mutăm o piesă specială pe tabla de șah, determinând **distanța totală parcursă** și **coordonatele finale** ale piesei.

Funcția **`check_y_final`** este implementată pentru a facilita formatul afișării.

În **funcția `main`**, piesa începe mutarea din colțul stânga sus, de la poziția **(0,0)**. Se verifică **numărul de pe bilet** și dacă pătratul este alb sau negru. Se rețin coordonatele și distanța parcursă. Apoi, se calculează linia și coloana corespunzătoare tablei de șah, cu coloana transformată folosind formatul **Microsoft Excel**.

### Problema 4 - Nonogram checker
Problema cere să validăm un grid pe baza unor **restricții specifice** pentru rânduri și coloane.

Elementul cheie este funcția **`check_line`**, care analizează un rând sau o coloană în funcție de restricțiile date, asigurându-se că **grupurile de celule marcate** respectă valorile din restricții.

În **funcția `main`**, se citesc dimensiunile grid-ului, **restricțiile** pentru rânduri și coloane și structura efectivă a grid-ului. După citire, grid-ul este verificat **linie cu linie** și **coloană cu coloană**, folosind funcția **`check_line`**. Rezultatul final: dacă grid-ul respectă toate restricțiile, se afișează "**Corect**", altfel, în caz de eroare, se afișează "**Eroare**".
