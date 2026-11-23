# Problema: Permutations

**Plataforma:** CSES 

## Explicación
El problema da un número n y pide determinar si es posible dar una lista de 1 a n elementos donde ningún elemento esté o sea adyacente a alguno con el que tenga una diferencia de uno (sea por la izquierda o la derecha). Si es posible, entonces se pide retornar una solución (pueden existir muchas), de lo contrario imprimir que no es posible.

## Submissions
### 1. Primer submission: WA
- Task: Permutations
- Sender: studiare
- Submission time: 2026-11-24 00:45:22 +0200
- Language: C++ (C++20)
- Status: READY
- Result: WRONG ANSWER

### Explicación
La solución fallaba especificamente para el caso de n=4, donde se retornaba que no había solución cuando sí existía una.

### 2. Segundo submission: AC
- Task: Permutations
- Sender: studiare
- Submission time: 2026-11-24 00:47:55 +0200
Language: C++ (C++20)
Status: READY
Result: ACCEPTED
