#include <stdio.h>
#include <string.h>

int findIndex(char *a){
    char s[5][8] = {"pedra", "papel", "tesoura", "lagarto", "Spock"};
    int i;
    for(i = 0; i < 5; i++){
        if(!strcmp(s[i], a)){
            return i;
        }
    }
    return 0;
}

int main(){
    int t, i, caso = 1, results[5][5] = {3, 1, 2, 2, 1,
                                    2, 3, 1, 1, 2,
                                    1, 2, 3, 2, 1,
                                    1, 2, 1, 3, 2,
                                    2, 1, 2, 1, 3};
    char sheldon[8], raj[8];
    scanf("%d", &t);
    for(i = 0; i < t; i++){
        scanf("%s %s", sheldon, raj);
        switch(results[findIndex(raj)][findIndex(sheldon)]){
            case 1:
                printf("Caso #%d: Bazinga!\n", caso);
                break;
            case 2:
                printf("Caso #%d: Raj trapaceou!\n", caso);
                break;
            case 3:
                printf("Caso #%d: De novo!\n", caso);
                break;
        }
        caso++;
    }
    return 0;
}1