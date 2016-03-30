#include <iostream>
#include <cstdint>
#include <ctime>
#include "Defines.h"
#include "Board.h"
#include "GenericPlayer.h"
#include "Player.h"
#include "Game.h"

using namespace std;

ostream& operator<<(ostream& os, const Board& Board);

int main()
{
	srand(static_cast<unsigned int>(time(0)));
	
	/*Matrix my_matrix(4, Column(5));
	my_matrix = { { 12 }, { 12 } };
	cout << my_matrix[1][0];*/
	
	/*GenericPlayer *pGenericPlayer = new Player(501, "Geoarge");

	pGenericPlayer->NineDartFinish1(board);
	cout << pGenericPlayer->GetScore();*/
	
	Game game;
    game.Play({
        new Player(501, "player1"),
        new Player(501, "player2"),
        new Player(501, "player3"),
        new Player(501, "player4")
    });
	//game.PlayAdvancedStrategy();
	/*Board *_pBoard = new Board;
	Player *_pOne = new Player(501, "K");
	_pOne->ThrowDouble(0, *_pBoard);*/

	cin.get();

	return 0;
}

ostream& operator<<(ostream& os, const Board& Board)
{
	/*Matrix board = Board.GetBoard();

	Column::iterator col_iter;
	Matrix::iterator row_iter; 

	for (row_iter = board.begin(); row_iter != board.begin(); row_iter++) {
		for (col_iter = row_iter->begin(); col_iter != row_iter->end(); col_iter++) {
			os << *col_iter << " ";
		}
		os << endl;
	}*/

	os << "\t/////////////////////";

	return os;
}

//std::vector< std::vector<int> > board(2, std::vector<int>(4));
//board.Display();
//cout << board;
//cout << board;

/*int test[100] = {0};

C std int types

int[8-16-32-64]_t		signed ints
uint[8-16-32-64]_t		unsigned ints

test[50];

*(test + 50 * sizeof(int));*/