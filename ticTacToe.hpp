#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <stdlib.h>
#include <ctype.h>
#include <windows.h>
    
using namespace std;   

class TicTacToe{
public:
    char Player_Sign[26] = {'X','O','A','B','C','D','E','F','G','H','I','J','K','L','M','N','P','Q','R','S','T','U','V','W','Y','Z'};
    int Number_Of_Players = 0;
    int Size_of_Board = 0;
    int Win_Sequence = 0;
    int Row = 0;
    int Column = 0;
    int Turn = 0;
    int size = 0;
    int flag = 0;
    int index = 0;
    int Player;
    int Winner = 0;
    int Game_Array_Size = 0;
    char Player_Character;
    char Board_Sign = '  ';
    char Choice = ' ';
    string User_Input;
    int index_check = 0;
    char Default_Char = 'AA';
    string Save_FileName;
    string token[3];
    string sep;
    string Q = "Q";
    string q = "q";
    string S = "S";    
    string s = "s";
    
    TictacToe();
    
    int Validate_Number_Of_Players(int Number_Of_Players);

    int Validate_Board_Size(int Size_of_Board);

    char Validate_Game_Possible(int Size,int Number_Of_Players,int Win_Sequence);

    void Initialize_Game_Array(char *Game_Array,int size);

    char Print_Game_Board(char *Game_Array, int Size_of_Board);
                    
    int CheckWinner(char *Game_Array,int Player,int Size_of_Board, int Win_Sequence);
                    
    char Player_Move(char *Game_Array, int Size_of_Board, int Player);
    
    int Play(char* Game_Array, int Number_Of_Players, int Size_of_Board, int Win_Sequence, int Turn_S );
};