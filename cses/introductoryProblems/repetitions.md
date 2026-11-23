# Problema: Missing Number

**Plataforma:** CSES

## Explicación
El problema pide dar la longitud de la subcadena más larga con caracteres iguales.

## Submissions
### 1. Primer submission: WA
- Task: Repetitions
- Sender: studiare
- Submission time: 2026-11-23 03:19:55 +0200
- Language:	C++ (C++20)
- Status: READY
- Result: WRONG ANSWER

### Explicación
La implementación de la solución fallaba al tener o iniciar con max como 0, pues en el caso de una cadena con una sola letra o caracter, terminaba retornando 0 como resultado y no 1.

### 2. Segundo submission: AC
- Task: Repetitions
- Sender: studiare
- Submission time: 2026-11-23 03:23:29 +0200
- Language: C++ (C++20)
- Status: READY
- Result: ACCEPTED
