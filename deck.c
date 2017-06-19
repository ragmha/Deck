#include "header.h"
int main(){
  int deck[DECK_SIZE];
  srand(time(NULL));

  init_deck(deck, DECK_SIZE);
  print_hand(deck, DECK_SIZE);
  putchar( '\n' ) ;

  shuffle_deck(deck, DECK_SIZE);
  print_hand(deck, DECK_SIZE);
  putchar( '\n' ) ;

  sort_hand(deck, DECK_SIZE);
  print_hand(deck, DECK_SIZE);
  putchar( '\n' ) ;
  return 0;
}


//Init deck of unique cards
void init_deck(int deck[], int size){
  int i;
  for(i= 0; i< size; i++){
    deck[i] = i;
  }
}

//Shuffles deck by swapping each card with random card from deck
void shuffle_deck(int deck[], int size){
  int i, j, temp;

  for(i=0;i< size; i++){
     j= rand() % size;
     temp = deck[i];
     deck[i] = deck[j];
     deck[j] = temp;
  }

}

//Sorts hand in increasing order
void sort_hand(int hand[], int size){
  int i, j, temp;
  for(i=0;i< size; i++){
    for(j=i+1;j<size; j++){
      if(hand[i] > hand[j]){
        temp = hand[i];
        hand[i] = hand[j];
        hand[j] = temp;
      }
    }
  }
}

//Prints card in hand
void print_hand(int hand[], int size){
    int i;
    for(i=0;i<size;i++){
      print_card(hand[i]);
      putchar('\n');
    }
}

//Prints a card from standard 52 card deck
void print_card(int card){
  char suit[4][9]=
  {"Spades", "Hearts", "Diamonds","Clubs"};
  char rank[13][6]=
  {"Two","Three","Four","Five","Six","Seven",
  "Eight","Nine","Ten","Jack","Queen","King","Ace"};

  printf("%s of %s", rank[card%13], suit[card/3]);
}
