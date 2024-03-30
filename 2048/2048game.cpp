#include<iostream>
#include<ctime>
#include<iomanip>
#include<cstdlib>//help to genrate random position
using namespace std ;
int board[4][4];
int dirLine[]={1,0,-1,0};
int dirColumn[]={0,1,0,-1};
pair<int,int> genrateunoccupiedPosition(){
int occupied=1,line,column;
while(occupied){
     line=rand()%4;
    column=rand()%4;
    if(board[line][column]==0)
    occupied=0;
}
return make_pair(line,column);
}
void addPiece(){
       
    pair<int,int>pos=genrateunoccupiedPosition();
    board[pos.first][pos.second]=2;
}
void newGame(){
    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
            board[i][j]=0;
        
    // pair<int,int>pos=genrateunoccupiedPosition();
    // board[pos.first][pos.second]=2;
    addPiece();
}
void printUI(){
    system("cls");
    for(int i=0;i<4;++i){
        for(int j=0;j<4;++j){
            if(board[i][j]==0)
            cout<<setw(4)<<".";
            else
                cout<<setw(4)<<board[i][j];
    
            
        }cout<<endl;      
    }
    cout<<"n:new game,w:up,s:down,d:right,a:left,q:quit\n"<<endl;
}
bool canDoMove(int line,int column,int nextLine,int nextColumn){
    if(nextLine<0 || nextColumn<0||nextLine>=4 ||nextColumn>=4||board[line][column]!=board[nextLine][nextColumn] && board[nextLine][nextColumn]!=0)
        return false;
    return true;

    
}
void applyMove(int direction){
   int startLine=0,start_column=0,lineStep=1,columnStep=1;
   if(direction==0){
    startLine=3;
    lineStep=-1;
   }
   if(direction==1){
    start_column=3;
    columnStep=-1;
   }
   int movePossible;
   int canAddPiece=0;
   do{
    movePossible=0;
   for(int i=startLine;i>=0 && i<4;i+=lineStep)
    for(int j=start_column;j>=0 && j<4;j+=columnStep){
        int nextI=i+dirLine[direction],nextJ=j+dirColumn[direction];
        // cout<<i<<" "<<j<<" "<<nextI<<" "<<nextJ<<endl;
        if(board[i][j] && canDoMove(i,j,nextI,nextJ)){
            board[nextI][nextJ]+=board[i][j];
            board[i][j]=0;
            movePossible=canAddPiece=1;
       }
    }printUI();
   }
    while(movePossible);
    if(canAddPiece)
     addPiece();
}

int main()
{
    srand(time(0));
    char commandToDir[128]; 
    commandToDir['s']=0;
    commandToDir['d']=1;
    commandToDir['w']=2;
    commandToDir['a']=3;  
    newGame(); 
while(true){
    printUI();
    char command;
    cin>>command;
if(command=='n'){
   newGame();
}
   else if (command=='q'){
  break; 
   }
   else{
    int currentDirection =commandToDir[command];
    // cout<<currentDirection<<"\n";
    applyMove(currentDirection);
   }
   

}

return 0;
}