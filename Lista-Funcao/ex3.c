#include <stdio.h>

// Função que calcula a média (Aritmética ou Ponderada)
float notas(float n1, float n2, float n3, char letra) {
    if (letra == 'A' || letra == 'a') {
        return (n1 + n2 + n3) / 3.0;
    } else if (letra == 'P' || letra == 'p') {
        return (5 * n1 + 3 * n2 + 2 * n3) / 10.0;
    }
    return 0; // Retorna 0 se a letra for inválida
}

int main() {
    float nota1, nota2, nota3;
    char let;

    printf("Insira o valor das notas das provas 1, 2 e 3: ");
    scanf("%f%f%f", &nota1, &nota2, &nota3);

    printf("Insira 'A' para media aritmetica ou 'P' para media ponderada: ");
    scanf(" %c", &let); // Espaço antes de %c para consumir o '\n' do scanf anterior

    printf("A media eh: %f\n", notas(nota1, nota2, nota3, let));

    return 0;
}