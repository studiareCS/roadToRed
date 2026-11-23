# Problema: Weird Algorithm

**Plataforma:** CSES 

## Explicación
El problema pide implementar un algoritmo donde si se inserta un número entero, entonces se imprima cómo va cambiando multiplicando por 3 y sumandole uno, si es impar; mientras que dividiendo entre 2, si es par. Así hasta que se consiga un 1 como resultado.

## Submissions
### 1. Primer submission: WA y TLE
- Task:	Weird Algorithm
- Sender: studiare
- Submission time: 2026-11-15 18:37:51 +0200
- Language:	C++ (C++20)
- Status: READY
- Result: OUTPUT LIMIT EXCEEDED

### Explicación
Al multiplicarse por 3 y sumarle uno cuando es impar, podríamos tener un número muy grande como 999999 que superase la capacidad de una variable de tipo *int*. Por ello, conviene usar un tipo de variable de mayor capacidad para evitar errores durante la ejecución del código. Nunca llegar a 1, puede producir un **TLE**, mientras que superar los límites de *int* altera los resultados, pudiendo producir un **WA**.

### 2. Segundo submission: AC
- Task:	Weird Algorithm
- Sender: studiare
- Submission time: 2026-11-15 18:39:04 +0200
- Language: C++ (C++20)
- Status: READY
- Result: ACCEPTED
