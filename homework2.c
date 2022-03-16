#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *v, *B;
    char arr[1001][1001],s;
    int i = 0, k = 0;
    v = fopen("adjacency_matrix_94.txt", "r");
    while(!feof(v)){
      fscanf(v, "%c", &s);
      if(s!=' ' && s!='\n'){
        arr[i][k] = s;
        k++;
        if(k==5){
          i++;
          k = 0;
        }
      }
    }
  B = fopen("res.gv", "w");
  fprintf(B, "graph grath {\n");
  for(int q = 0; q<5; q++){
      for(int z =0; z<5; z++){
        if(arr[q][z]!='0'){
          printf("%d - %d\n", z+1, z+1);
          fprintf(B, "  %d -- %d\n", q+1, z+1);
        }
      }
    printf("\n");
  }
  fprintf(B, "}");
  fclose(B);
} 
