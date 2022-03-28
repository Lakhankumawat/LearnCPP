/*
- FCAI - Programming 1 - 2022 - Assignment 1
- This program is a simple SOS game for 2 players
- Author: Abdullah Ibrahim   < abdullahibrahim1823@gmail.com >
- Version: 1.0
- Last modification date : 10/3/2022
- Copyright Ⓒ FCAI CU 2021-2022
 */
#include <iostream>
using namespace std;
void display_game_board();
void  take_character();
void take_location(string character);
void calculate_points(char row, char column, string character);
void change_role();
void add_points_to_player(short new_points);
void display_score();
void display_current_role();
void game_over();
void enter_players_names();

static string player_1;
static string player_2;
static string current_player;
static short player_1_points = 0 ;
static short player_2_points = 0 ;

static string game_board [6] [8] = {

        {"empty", "empty", "empty", "empty", "empty", "empty", "empty", "empty"},
        {"empty", "1", "2", "3", "4", "empty"},
        {"empty", "5", "6", "7", "8", "empty"},
        {"empty", "9", "10", "11", "12", "empty"},
        {"empty", "13", "14", "15", "16", "empty"},
        {"empty", "empty", "empty", "empty", "empty", "empty", "empty", "empty"}
};

//This is the main function to play the game
int main() {

    char counter = 0;
    enter_players_names();
    while(true){
        cout << "\a" << endl;
        display_game_board();
        display_score();
        display_current_role();
        take_character();
        ++counter;

        if (counter == 16){
            game_over();
            return 0;
        }
    }

}

//Display 4X4 game board
void display_game_board(){

    cout << endl;
    for (char row = 1; row < 5; ++row) {
        char columns_counter = 0 ;

        for (char column = 1; column < 5; ++column) {
            cout << game_board [row] [column] << "   ";
            columns_counter++ ;

            if (game_board[row][column].length() == 1) cout << " "; //to avoid inconsistency of lines

            if (columns_counter == 4) cout << endl << endl;
        }

    }

}

// Get the letter that the player wants to play ( S or O )
void  take_character(){
    string character = " " ;
    cout << "\nplease enter 'S' or 'O'...\n" ;
    cin >> character ;

    while (true){

        if (character == "s" || character == "S") { //to check the validation of the input
            take_location("S"); //pass the letter to this function to update the board
            break;
        }
        else if (character == "o" || character == "O"){ //to check the validation of the input
            take_location("O"); //pass the letter to this function to update the board
            break;
        }
        else{
        cout << "invalid input\n please enter 'S' or 'O'...\n";
        cin >> character;
        }

    }


}

// Get the location number where the player wants to put the letter
void take_location(string character){
    string  location;
    cout << "please enter the location number...\n";
    bool isTrue = false;

    while (true){
        cin >> location;
        for (char row = 0; row < 5; ++row) {
            for (char column = 0; column < 5; ++column) {
                if (game_board [row] [column] == location && location != "empty"){ //to check the validation
                                                                                   //of the location number
                    game_board [row] [column] = character ; //updating the game board by replacing
                    isTrue = true; //the number with the letter

                    calculate_points(row, column, character); //pass the 2D index of the new letter
                }                                                     //and pass the letter itself
            }
        }

        if (isTrue) break;
        else cout << "invalid input\n please enter the location number..." << endl ;
    }

}

//Calculate points after every letter input by the players
void calculate_points(char row_of_new_char, char column_of_new_char, string character){
    short points = 0;

    //To calculate the points if the input is ( S )
    if (character == "S"){

        //check all character surrounding the character entered by the user
        for (char row = row_of_new_char - 1; row < row_of_new_char + 2; ++row) {
            for (char column = column_of_new_char - 1; column < column_of_new_char + 2; ++column) {
                if (row == row_of_new_char && column == column_of_new_char) continue;

                if (game_board[row][column] == "O"){ //to check if one of those characters is ( O )
                    char new_row = row;
                    char new_column = column;

                    if (new_row < row_of_new_char){ //check if the character (O) is in the row above (S)

                        if (new_column < column_of_new_char){ //check if the character (O) is in the column left to (S)
                            if (game_board[new_row - 1][new_column - 1] == "S") ++points ;
                        }  //add 1 point if the word SOS formed in diagonal

                        if (new_column == column_of_new_char){ //check if the character (O) is in the same column of (S)
                            if (game_board[new_row - 1][new_column] == "S") ++points ;
                        } //add 1 point if the word SOS formed in Vertical

                        if (new_column > column_of_new_char){ //check if the character (O) is in the column right to (S)
                            if (game_board[new_row - 1][new_column + 1] == "S") ++points ;
                        }  //add 1 point if the word SOS formed in diagonal

                    }

                    if (new_row == row_of_new_char){ //check if the character (O) is in the same row of (S)

                        if (new_column < column_of_new_char){
                            if (game_board[new_row][new_column - 1] == "S") ++points ;
                        } //add 1 point if the word SOS formed in horizontal left to input

                        if (new_column > column_of_new_char){
                            if (game_board[new_row][new_column + 1] == "S") ++points ;
                        } //add 1 point if the word SOS formed in horizontal right to input

                    }

                    if (new_row > row_of_new_char){ //check if the character (O) is in the row beneath (S)

                        if (new_column < column_of_new_char){
                            if (game_board[new_row + 1][new_column - 1] == "S") ++points ;
                        } //add 1 point if the word SOS formed in diagonal

                        if (new_column == column_of_new_char){
                            if (game_board[new_row + 1][new_column] == "S") ++points ;
                        } //add 1 point if the word SOS formed in vertical

                        if (new_column > column_of_new_char){
                            if (game_board[new_row + 1][new_column + 1] == "S") ++points ;
                        } //add 1 point if the word SOS formed in diagonal

                    }



                }




            }

        }
     //To calculate the points if the input is ( O )
    }else if (character == "O"){
        char row = row_of_new_char;
        char column = column_of_new_char;

        //add 1 point if the word SOS formed in horizontal
        if (game_board[row][column-1] == "S" && game_board[row][column+1] == "S") ++points ;

        // add 1 point if the word SOS formed in vertical
        if (game_board[row - 1][column] == "S" &&  game_board[row + 1][column] == "S") ++points;

        //add 1 point if the word SOS formed in diagonal
        if (game_board[row - 1][column - 1] == "S" &&  game_board[row + 1][column + 1] == "S") ++points;

        //add 1 point if the word SOS formed in diagonal
        if (game_board[row + 1][column - 1] == "S" &&  game_board[row - 1][column + 1] == "S") ++points;
    }

    //pass calculated points scored by the player to this function to add these points to his total score
    add_points_to_player(points);

}

//To change the turn between the players
void change_role(){
    if (current_player == player_1) current_player = player_2;
    else if (current_player == player_2) current_player = player_1;
}

//To add calculated points to the total score of the current player
void add_points_to_player(short new_points){
    if (new_points == 0) change_role();
    else if (current_player == player_1) player_1_points += new_points ;
    else if (current_player == player_2) player_2_points += new_points ;
}

//To display the score of each player
void display_score(){
    cout << player_1 + "'s score is " << player_1_points << endl;
    cout << player_2 + "'s score is " << player_2_points << endl;
}

//To display which player has the turn
void display_current_role(){
    cout << "it is " + current_player + "'s turn" << endl;
}

//To display GAME OVER and final game stats ( winner name or DRAW )
void game_over(){

    cout << endl << endl;
    display_game_board();
    display_score();
    cout << "\n########## GAME OVER ##########\n" << endl ;

    if (player_1_points > player_2_points) cout << player_1 + " is the winner!" << endl;
    else if (player_2_points > player_1_points) cout << player_2 + " is the winner!" << endl;
    else cout << "DRAW!" << endl;

}

//To take players names
void enter_players_names(){
    cout << "\n  please enter player 1 name..." << endl;
    cin >> player_1;
    cout << "  please enter player 2 name..." << endl;
    cin >> player_2;

    current_player = player_1; //the first turn is for player 1
}