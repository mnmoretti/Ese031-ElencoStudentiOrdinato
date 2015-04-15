#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#define N 3 
#define MAX_STRLEN 30 
 
 
  
 struct s_studente { 
    char nome[MAX_STRLEN]; 
    char cognome[MAX_STRLEN]; 
    int eta; 
    char classe[MAX_STRLEN]; 
 }; 
 struct s_studente studente[N]; 
 void ordinamento(s_studente); 
 
 int main(int argc, char** argv) { 
      
    int i; 
      
    for(i=0;i<N;i++) { 
        printf("Inserisci il nome dell' alunno numero %d: ", i+1); 
        scanf("%s", studente[i].nome); 
        printf("Inserisci il cognome dell' alunno numero %d: ", i+1); 
        scanf("%s", studente[i].cognome); 
        printf("Inserisci l'eta' dell' alunno numero %d: ", i+1); 
        scanf("%d", &(studente[i].eta)); 
        printf("Inserisci la classe dell' alunno numero %d: ", i+1); 
        scanf("%s", studente[i].classe); 
     } 
      
    ordinamento(studente); 
      
    for(i=0;i<N;i++) { 
        printf("\n%s, %s, %d, %s", studente[i].nome, studente[i].cognome, studente[i].eta, studente[i].classe); 
    } 
      
    return (EXIT_SUCCESS); 
} 

void ordinamento(s_studente) { 
     int i, z, indiceMin; 
     struct s_studente temp;  
     for(i=0;i<N-1;i++) { 
         indiceMin = i; 
          
         for(z=i+1;j<N;z++) { 
             if((strcmp(studente[z].cognome, studente[indiceMin].cognome))<0) 
                 indiceMin = z; 
         } 
          
         if(i!=indiceMin) { 
             strcpy(temp.cognome, studente[i].cognome); 
             strcpy(studente[i].cognome, studente[indiceMin].cognome); 
             strcpy(studente[indiceMin].cognome, temp.cognome) 
             strcpy(temp.nome, studente[i].nome); 
             strcpy(studente[i].nome, studente[indiceMin].nome); 
             strcpy(studente[indiceMin].nome, temp.nome);
             temp.eta = studente[i].eta; 
             studente[i].eta = studente[indiceMin].eta; 
             studente[indiceMin].eta = temp.eta;  
             strcpy(temp.classe, studente[i].classe); 
             strcpy(studente[i].classe, studente[indiceMin].classe); 
             strcpy(studente[indiceMin].classe, temp.classe); 
         } 
     } 
 } 

