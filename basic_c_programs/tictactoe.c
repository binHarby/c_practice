#include <stdio.h>
#include <stdlib.h>

/* STILL NEED TO DO FUNCTIO CHECKFORWIN*/
//draw board
int player=1;
char squares[]={'1','2','3','4','5','6','7','8','9'};
void draw(){
	printf("\t\tPlayer 1 is O,Player 2 is x\n\n");
	printf("\t \t|\t \t|\t \t\n");
	printf("\t%c\t|\t%c\t|\t%c\t\n",squares[0],squares[1],squares[2]);//add vars
	printf("________________|_______________|________________\n");
	printf("\t \t|\t \t|\t \t\n");
	printf("\t%c\t|\t%c\t|\t%c\t\n",squares[3],squares[4],squares[5]);//add vars
	printf("________________|_______________|________________\n");
	printf("\t \t|\t \t|\t \t\n");
	printf("\t%c\t|\t%c\t|\t%c\t\n",squares[6],squares[7],squares[8]);//add vars
	printf("\t \t|\t \t|\t \t\n");
	printf("Player %d Turn \n",player);

}
int markBoard(int mark){
	if(isdigit(squares[mark-1])){
		squares[mark-1]=(player==1)? 'O':'X';
		return 0;
	}
	else{
		printf("Already taken, try again\n");
		return 1;
	}

return -1;
}
int main(void){
	int choice;
	int unmarked;
	for(;;){
		draw();
		scanf("%d",&choice);
		if(choice>9 ||choice<0){
			printf("Invalid input, choice number between 1-9");
		}else{
			unmarked=markBoard(choice);
			if(!unmarked){
				player=(player%2)? 2:1;
			}
		}
	}
	

return 0;
}
