# Problema: Increasing Array

**Plataforma:** CSES 

## Explicación
El problema nos da una lista de números y mediante movimientos (un movimiento es aumentar en uno el valor de un número) volverla una lista creciente (cada elemento previo es menor o igual que el posterior) si es que no lo es ya. Nos piden el mínimo número de movimientos.

## Submissions
### 1. Primer submission: WA
- Task:	Increasing Array
- Sender:	studiare
- Submission time:	2026-11-23 14:19:18 +0200
- Language:	C++ (C++20)
- Status:	READY
- Result:	WRONG ANSWER

### Explicación
La solución inicial era de una complejidad ineficiente, pues mediante bucles es que iba sumando uno tras uno a los valores para lograr lo que el problema exigía lo cual es muy lento en un caso de que un valor previo sea muy alto y el siguiente sea uno muy bajo.

### 2. Segundo submission: AC
- Task: Increasing Array
- Sender: studiare
- Submission time: 2026-11-23 14:22:21 +0200
- Language: C++ (C++20)
- Status: READY
- Result: ACCEPTED