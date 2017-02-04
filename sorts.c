#include <stdio.h>
#include <stdlib.h>




int num[1000];
int i;
int op;


void main() {
	
		menu();

}


void cadastro()
{
	
     system("cls");
	int x,v; 
	
	printf(" \n [CADASTRO]\n");
	
	if(i<1000){
	
	printf("Digite um numero:");
	scanf("%d",&x);
	
	for(v=0;v<i;v++){
		
		if(x==num[v])
		{
			printf("Numero ja possui cadastro entre com outro numero \n \n");
			system("pause");
			cadastro();
		}
	}
	

			num[i] = x;
	i = i + 1;
	
	printf("Voltar para o Menu <ESC>");
   op=getch();
	
	if(op==27)
	{
	menu();
	}
	 else
	  {
		cadastro();
	  }
}else{
	printf("CADASTRO ESTA CHEIO ESVAZIE PARA FAZER NOVOS CADASTROS");
	system("pause");
	menu();
	
}
	
}

	
	

int menu(){
	
	system("cls");
	
    printf("\n\n [MENU]\n\n");
	printf("--------------------\nselecione uma opcao\n--------------------\n\n");
	printf("1 - cadastrar \n2 - consultar \n3 - organizar [BUBBLE SORT]\n4 - organizar [SELECTION SORT]  \n5 - organizar [QUICK SORT]  \n0 - Sair \n");
    scanf("%d",&op);
	
	if(op==1){
	cadastro();
	}
	else if (op==2){
		
		consultar();
		
	 }else if(op==3){
	 	
		bubblesort();
		
	 }else if(op==4){
	 	
		selectionsort();
		
	 }else if(op==5){
	 	
		Quick(num,0,i-1);
	
		consultar();
	 }else if(op==0){
	 	
	   exit(0);
	 	
	 } else{
	 	
		menu();
		
	    }
	system("pause");
	return 0;
}

 int consultar()
{
	system("cls");
	int c;
	printf("\n Numeros cadastrados\n");
		for(c=0;c<=i-1;c++){
			printf("%d Numero = %d \n",c+1,num[c]);
		
		}
		system("pause");
		menu();
		return 0;
}


int bubblesort()
{
	
	system("cls");

	int v;
	int j;
	int menor;
	
	printf("\n[metodo bubble sort]\n");
			
			for(v=0;v<i-1;v++){
				
			for(j=0;j<i-1;j++){
			
			if(num[j]>num[j+1]){
			menor = num[j+1];
			num[j+1] = num[j];
			num[j]=menor;
		}
		
		}

		}
			
			 for(v=0;v<i;v++){
	        printf(" %d numero = %d \n",v+1,num[v]);
			}
	       

    system("pause");
    
    menu();
    
   return 0;
}

  
 int selectionsort(){
 	
 	system("cls");
 	printf("\n\n          ----------ORGANIZAR SELECTION SORTE----------\n\n");
 	
 	int v;
 	int j;
 	int menor;
 	int aux;
 	
 	
 
 	for(j=0;j<i;j++){

 		menor = j;
 		
 		 for(v=j+1;v<i;v++){
 		 
 		 	if(num[v]<num[menor]){
 		 		
 		 		menor = v;
			}
			
	   }
         
        
		 if(j!=menor){
		 	aux = num[j];
		 	num[j] = num[menor];
		 	num[menor]=aux;
		 }	
        }
     
     
    consultar();

 	system("pause");
 	
    menu();
    
 	return 0;
 	
      
}

divisao(int vet[],int esq, int dir){
	int j,cont,aux,aux2;
	   cont = esq;
    for(j=esq+1;j<dir;j++){
    
        if(vet[j] < vet[esq]){ 
            cont++;
            
            aux = vet[j];
            vet[j]=vet[cont]; 
            vet[cont]=aux;
            
           
          aux = vet[cont];
		  vet[cont]= vet[esq];
		  vet[esq]=aux; 
        }
    }
    return cont;
}

void Quick(int vetor[], int inicio, int fim){
  
   int pivo, aux, i, j, meio;
   
   i = inicio;
   j = fim;
  
   meio = (int) ((i + j) / 2);
 
   pivo = vetor[meio];
   
  
   do{
   
      while (vetor[i] < pivo) i = i + 1;
     
      while (vetor[j] > pivo) j = j - 1;
     
      if(i <= j){
         aux = vetor[i];
         vetor[i] = vetor[j];
         vetor[j] = aux;
         i = i + 1;
         j = j - 1;
      }
   }while(j > i);

   if(inicio < j) Quick(vetor, inicio, j);

   if(i < fim) Quick(vetor, i, fim);   

}
 
