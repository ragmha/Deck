#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DECK_SIZE 52

void init_deck( int deck[] , int size ) ;
void shuffle_deck( int deck[] , int size ) ;
void sort_hand( int hand[] , int size ) ;
void print_hand( int hand[] , int size ) ;
void print_card( int card ) ;
