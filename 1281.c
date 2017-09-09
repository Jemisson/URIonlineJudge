#include<stdio.h>
#include<string.h>
//ida a feira.
typedef struct{
    char nome[100];
    float valor;
} Fruta;

typedef struct{
    Fruta ft[100];
    int last;
} ListaFruta;


int main() {
    
    int i,j,iaf,qtdp,qtdc,tc,p;
    char pdc[100];
    float total;
    ListaFruta lf;
    Fruta f;
    
    scanf("%d", &iaf);
    
    for(i=0; i<iaf; i++){
        total =0;
        lf.last=0;
        scanf("%d", &qtdp);
        for(j=0; j<qtdp; j++){
            scanf(" %s %f", f.nome, &f.valor);
            lf.ft[j] = f;
            lf.last++;
        }
        
        scanf("%d", &tc);
        
        for(j=0; j<tc; j++){
            scanf("%s %d", pdc, &qtdc);
            for(p=0; p<lf.last; p++){
                if(strcmp(lf.ft[p].nome,pdc) == 0){
                    total += (lf.ft[p].valor * qtdc);
                }
            }
        }
        
        printf("R$ %.2f\n", total);
    }

    return 0;
}
