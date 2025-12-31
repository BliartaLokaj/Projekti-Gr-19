# Guess the Number

## Përshkrimi i Projektit
Ky është një projekt i thjeshtë në **C++** që implementon lojën **"Guess the Number"**.  
Qëllimi i lojës është që përdoruesi të gjejë një numër të fshehtë të gjeneruar random nga kompjuteri.  
Lojëtorët marrin feedback për çdo përpjekje: nëse numri i zgjedhur është më i lartë ose më i ulët se numri i fshehtë, duke i mundësuar përdoruesit të rregullojë guess-et e tij deri në momentin që gjen numrin e saktë.  

Ky projekt demonstron:  
- Përdorimin e variablave dhe tipeve të dhënash në C++  
- Përdorimin e loop-eve (`while`) për iterim deri në plotësimin e kushteve  
- Vendimmarrjen me struktura kushti (`if`, `else if`, `else`)  
- Gjenerimin e numrave random dhe inicializimin e tyre me `srand(time(0))`  

---

## Funksionalitete
- Gjenerim i numrit random nga 1-100  
- Input nga përdoruesi për guess  
- Feedback “Too high” ose “Too low”  
- Numërimi i tentativave dhe shfaqja e tyre në fund  
- Përfundimi i lojës kur numri i saktë gjendet  

---

## Si të përdoret
1. Klono ose shkarko këtë repository.  
2. Kompilo programin me:  
   ```bash
   g++ guess_the_number.cpp -o guess_the_number