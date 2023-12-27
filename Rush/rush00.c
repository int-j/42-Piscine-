#include<unistd.h>

// Function to print a pattern representing a rectangle's outline.
void rush(int L, int C)
{
	int i;
	int j;
	int mat[C][L]; // Declare a 2D matrix to represent the rectangle

	i = 1;
	while (i <= C) // Loop through each row
	{
		j = 1;
		while (j <= L) // Loop through each column in the current row
		{
			// Check for top-left and top-right corners
			if (j == 1 && (i == 1 || i == C))
				write(1, "A", 1);

			// Check for bottom-left and bottom-right corners
			if ((j == L && j != 1) && (i == 1 || i == C))
				write(1, "C", 1);

			// Check for edges of the rectangle, excluding corners
			if (((i > 1 && i < C) && j == 1) || 
			    ((i == 1 && j > 1) && j < L) || 
			    ((i > 1 && i < C) && j == L) || 
			    ((i == C && j > 1) && j < L))
				write(1, "B", 1);

			// Print a space for the inner area of the rectangle
			if ((i > 1 && i < C) && (j > 1 && j < L))
				write(1, " ", 1);

			j++; // Move to the next column
		}
		write(1, "\n", 1); // Move to the next row by printing a newline
		i++; // Move to the next row
	}
}

// Entry point of the program
int main()
{
	// Call the rush function to print a rectangle pattern with L=1 and C=5
	rush(1, 5);
}
