//Escreva um programa em C que verifique se uma matriz 2x2  ́e
//uma matriz de Householder.

//A matriz de householder segue a seguinte propriedade: 
//H = I - 2. v.vT/vT.v
//onde temos I -  matriz identidade, v um vetor e vT esse vetor transposto
//vvT eh uma matriZ gerada pela multiplicacao do vetor v pelo seu transposto vT
//ja vTv eh um escalar gerado pela multiplicacao interna do vetor

#include <stdio.h>

#define TAMANHO 2

void multiplicacao_escalar(double matriz[TAMANHO][TAMANHO], double escalar)
{
    for(int i = 0; i < TAMANHO; i++)
    {
        for(int j = 0; j < TAMANHO; j++)
        {
            matriz[i][j] *= escalar;//multiplica cada elemento da matriz pelo escalar
        }
    }
}

void transpor_vetor(double vetor[TAMANHO][1], double v_transposto[1][TAMANHO])
{
    for(int i = 0; i < 1; i++)
    {
        for(int j = 0; j < TAMANHO; j++)
        {
            v_transposto[i][j] = vetor[j][i];//transpoe o vetor
        }
    }
}

//gera a matriz da multiplicacao dos dois vetores
void multiplicar_vetor(double matriz1[1][TAMANHO], double matriz2[TAMANHO][1], double matriz_resultado[TAMANHO][TAMANHO])
{
    
    for(int i = 0; i < TAMANHO; i++)
    {
        for(int j = 0; j < TAMANHO; j++)
        {
            matriz_resultado[i][j] = 0;
            
            matriz_resultado[i][j] = matriz1[0][i] * matriz2[j][0];
        }
    }
}

//compara duas matrizes elemento por elemento
int comparar_matrizes(double matriz1[TAMANHO][TAMANHO], double matriz2[TAMANHO][TAMANHO])
{
    for(int i = 0; i < TAMANHO; i++)
    {
        for(int j = 0; j < TAMANHO; j++)
        {
            if(matriz1[i][j] != matriz2[i][j])
            {
                return 0;
            }
        }
    }

    return 1;
}

// gera a matriz de householder a partir da definicao e das funcoes anteriores
void calcular_householder(double vetor[TAMANHO][1], double H[TAMANHO][TAMANHO], double produto_interno)
{
    double Identidade[TAMANHO][TAMANHO] = {{1, 0}, {0, 1}};
    double v_transposto[1][TAMANHO];
    double vvT[TAMANHO][TAMANHO];
    double escalar = 2.0 / produto_interno;

    transpor_vetor(vetor, v_transposto); //transpoe o vetor
    multiplicar_vetor(v_transposto, vetor, vvT); //forma a matriz de produto de vetores
    multiplicacao_escalar(vvT, escalar); //multiplica a matriz gerada pelo 

    //efetua a subtracao da identidade pela matriz vvT (feita pela multiplicacao dos vetores)
    for(int i = 0; i < TAMANHO; i++)
    {
        for(int j = 0; j < TAMANHO; j++)
        {
            H[i][j] = Identidade[i][j] - vvT[i][j];
        }
    }
}

int main()
{
    double matriz_householder[TAMANHO][TAMANHO] = {{0, -1}, {-1, 0}};//matriz que sera comparada
    double matriz_formada[TAMANHO][TAMANHO];//matriz gerada pela definicao de householder
    double vetor[TAMANHO][1] = {{1}, {1}};//matriz utilizada na definicao
    double produto_interno = 2.0;// escalar que sera utilizado na definicao (vTv) 

    calcular_householder(vetor, matriz_formada, produto_interno);

    if (comparar_matrizes(matriz_householder, matriz_formada) == 1)
    {
        printf("A matriz eh Householder.\n");
    }
    else
    {
        printf("A matriz nao eh Householder.\n");
    }

    return 0;
}