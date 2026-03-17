#include <stdio.h>

int checkmoves(int x,unsigned str[])
{
    int result=0;
    for(int i=0 ; i <=x ; i++)
    {
        if(str[i]<0||str[i]>x)
        {
            result = -1;
        }
        else
        {
            result = 0;
        }

    }
return result;
}


//FUNCTION THAT DECIDES THE WINNER
//THE INPUTES ARE 
void winner(unsigned game[],unsigned int player1[],unsigned int player2[],int nbshots, int nbspaceships,int boardsize) {
   unsigned int q=0;
   unsigned int player1unsunk=nbspaceships;
   unsigned int player2unsunk=nbspaceships;
   unsigned int playernbleft=0;
   unsigned int player2nbleft=0;


   for(int w=0;w<boardsize;w++){
    if ((player2[w]==1)&&(player2[w+1]==1)&&(player2[w+2]==1)) {
                player2[w]=1;
                player2[w+1]=2;
                player2[w+2]=3;
        player2nbleft=player2nbleft+3;
        
   }
   else{
    player2[w]=0;
   }
   }

       for(int w=0;w<boardsize;w++){
    if ((player1[w]==1)&&(player1[w+1]==1)&&(player1[w+2]==1)) {
                player1[w]=1;
                player1[w+1]=2;
                player1[w+2]=3;
        playernbleft=playernbleft+3;
   }
   else{
    player1[w]=0;
   }
   }

    






    for (int i = 0; i < nbshots; i++) {
        // Check if the current shot is for Player 1



        if (i % 2 == 0) {
            q=game[i];
            if (player2[q]==1){
                player2[q]=-1;
                player2nbleft--;
            }
            if (player2[q]==2){
                player2[q]=-1;
                player2nbleft--;
            }
            if (player2[q]==3){
                player2[q]=-1;
                player2nbleft--;
               
                    }
                }
            
        


    else {
        
           q=game[i];
            if (player1[q]==1){
                player1[q]=-1;
                playernbleft--;
                
            }
            if (player1[q]==2){
                player1[q]=-1;
                playernbleft--;

            }
            if (player1[q]==3){
                player1[q]=-1;
                playernbleft--;
        }
    }    
    }

    for(int q=0;q<boardsize;q++){
        if((player1[q]==-1)&&(player1[q+1]==-1)&&(player1[q+2]==-1)){
            player1unsunk--;
        }
        if(player1unsunk==0){
            break;
        }

        if((player2[q]==-1)&&(player2[q+1]==-1)&&(player2[q+2]==-1)){
            player2unsunk--;
        }
        if(player2unsunk==0){
            break;
        }
    }


    
    
    
        int win;
    if (player1unsunk > player2unsunk) {
        // Player 1 hit more spaceships and is the winner
        win = 1;
    } else if (player2unsunk > player1unsunk) {
        // Player 2 hit more spaceships and is the winner
        win = 2;
    } else {
        // It's a tie or no spaceships hit
        win = 0;
    }
    if (win == 1) {
        printf("GAME OVER: ALICE WINS : ");
    } else if (win== 2) {
        printf("GAME OVER: BERNARD WINS : ");
    } else {
        printf("GAMED OVER : TIE ");
    }

    if(win==1){
        printf("%d TO %d\n",playernbleft , player2nbleft);
    }
    else if(win==2){
        printf("%d TO %d\n",player2nbleft , playernbleft);
    }
    else{
                printf("%d TO %d\n",playernbleft ,player2nbleft);
    }
}



//THE MAIN FUNCTION
int main(){
    int boardsize;                  //the size of the game board
    int nbspaceships;               //number of space ships
    char star;                      //variable for the star
    char first_player;              //variable for the first player
    char second_player;             //variable for the second player
   
    char playerstarts;              //which player starts
    int nbshots=0;           
  
scanf("%d",&boardsize);         //the scan of the size
scanf("%d\n",&nbspaceships);      //the scan of the number of space ships
scanf("%c\n",&star);              //just to scan the etoile
scanf("%c\n",&first_player); 


 int v;
 v=boardsize;
 int scanboard=0;     //variable that we will need later


unsigned int gameboard1[v];      //the game board for the first player
unsigned int gameboard2[v];      //the game board for the second player


// loop for scanning the gameboard of the first player

for(int i=0;i<boardsize;i++)
{
    scanf("%d",&scanboard);
    if((scanboard!=0)&&(scanboard!=1)){
        scanf("%d",&scanboard);
    }
gameboard1[i]=scanboard;

}

scanf("%c",&star);
scanf("\n%c\n",&star);
scanf("%c\n",&second_player);           //scan the second player

// loop for scanning the gameboard of the second player

for(int i=0;i<boardsize;i++)
{
    scanf("%d",&scanboard);
    if(scanboard!=0&&scanboard!=1){
        scanf("%d",&scanboard);
    }
gameboard2[i]=scanboard;
}



scanf("\n%c\n",&star);          //scan the star
scanf("%c\n",&playerstarts);    //player who will start
scanf("%c\n",&star);              //scan the star

//game starts now

    unsigned int game[10*boardsize];


//to count the number of shots
for(int i=0; boardsize != -1 ; i++)
{
    scanf("%d\n",&scanboard);
    if(scanboard == -1){
        break;
    }
    else{
    game[i] = scanboard;
    nbshots++;
    }
    
}


//WHAT THE CODE MUST DO

printf("BOARD SIZE : %d\n",boardsize);
printf("NUMBER OF SPACESHIPS : %d\n",nbspaceships);
if(checkmoves(boardsize,game)==-1)
{
    printf("ILLEGAL MOVE : GAME OVER\n");
return 1;
}
else if(nbshots%2==1)
{
    printf("MISSING MOVE : INCOMPLETE GAME");
    return 1;
}
else{
printf("NUMBER OF MOVES : %d\n",nbshots);
}


// A procedure to find the winner 
winner(game, gameboard1, gameboard2, nbshots ,nbspaceships,boardsize);

printf("COURSE OVER : GAME OVER\n");
return 0;
}













