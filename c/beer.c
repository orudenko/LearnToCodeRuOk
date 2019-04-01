#include "stdio.h"
int beer_count = 99;

char beer_round(){
    if(beer_count >= 1){
        printf("%d bottles of beer on the wall, \n%d bottles of beer. \nTake one down, pass it around, \n", beer_count, beer_count);
        beer_count = beer_count - 1;
        if(beer_count >= 1) {
            printf("%d bottles of beer on the wall... \n\n", beer_count);
        }
        else{
            printf("No more bottles of beer on the wall, \nno more bottles of beer.\n\nWe've taken them down \nand passed them around; \nnow we're drunk and passed out!\n\n");
        }
        beer_round();
    }
    else{
    }
}  


main(){
    beer_round();
}