#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<vector>
using namespace std ;
int main()
{
    srand(time(0));
    for(int i=0;i<5;i++)

  cout<<(rand()%6)+1<<endl;
//   int occupied=1,line,column;
//   int line,column;
// while(occupied){
//      line=rand()%4;
//     column=rand()%4;
//     if(board[line][column]==0)
//     occupied=0;
// }
// rmake_pair(line,column);
int line=rand()%4;
int column=rand()%4;
pair<int,int> p;
p=make_pair(10,20);
cout<<p.first<<p.second;

return 0;
}