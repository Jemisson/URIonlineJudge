#include <stdio.h>
 
int main() {

    int times,i,j,k,l,F;
    int f,x=0,y=0,sum,a=0,b=0,w;
    
    scanf("%d", &times);
    for(i=0; i<times; i++){
        int matriz[9][9];
        F=0;
        
        for(j=0; j<9; j++){
            for(k=0; k<9;k++){
                scanf("%d", &matriz[j][k]);
            }
        }
        
        for(j=0; j<9; j++){
            for(k=0; k<9;k++){
                for(l=k+1; l<9; l++){
                    if(matriz[j][k] == matriz[j][l]){
                        F=1;
                        break;
                    }
                }
            }
        }
        
        for(j=0; j<9; j++){
            for(k=0; k<9;k++){
                for(l=k+1; l<9; l++){
                    if(matriz[k][j] == matriz[l][j]){
                        F=1;
                        break;
                    }
                }
            }
        }
        x=0,y=0;
        for(w=0; w<3; w++){
            for(f=0; f<3; f++){
                sum=0;
                for(a=x; a<x+3; a++){
                    for(b=y; b<y+3; b++){
                        sum += matriz[a][b];
                    }
                }
                if(sum != 45){
                    F=1;
                }
                y+=3;
            }
            y=0;
            x+=3;
        }
        
        
        if(F==0){
            printf("Instancia %d\nSIM\n\n", i+1);
        } else {
            printf("Instancia %d\nNAO\n\n", i+1);
        }
    }
 
    return 0;
}
