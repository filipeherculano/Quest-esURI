#include <stdio.h>
#include <string.h>


int main() {
        char r1[80], r2[80], r3[80];
        
        scanf("%s", r1);     // "Pega" tr?s palavras seguidas.          
        scanf("%s", r2);
        scanf("%s", r3);

        if ((strcmp(r1, "vertebrado") == 0) && (strcmp(r2, "ave") == 0) && (strcmp(r3, "carnivoro") == 0)){
        	printf("aguia\n");
        }
        else{
        	if ((strcmp(r1, "vertebrado") == 0) && (strcmp(r2, "ave") == 0) && (strcmp(r3, "onivoro") == 0)){
        		printf("pomba\n");
        	}
        	else{
        		if ((strcmp(r1, "vertebrado") == 0) && (strcmp(r2, "mamifero") == 0) && (strcmp(r3, "onivoro") == 0)){
        			printf("homem\n");
        		}
        		else{
        			if ((strcmp(r1, "vertebrado") == 0) && (strcmp(r2, "mamifero") == 0) && (strcmp(r3, "herbivoro") == 0)){
        				printf("vaca\n");
        			}
        			else{
        				if ((strcmp(r1, "invertebrado") == 0) && (strcmp(r2, "inseto") == 0) && (strcmp(r3, "hematofago") == 0)){
        					printf("pulga\n");
        				}
        				else{
        					if ((strcmp(r1, "invertebrado") == 0) && (strcmp(r2, "inseto") == 0) && (strcmp(r3, "herbivoro") == 0)){
        						printf("lagarta\n");
        					}
        					else{
        						if ((strcmp(r1, "invertebrado") == 0) && (strcmp(r2, "anelideo") == 0) && (strcmp(r3, "hematofago") == 0)){
        							printf("sanguessuga\n");
        						}
        						else{
        							if ((strcmp(r1, "invertebrado") == 0) && (strcmp(r2, "anelideo") == 0) && (strcmp(r3, "onivoro") == 0)){
        								printf("minhoca\n");
        							}
        						}
        					}
        				}
        			}
        		}
        	}
        }

        return 0;
}
