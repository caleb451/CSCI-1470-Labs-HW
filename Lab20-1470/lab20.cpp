/////////////////////////////////////////////////////////////////////
//
// Name: Caleb Gomez
// Date: 11/30/2023
// Class: CSCI 1470.02
// Semester: Fall 2023
// CSCI 1470 Instructor: Gustavo Deitrich
//
// Program Description: Enter here your description of what the program does
// The program gets a text file that has a list of movies with the year 
// it was released and the amount of revenue it made that year. The program
// print them out into the console in alphabetical order as it was sorted
// to get the hexidecimal of the first letters. The program asks if they want
// to grab a specific movie title and see it's items individually. The program
// then loops to see if the user would like to redo the singular movie title again.
// If 'y', it'll run it again but if 'n' it won't. 
/////////////////////////////////////////////////////////////////////

#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>

using namespace std;

 const int MOVIES_SIZE = 20;


// Declare a struct named Movie with 3 members for:
// title, year released, and revenue
struct Movie{
	string title;
  	int yearReleased;
  	double revenue;
};

// Enter here your function prototypes
void storeMoviesArray(ifstream& inFile, Movie topMovies[], const int SIZE);
void sortMoviesTitle(Movie topMovies[], const int SIZE);
void printMoviesArray(Movie topMovies[], const int SIZE);
int findMovieTitle(Movie topMovies[], const int SIZE, string title);

// main() starts here
int main(){
	// Declare file variable
	ifstream file;
	// Open file Movies.txt
	file.open("Movies.txt");
	// Check if file was opened
	if(!file){
		cout << "No file was opened";
    	return 1;
	}
	// Declare array of movies
    Movie movies[MOVIES_SIZE];
	// Declare auxiliary variables
	char answer;
	string title;
	int found;
	// Read the information from the movies file and store it in the array
	storeMoviesArray(file, movies, MOVIES_SIZE);
	// Sort the array by the movie title so the binary search can be used 
	sortMoviesTitle(movies, MOVIES_SIZE);
	// Start the loop
	do{
		// Clear the screen
		system("Cls");
		// Print the movies array
		printMoviesArray(movies, MOVIES_SIZE);
		// Ask the user to input a title
		cout << "\nEnter a movie title: ";
		// Find the index of the movie that the user chooses
		found = findMovieTitle(movies, MOVIES_SIZE, title);
		// If the movie was not found
		if(found == -1 || found > 20){
		//		Print the message indicating the title was not found
			cout << "\nMovie was not found." << endl;
		}
		// Otherwise
		else{
		//		Print the information about the chosen movie
			cout << "\nTitle: " << movies[found].title << endl;
			cout << "Year Released: " << movies[found].yearReleased << endl;
			cout << "Revenue: " << "$" << static_cast<int>(movies[found].revenue) << endl << endl;
		}
		// Ask the user "Do you want to continue? (y/n): "
		cout << "Do you want to continue? (y/n): ";
		// Get the answer
		cin >> answer;

	// Continue looping while the answer is 'y'
	}while(answer == 'y');
	// Close the file
	file.close();

	return 0;
}
// main() ends here

// Function definitions start here
void storeMoviesArray(ifstream& inFile, Movie topMovies[], const int SIZE){
// This function receives the input file, the movies array, and the size of the 
// array. 
// It reads from the file the movie data and stores it in the array.
// Once all the data has been read in, it returns the array with the information 
// of the movies.
	int i;

	for(i = 0; i < SIZE; i++){ //gets the very first value of the index and will stop when i is > SIZE
    	inFile >> topMovies[i].title >> topMovies[i].yearReleased >> topMovies[i].revenue;
  	}
}

void sortMoviesTitle(Movie topMovies[], const int SIZE){
// This function receives the movies array and the size of the array and sorts
// the array by title. It returns the sorted array.
	Movie temp;
	int i, j;

	for (i = 0; i < SIZE; ++i){
		for (j = 0; j < SIZE - i - 1; ++j){
			if (topMovies[j].title > topMovies[j + 1].title){
				temp = topMovies[j];
				topMovies[j] = topMovies[j + 1];
				topMovies[j + 1] = temp;
			}
		}
	}
}

void printMoviesArray(Movie topMovies[], const int SIZE){
// This function receives the movies array and the size of the array and prints
// the list of movies.
	int i;
	cout << setw(36) << right << "Movie title" << setw(8) << "Year" << setw(13) << "Revenue" << endl << endl;

	for(i = 0; i < SIZE; i++){
		cout << right << setw(36) << topMovies[i].title << " " << setw(7) << topMovies[i].yearReleased << setw(5) << " $ " << setw(10) << static_cast<int> (topMovies[i].revenue) << " " << endl;
	}
}

int findMovieTitle(Movie topMovies[], const int SIZE, string title){
// This function receives the movies array, the size of the array, and the title
// of the movie to be searched for.
// It returns the index of the array where the title was found. If the title was 
// not found, it returns -1. It must use BINARY SEARCH to find the movie.
	int i;
	int pos = -1;
	cin >> title;

	while(i < SIZE){
		if(title == topMovies[i].title){
			pos = i;
			break;
		}
		else if(title != topMovies[i].title){
			i++;
		}
  	}
	return pos;
}