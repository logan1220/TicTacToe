#include <cstdlib>
#include <iostream>

int player1();
int player2();

using namespace std;

char array[3][3]= {{'*','*','*'}, {'*','*','*'}, {'*','*','*'}};
int row, col;

int main(int argc, char *argv[])
{
    int temp=0;
    while(temp!=1)
    {
    cout<<"\t"<<array[0][0]<<" | "<<array[0][1]<<" | "<<array[0][2]<<endl;
    cout<<"\t----------"<<endl;
    cout<<"\t"<<array[1][0]<<" | "<<array[1][1]<<" | "<<array[1][2]<<endl;
    cout<<"\t----------"<<endl;
    cout<<"\t"<<array[2][0]<<" | "<<array[2][1]<<" | "<<array[2][2]<<endl;
    
    player1();
    if(array[0][0]=='X' && array[0][1]=='X' && array[0][2]=='X' || array[1][0]=='X' && array[1][1]=='X' && array[1][2]=='X' || array[2][0]=='X' && array[2][1]=='X' && array[2][2]=='X')
    {
         cout<<"Player one wins!!!"<<endl;
         break;
                        }
    else if (array[0][0]=='X' && array[1][0]=='X' && array[2][0]=='X' || array[0][1]=='X' && array[1][1]=='X' && array[2][1]=='X' || array[0][2]=='X' && array[1][2]=='X' && array[2][2]=='X')
    {
         cout<<"Player one wins!!!"<<endl;
         break;
              }
    else if (array[0][0]=='X' && array[1][1]=='X' && array[2][2]=='X' || array[2][0]=='X' && array[1][1]=='X' && array[0][2]=='X')
    {
         cout<<"Player one wins!!!"<<endl;
         break;
         }
         
    if(array[0][0]=='O' && array[0][1]=='O' && array[0][2]=='O' || array[1][0]=='O' && array[1][1]=='O' && array[1][2]=='O' || array[2][0]=='O' && array[2][1]=='O' && array[2][2]=='O')
    {
         cout<<"Player two wins!!!"<<endl;
         break;
         }
                        
    else if (array[0][0]=='O' && array[1][0]=='O' && array[2][0]=='O' || array[0][1]=='O' && array[1][1]=='O' && array[2][1]=='O' || array[0][2]=='O' && array[1][2]=='O' && array[2][2]=='O')
    {
         cout<<"Player two wins!!!"<<endl;
         break;
              }
    else if (array[0][0]=='O' && array[1][1]=='O' && array[2][2]=='O' || array[2][0]=='X' && array[1][1]=='X' && array[0][2]=='O')
    {
         cout<<"Player two wins!!!"<<endl;
         break;
         }
    
    cout<<"\t"<<array[0][0]<<" | "<<array[0][1]<<" | "<<array[0][2]<<endl;
    cout<<"\t----------"<<endl;
    cout<<"\t"<<array[1][0]<<" | "<<array[1][1]<<" | "<<array[1][2]<<endl;
    cout<<"\t----------"<<endl;
    cout<<"\t"<<array[2][0]<<" | "<<array[2][1]<<" | "<<array[2][2]<<endl;
    
    player2();
    
    if(array[0][0]=='X' && array[0][1]=='X' && array[0][2]=='X' || array[1][0]=='X' && array[1][1]=='X' && array[1][2]=='X' || array[2][0]=='X' && array[2][1]=='X' && array[2][2]=='X')
    {
         cout<<"Player one wins!!!"<<endl;
         break;
                        }
    else if (array[0][0]=='X' && array[1][0]=='X' && array[2][0]=='X' || array[0][1]=='X' && array[1][1]=='X' && array[2][1]=='X' || array[0][2]=='X' && array[1][2]=='X' && array[2][2]=='X')
    {
         cout<<"Player one wins!!!"<<endl;
         break;
              }
    else if (array[0][0]=='X' && array[1][1]=='X' && array[2][2]=='X' || array[2][0]=='X' && array[1][1]=='X' && array[0][2]=='X')
    {
         cout<<"Player one wins!!!"<<endl;
         break;
         }
    if(array[0][0]=='O' && array[0][1]=='O' && array[0][2]=='O' || array[1][0]=='O' && array[1][1]=='O' && array[1][2]=='O' || array[2][0]=='O' && array[2][1]=='O' && array[2][2]=='O')
    {
         cout<<"Player two wins!!!"<<endl;
         break;
                        }
    else if (array[0][0]=='O' && array[1][0]=='O' && array[2][0]=='O' || array[0][1]=='O' && array[1][1]=='O' && array[2][1]=='O' || array[0][2]=='O' && array[1][2]=='O' && array[2][2]=='O')
    {
         cout<<"Player two wins!!!"<<endl;
         break;
              }
    else if (array[0][0]=='O' && array[1][1]=='O' && array[2][2]=='O' || array[2][0]=='X' && array[1][1]=='X' && array[0][2]=='O')
    {
         cout<<"Player two wins!!!"<<endl;
         break;
         }
}
    
    
    
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

int player1()
{
    cout<<"Player one, pick a row."<<endl;
    cin>>row;
    cout<<"Player one, pick a column."<<endl;
    cin>>col;
    
    array[row][col]='X';
}

int player2()
{
    cout<<"Player two, pick a row."<<endl;
    cin>>row;
    cout<<"Player two, pick a column."<<endl;
    cin>>col;
    
    array[row][col]='O';
}

    

