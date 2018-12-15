# ticTacToe
C++ console-based tic-tac-toe game for upto 26 players

"Tic-tac-toe, also called noughts and crosses (in the British Commonwealth countries), X's and O's (in Ireland) and X and 0 (in India) is a pencil-and-paper game for two players, X and O, who take turns marking the spaces in a 3×3 grid. The X player usually goes first. The player who succeeds in placing three respective marks in a horizontal, vertical, or diagonal row wins the game." (Wikipedia)
 
The game works as follows:
 
1. Asks if the player would like to resume a saved game. If yes, load game state from a text or binary file (your choice of file format).
For a new game, asks how many players are playing as a prompt on its own line. The maximum number of players is 26.
For a new game, asks how large the board should be as a prompt on its own line. The maximum number is 999.
For a new game, asks what the win sequence count should be (i.e. 3 would be normal standard tic-tac-toe) as a prompt on its own line.
For a new game, checks to ensure that winning is possible given the criteria specified, and display an error and quit if not.

2. Outputs a board in the following general format:
 
    1   2   3
1     |   |
   ---+---+---
2     |   |
   ---+---+---
3     |   |
 
3. Repeats the following process over and over again until the user saves and quits, the game is won, or a tie occurs:
Asks the user for a row and column number separated by spaces, or Q to quit. Puts the appropriate symbol for that player in the specified spot. Players are given the following symbols, in order: XOABCDEFGHIJKLMNPQRSTUVWYZ
If the user chooses instead to save and quit, ask them for a filename in a prompt on its own line. Then, save to that file and quit.
