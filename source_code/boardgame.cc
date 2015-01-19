int x; // number of squares in x direction
int y; // number of squares in y direction

//This is a test of version control
piece piece_array [][];



boardgame::boardgame (int x1, int y1)
{
x=x1;
y=y1;
drawRectangle (int x1, int y1);
clear (int x1, int y1);





}


// Draws a board of size x1 by y1 based on given parameters

drawRectangle (int x1, int y1)
{
	

}

clear (int x1, int y1)
{
for (int i; i<x1; i++)
	{
		for (int j; j<x1; j++)
			{	Point piece_location = Point (x1, y1);
				piece new_piece (piece_location, color);
				piece_array [i][j] = new_piece;

			}


	}


for (int i; i<x1; i++)
	{
		for (int j; j<x1; j++)
			{
				piece_array [i][j].drawCircle();

			}

	}

}