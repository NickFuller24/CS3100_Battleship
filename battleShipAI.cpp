#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

void placeShips(char play_board[10][10]);
void shoot(char play_board[10][10]);
bool hit(int x_shot, int y_shot, char play_board[10][10]);
void showBoard(char play_board[10][10]);

int main()
{
    srand(time(NULL));
    char play_board[10][10];
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            play_board[i][j] = '0'; 
        }
        cout << endl; 
    }
    placeShips(play_board);
    showBoard(play_board);
    cout<< endl;
    shoot(play_board);
    cout<< endl;
    shoot(play_board);
    cout<< endl;
    shoot(play_board);
    cout<< endl;
    shoot(play_board);
    cout<< endl;
    shoot(play_board);
    cout<< endl;
    showBoard(play_board);
}

void showBoard(char play_board[10][10])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout<< play_board[i][j]<<' ';
        }
        cout << endl; 
    }

}

bool hit(int x_shot, int y_shot, char play_board[10][10])
{
    if (play_board[x_shot][y_shot] == 'S')
    {
        play_board[x_shot][y_shot] = 'H';
        return true;
    }
    else
    {
        play_board[x_shot][y_shot] = 'X';
        return false;
    }
}

void shoot(char play_board[10][10])
{
    int x_shot = rand()%9;
    int y_shot = rand()&9;
    cout<< "Shot at {"<< x_shot << " , "<< y_shot <<"}"<< endl;
    if (hit(x_shot,y_shot,play_board) == true)
    {
        cout<< "Hit at {"<< x_shot << " , "<< y_shot <<"}"<< endl;
    }
    else
    {
        cout<< "Miss at {"<< x_shot << " , "<< y_shot <<"}"<< endl;
    }
    return;
}

void placeShips(char play_board[10][10])
{
    char X = 'S';
    char Y = 'S';
    char Z = 'S';
    char W = 'S';
    //Aircraft 
    play_board[4][4] = X;
    play_board[4][5] = X;
    play_board[4][6] = X;
    play_board[4][7] = X;
    play_board[4][8] = X;

    //Battleship
    play_board[0][1] = Y;
    play_board[0][2] = Y;
    play_board[0][3] = Y;
    play_board[0][4] = Y;

    //Cruiser 
    play_board[6][4] = Z;
    play_board[6][5] = Z;
    play_board[6][6] = Z;

    //Submarine
    play_board[1][3] = Z;
    play_board[2][3] = Z;
    play_board[3][3] = Z;

    //Destoryer
    play_board[8][7] = W;
    play_board[8][8] = W;

    return;
}
//void place 
//int rotate()
//{
 //   int num = rand()%2;
  //  return num;
//}
