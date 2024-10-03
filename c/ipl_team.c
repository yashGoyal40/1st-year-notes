#include <stdio.h>
#include <string.h>
#include<stdlib.h>
struct team {
  char name[50];
  char players[11][50]; // assuming each team has 11 players
};

void displayTeams(struct team teams[], int num_teams) {
  for (int i = 0; i < num_teams; i++) {
    printf("Team Name: %s\n", teams[i].name);
    printf("Players:\n");
    for (int j = 0; j < 11; j++) {
      printf("%s\n", teams[i].players[j]);
    }
    printf("\n");
  }
}

void addTeam(struct team teams[], int *num_teams) {
  printf("Enter team name: ");
  scanf("%s", teams[*num_teams].name);
  printf("Enter player names (11 players): ");
  for (int i = 0; i < 11; i++) {
    scanf("%s", teams[*num_teams].players[i]);
  }
  (*num_teams)++;
}

void deleteTeam(struct team teams[], int *num_teams, char *team_name) {
  int team_index = -1;
  for (int i = 0; i < *num_teams; i++) {
    if (strcmp(teams[i].name, team_name) == 0) {
      team_index = i;
      break;
    }
  }
  if (team_index == -1) {
    printf("Team not found!\n");
    return;
  }
  for (int i = team_index; i < (*num_teams)-1; i++) {
    teams[i] = teams[i+1];
  }
  (*num_teams)--;
}

void updateTeam(struct team teams[], int num_teams, char *team_name) {
  int team_index = -1;
  for (int i = 0; i < num_teams; i++) {
    if (strcmp(teams[i].name, team_name) == 0) {
      team_index = i;
      break;
    }
  }
  if (team_index == -1) {
    printf("Team not found!\n");
    return;
  }
  printf("Enter updated team name: ");
  scanf("%s", teams[team_index].name);
  printf("Enter updated player names (11 players): ");
  for (int i = 0; i < 11; i++) {
    scanf("%s", teams[team_index].players[i]);
  }
}

void generateSchedule(struct team teams[], int num_teams) {
  FILE *fptr;
  fptr = fopen("schedule.txt", "rw");
  fprintf(fptr, "Schedule:\n");
  for (int i = 0; i < num_teams-1; i++) {
    for (int j = i+1; j < num_teams; j++) {
      fprintf(fptr, "%s vs %s\n", teams[i].name, teams[j].name);
    }
  }
  printf("Schedule generated and saved in schedule.txt file\n");
  char c;
  if (fptr == NULL)
   {
       printf("Cannot open file \n");
       exit(0);
   }
  
   // Read contents from file
   c = fgetc(fptr);
   while (c != EOF)
   {
       printf ("%c", c);
       c = fgetc(fptr);
   }
   fclose(fptr);
   return;
}

void updateSchedule(struct team teams[], int num_teams) {
  printf("Enter updated schedule:\n");
  FILE *fptr;
  fptr = fopen("schedule.txt", "w");
  fprintf(fptr, "Updated Schedule:\n");
  for (int i = 0; i < num_teams-1; i++) {
    for (int j = i+1; j < num_teams; j++) {
      fprintf(fptr, "%s vs %s\n", teams[i].name, teams[j].name);
    }
  }
  printf("Schedule updated and saved in schedule.txt file\n");
  char c;
  if (fptr == NULL)
   {
       printf("Cannot open file \n");
       exit(0);
   }
  
   // Read contents from file
   c = fgetc(fptr);
   while (c != EOF)
   {
       printf ("%c", c);
       c = fgetc(fptr);
   }
   fclose(fptr);
   return;
}
int main() {
    struct team teams[10]; // assuming at most 10 teams
    int num_teams = 0;

    // load data from file
    FILE *fptr;
    fptr = fopen("teams.txt", "r");
    if (fptr != NULL) {
    fscanf(fptr, "%d", &num_teams);
    for (int i = 0; i < num_teams; i++) {
    fscanf(fptr, "%s", teams[i].name);
    for (int j = 0; j < 11; j++) {
    fscanf(fptr, "%s", teams[i].players[j]);
    }
    }
    fclose(fptr);
    }

    int choice;
    char team_name[50];

    do {
    printf("\n**************************************\n");
    printf("1. Display all teams\n");
    printf("2. Add a team\n");
    printf("3. Delete a team\n");
    printf("4. Update a team\n");
    printf("5. Generate schedule\n");
    printf("6. Update schedule\n");
    printf("7. Exit\n");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
    switch (choice) {
  case 1:
    displayTeams(teams, num_teams);
    break;
  case 2:
    addTeam(teams, &num_teams);
    break;
  case 3:
    printf("Enter team name to delete: ");
    scanf("%s", team_name);
    deleteTeam(teams, &num_teams, team_name);
    break;
  case 4:
    printf("Enter team name to update: ");
    scanf("%s", team_name);
    updateTeam(teams, num_teams, team_name);
    break;
  case 5:
    generateSchedule(teams, num_teams);
    break;
  case 6:
    updateSchedule(teams, num_teams);
    break;
  case 7:
    printf("Exiting...\n");
    break;
  default:
    printf("Invalid choice!\n");
    }
} while (choice != 7);
fptr = fopen("teams.txt", "w");
fprintf(fptr, "%d\n", num_teams);
for (int i = 0; i < num_teams; i++) {
fprintf(fptr, "%s\n", teams[i].name);
for (int j = 0; j < 11; j++) {
fprintf(fptr, "%s\n", teams[i].players[j]);
}
}
fclose(fptr);

return 0;
}