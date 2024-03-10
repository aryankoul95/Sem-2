#include <stdio.h>
#include <string.h>

// Structure to store movie information
struct Movie
{
    int movieId;
    char movieName[100];
    char releaseDate[20];
    float rating;
};

// Function prototypes
void insert(struct Movie movies[], int *count);
void display(struct Movie movies[], int count);
void edit(struct Movie movies[], int count);
void deleteMovie(struct Movie movies[], int *count);
void search(struct Movie movies[], int count);
int checkMovieId(struct Movie movies[], int count, int id);

int main()
{
    struct Movie movies[100]; // Maximum 100 movies
    int choice, count = 0;

    do
    {
        printf("\nMovie Management System\n");
        printf("1. Add New Movie Record\n");
        printf("2. Display All Movie Records\n");
        printf("3. Edit Movie Record by Movie ID\n");
        printf("4. Delete Movie from the list\n");
        printf("5. Search Movie by Name or Release Date\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            insert(movies, &count);
            break;
        case 2:
            display(movies, count);
            break;
        case 3:
            edit(movies, count);
            break;
        case 4:
            deleteMovie(movies, &count);
            break;
        case 5:
            search(movies, count);
            break;
        case 6:
            printf("Exiting the program. Goodbye!\n");
            break;
        default:
            printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 6);

    return 0;
}

// Function to insert a new movie record
void insert(struct Movie movies[], int *count)
{
    if (*count >= 100)
    {
        printf("Maximum number of movies reached.\n");
        return;
    }

    printf("Enter Movie ID: ");
    scanf("%d", &movies[*count].movieId);

    if (checkMovieId(movies, *count, movies[*count].movieId) != -1)
    {
        printf("Movie with ID %d already exists. Please choose a different ID.\n", movies[*count].movieId);
        return;
    }

    printf("Enter Movie Name: ");
    scanf(" %[^\n]s", movies[*count].movieName);

    printf("Enter Release Date: ");
    scanf(" %[^\n]s", movies[*count].releaseDate);

    printf("Enter Rating: ");
    scanf("%f", &movies[*count].rating);

    (*count)++;
    printf("Movie added successfully!\n");
}

// Function to display all movie records
void display(struct Movie movies[], int count)
{
    if (count == 0)
    {
        printf("No movies found.\n");
        return;
    }

    printf("\nMovie Records:\n");
    printf("---------------------------------------------------------------------------\n");
    printf("| %-10s | %-30s | %-15s | %-7s |\n", "Movie ID", "Movie Name", "Release Date", "Rating");
    printf("---------------------------------------------------------------------------\n");

    for (int i = 0; i < count; i++)
    {
        printf("| %-10d | %-30s | %-15s | %-8f|\n", movies[i].movieId, movies[i].movieName, movies[i].releaseDate, movies[i].rating);
    }

    printf("---------------------------------------------------------------------------\n");
}

// Function to edit a movie record by Movie ID
void edit(struct Movie movies[], int count)
{
    if (count == 0)
    {
        printf("No movies found to edit.\n");
        return;
    }

    int movieId, index;
    printf("Enter Movie ID to edit: ");
    scanf("%d", &movieId);

    index = checkMovieId(movies, count, movieId);
    if (index == -1)
    {
        printf("Movie with ID %d not found.\n", movieId);
        return;
    }

    printf("Enter new Movie Name: ");
    scanf(" %[^\n]s", movies[index].movieName);

    printf("Enter new Release Date: ");
    scanf(" %[^\n]s", movies[index].releaseDate);

    printf("Enter new Rating: ");
    scanf("%f", &movies[index].rating);

    printf("Movie with ID %d edited successfully!\n", movieId);
}

// Function to delete a movie from the list
void deleteMovie(struct Movie movies[], int *count)
{
    if (*count == 0)
    {
        printf("No movies found to delete.\n");
        return;
    }

    int movieId, index;
    printf("Enter Movie ID to delete: ");
    scanf("%d", &movieId);

    index = checkMovieId(movies, *count, movieId);
    if (index == -1)
    {
        printf("Movie with ID %d not found.\n", movieId);
        return;
    }

    for (int i = index; i < *count - 1; i++)
    {
        movies[i] = movies[i + 1];
    }

    (*count)--;
    printf("Movie with ID %d deleted successfully!\n", movieId);
}

// Function to search for a movie by name or release date
void search(struct Movie movies[], int count)
{
    if (count == 0)
    {
        printf("No movies found to search.\n");
        return;
    }

    char searchStr[100];
    int found = 0;

    printf("Enter Movie Name or Release Date to search: ");
    scanf(" %[^\n]s", searchStr);

    printf("\nSearch Results:\n");
    printf("---------------------------------------------------------------------------\n");
    printf("| %-10s | %-30s | %-15s | %-7s |\n", "Movie ID", "Movie Name", "Release Date", "Rating");
    printf("---------------------------------------------------------------------------\n");

    for (int i = 0; i < count; i++)
    {
        if (strstr(movies[i].movieName, searchStr) || strstr(movies[i].releaseDate, searchStr))
        {
            printf("| %-10d | %-30s | %-15s | %f|\n", movies[i].movieId, movies[i].movieName, movies[i].releaseDate, movies[i].rating);
            found = 1;
        }
    }

    if (!found)
    {
        printf("No matching movies found.\n");
    }

    printf("---------------------------------------------------------------------------\n");
}

// Function to check if a movie ID already exists
int checkMovieId(struct Movie movies[], int count, int id)
{
    for (int i = 0; i < count; i++)
    {
        if (movies[i].movieId == id)
        {
            return i; // Movie ID found, return index
        }
    }
    return -1; // Movie ID not found
}
