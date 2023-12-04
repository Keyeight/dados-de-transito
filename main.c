#include <stdio.h>

int main () {

int codigoDaCidade = 0;
int veiculosDePasseio = 0;
int acidentesDeTransitoComVitima = 0;
int numeroDeCidades = 5;
int totalDeVeiculos = 0;
int totalDeAcidentes = 0;
int maiorIndiceDeAcidente = -1;
int menorIndiceDeAcidente = -1;
int cidadeMaior = 0;
int cidadeMenor = 0;
int mediaDeVeiculos = 0;
int cidadeComMenos2000 = 0;
int totalDeAcidentesMenos2000 = 0;
int codigoDaCidadeComMenos2000 = 0;
int mediaDeAcidentesEmCidadesComMenosDe2000 = 0;

for (int i = 0; i < numeroDeCidades; i++) {
    printf("Digite o número da cidade: ");
    scanf("%d", &codigoDaCidade);

    printf("Digite o número de carro de passeio nessa cidade: ");
    scanf("%d", &veiculosDePasseio);

    printf("Digite o números de acidentes com vítimas: ");
    scanf("%d", &acidentesDeTransitoComVitima);

    totalDeVeiculos += veiculosDePasseio;
    totalDeAcidentes += acidentesDeTransitoComVitima;

    if (menorIndiceDeAcidente == -1 || acidentesDeTransitoComVitima < menorIndiceDeAcidente) {
        menorIndiceDeAcidente = acidentesDeTransitoComVitima;
        cidadeMenor = codigoDaCidade;
    };

    if (maiorIndiceDeAcidente == -1 || acidentesDeTransitoComVitima > maiorIndiceDeAcidente) {
        maiorIndiceDeAcidente = acidentesDeTransitoComVitima;
        cidadeMaior = codigoDaCidade;
    };

    if (veiculosDePasseio < 2000) {
        codigoDaCidadeComMenos2000++;
        totalDeAcidentesMenos2000 += acidentesDeTransitoComVitima;

    }
}

    mediaDeVeiculos = totalDeVeiculos / numeroDeCidades; 
    printf("A media de veiculos das cidade é %d\n", mediaDeVeiculos);

    if (codigoDaCidadeComMenos2000 > 0 ) {
        mediaDeAcidentesEmCidadesComMenosDe2000 = totalDeAcidentesMenos2000 / codigoDaCidadeComMenos2000;
        printf("A média de acidentes nas cidades com menos de 2000 veículos é %d\n", mediaDeAcidentesEmCidadesComMenosDe2000);
    } else {
        printf("Não há cidades com menos de 2000 veículos \n");
    }

    printf("Cidade com maior indice de acidentes %d\n", cidadeMaior);
    printf("Cidade com menor indice de acidentes %d\n", cidadeMenor);

    return 0;
}