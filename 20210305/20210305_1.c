/*Задача 1. За да направи една етажерка, дърводелец се нуждае от следните
компоненти: 4 дълги дъски, 6 къси дъски, 12 малки скоби, 2 големи скоби и 14 винта.
Дърводелецът има на склад А дълги дъски, В къси дъски, С малки скоби, D големи скоби и E
винта. Колко етажерки може да направи дърводелецът?
Изход:
С наличните на склад материали (33 дълги дъски, 55 къси дъски, 88 малки скоби, 22 големи
скоби и 99 винта) дърводелецът може да направи 7 етажерки. */

#include <stdio.h>
#include <stdlib.h>

#define IN_STOCK_LONG_BOARD 33
#define IN_STOCK_SHORT_BOARD 55
#define IN_STOCK_SMALL_BRACKET 88
#define IN_STOCK_BIG_BRACKET 22
#define IN_STOCK_SCREW 99
#define SHELVES_LONG_BOARD 4
#define SHELVES_SHORT_BOARD 6
#define SHELVES_SMALL_BRACKET 12
#define SHELVES_BIG_BRACKET 2
#define SHELVES_SCREW 14
#define NUM 5
#pragma pack(1)

typedef struct shelf{
    int long_board;
    int short_board;
    int small_bracket;
    int big_bracket;
    int screw;
}t_shelves;

void materials(t_shelves* in_stock,t_shelves* shelves){
    in_stock->long_board = IN_STOCK_LONG_BOARD;
    in_stock->short_board = IN_STOCK_SHORT_BOARD;
    in_stock->small_bracket = IN_STOCK_SMALL_BRACKET;
    in_stock->big_bracket = IN_STOCK_BIG_BRACKET;
    in_stock->screw = IN_STOCK_SCREW;

    shelves->long_board = SHELVES_LONG_BOARD;
    shelves->short_board = SHELVES_SHORT_BOARD;
    shelves->small_bracket = SHELVES_SMALL_BRACKET;
    shelves->big_bracket = SHELVES_BIG_BRACKET;
    shelves->screw = SHELVES_SCREW;
}
int made_shelves(t_shelves in_stock,t_shelves shelves){
    int A = (int)in_stock.long_board / shelves.long_board;
    int B = (int)in_stock.short_board / shelves.short_board;
    int C = (int)in_stock.small_bracket / shelves.small_bracket;
    int D = (int)in_stock.big_bracket / shelves.big_bracket;
    int E = (int)in_stock.screw / shelves.screw;
    int arr[]={A,B,C,D,E};
    int count = arr[0];
    for(int i = 0; i < NUM; i++){
        if(count > arr[i]){
            count = arr[i];
        }
    }
    return count;
}
int main(){
    t_shelves in_stock,shelves;
    materials(&in_stock,&shelves);
    printf("From materials in stock woodsman can make %d shelves",made_shelves(in_stock,shelves));

    return 0;

}
