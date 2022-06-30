class Board
{
public:
	int width, height;
	bool p1_turn = true;

	Board(int n, int m, bool turn, boardthing) {
		width = n;
		height = m;
		p1_turn = turn;
		int board[height][width];
	}

	void move(int column) {
		for (i = 0, i < height, i++) {
			if (board[column][i] == 0) {
				board[column][i] = 2 * p1_turn - 1; // sets the marker to 1 if p1 turn and -1 if p2 turn
				p1_turn = !p1_turn;
				break
			}// Do not know if this is the correct way around
		}
	}



	bool evaluate_board() {
		if (p1_turn) {
			int piece_value = 1;
		}
		else {
			int piece_value = -1
		}
		for (int i = 0; i < height) {
			if
		}

	}
}