#include"player.h"
using namespace std;

void makeLine();
void insertPiece(int [][8]);
void drawBoard(int [][8]);
char NtoP(int);

void testPtr(Player);	//! DebugFunction NOT-IN-FINAL-VERSION
void testAddress(int [][8]); //! DebugFunction NOT-IN-FINAL-VERSION

void inputCommand(Player x){
	string com;
	char pos1[3],pos2[3]; 
	char check[] = "a1",check2[] = "a2";
	cout << "Input Player " << x.number << " command: ";
	getline(cin,com);
	scanf(com.c_str(),"%s to %s",pos1,pos2);
	cout << strcmp(pos1,check);
	cout << strcmp(pos2,check2);
	cout << "\n";
	
}
int main(){
	int board[8][8] = {
	/*   0  1  2  3  4  5  6  7  */
  /*0*/	-1,-2,-3,-4,-5,-3,-2,-1, 
  /*1*/	 0, 0, 0, 0, 0, 0, 0, 0,
  /*2*/	-6,-6,-6,-6,-6,-6,-6,-6,
  /*3*/	 0, 0, 0, 0, 0, 0, 0, 0,
  /*4*/	 0, 0, 0, 0, 0, 0, 0, 0,
  /*5*/	 6, 6, 6, 6, 6, 6, 6, 6,
  /*6*/	 0, 0, 0, 0, 0, 0, 0, 0,
  /*7*/	 1, 2, 3, 5, 4, 3, 2, 1,
	};
	
	Player p1(1); Player p2(2);
	/*line 1*/
	p1.ptr.push_back(&board[7][0]);
	p1.ptr.push_back(&board[7][1]); 
	p1.ptr.push_back(&board[7][2]);
	p1.ptr.push_back(&board[7][3]);
	p1.ptr.push_back(&board[7][4]);
	p1.ptr.push_back(&board[7][5]);
	p1.ptr.push_back(&board[7][6]);
	p1.ptr.push_back(&board[7][7]);
	/*line 3*/
	p1.ptr.push_back(&board[5][0]);
	p1.ptr.push_back(&board[5][1]);
	p1.ptr.push_back(&board[5][2]);
	p1.ptr.push_back(&board[5][3]);
	p1.ptr.push_back(&board[5][4]);
	p1.ptr.push_back(&board[5][5]);
	p1.ptr.push_back(&board[5][6]);
	p1.ptr.push_back(&board[5][7]);
	/* line 8*/
	p2.ptr.push_back(&board[0][0]);
	p2.ptr.push_back(&board[0][1]);
	p2.ptr.push_back(&board[0][2]);
	p2.ptr.push_back(&board[0][3]);
	p2.ptr.push_back(&board[0][4]);
	p2.ptr.push_back(&board[0][5]);
	p2.ptr.push_back(&board[0][6]);
	p2.ptr.push_back(&board[0][7]);
	/* line 6*/
	p2.ptr.push_back(&board[2][0]);
	p2.ptr.push_back(&board[2][1]);
	p2.ptr.push_back(&board[2][2]);
	p2.ptr.push_back(&board[2][3]);
	p2.ptr.push_back(&board[2][4]);
	p2.ptr.push_back(&board[2][5]);
	p2.ptr.push_back(&board[2][6]);
	p2.ptr.push_back(&board[2][7]);
	
	//testAddress(board); //debugFunc
	//testPtr(p1); //debugFunc
	
	bool Turn = true; //TODO if false=player2,true=player1
	while(true){
		drawBoard(board);
		if(Turn){ //player1
			inputCommand(p1);
		}else{ //player2
			inputCommand(p2);
		}
	}
	
}

/* function */ 

void makeLine(){
		cout << "   =========================================\n";
	}

void insertPiece(int B[][8]){ 	//? i is row , j is columb
	int count = 8;
	for(int i = 0; i < 8 ; i++){
		cout << count;
		for(int j = 0;j < 8; j++){
			cout << " || " << NtoP(B[i][j]);
		}
		cout << " ||";
		count--;
		cout << "\n";
		makeLine();
	}
}

void drawBoard(int B[][8]){
	cout << "     A    B    C    D    E    F    G    H   \n";
	makeLine();
	insertPiece(B);
}

char NtoP(int N) {  //TODO NtoP is Number to Pieces
	switch(N){
		/*Player 2*/
		case -1: return 'r'; break; 
		case -2: return 'n'; break;
		case -3: return 'b'; break;
		case -4: return 'q'; break;
		case -5: return 'k'; break;
		case -6: return 'p'; break;
		case -7: return 'f'; break;
		/*Player 1*/
		case 1: return 'R'; break;
		case 2: return 'N'; break;
		case 3: return 'B'; break;
		case 4: return 'Q'; break; 
		case 5: return 'K'; break;
		case 6: return 'P'; break;
		case 7: return 'F'; break;
		default: return ' '; break;
	}
}

/*! DebugFunction NOT-IN-FINAL-VERSION */
void testPtr(Player p){	
	for(int i=0;i < 16 ;i++) cout << p.ptr[i] <<"\n";
	cout << "Player " << p.number << " Pieces\n";
}

void testAddress(int B[][8]){    
	cout << "\n";
	for(int i = 0; i < 8 ; i++){
		for(int j = 0;j < 8; j++){
			cout << " || " << &B[i][j];
		}
		cout << " ||";
		cout << "\n";
	}
	cout << "-------------------------------------------------------------------\n";
}



/*
	cout << "\n";
	cout << "      A    B    C    D    E    F    G    H   \n";
	cout << "   ==========================================\n";
	cout << " 8 || R || N || B || Q || K || B || N || R ||\n";
	cout << "   ==========================================\n";
	cout << " 7 ||   ||   ||   ||   ||   ||   ||   ||   ||\n";
	cout << "   ==========================================\n";
	cout << " 6 || P || P || P || P || P || P || P || P ||\n";
	cout << "   ==========================================\n";
	cout << " 5 ||   ||   ||   ||   ||   ||   ||   ||   ||\n";
	cout << "   ==========================================\n";
	cout << " 4 ||   ||   ||   ||   ||   ||   ||   ||   ||\n";
	cout << "   ==========================================\n";
	cout << " 3 || p || p || p || p || p || p || p || p ||\n";
	cout << "   ==========================================\n";
	cout << " 2 ||   ||   ||   ||   ||   ||   ||   ||   ||\n";
	cout << "   ==========================================\n";
	cout << " 1 || r || n || b || k || q || b || n || r ||\n";
	cout << "   ==========================================\n";
*/