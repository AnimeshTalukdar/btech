#include <stdio.h>
#include <string.h>

#define MAX_STATES 100
#define MAX_INPUTS 10

typedef struct State {
    int state_no; 
    int group_no; 
    int transitedState[MAX_INPUTS]; 
    char status; 
} State;

void set(State *s, int n_inputs) {
    int i;

    printf("State: q");
    scanf("%d", &(s->state_no));
    printf("\nFinal or non-final state(f/n): ");
    scanf(" %c", &(s->status));

    if (s->status == 'n' || s->status == 'N')
        s->group_no = 0;
    else if (s->status == 'f' || s->status == 'F')
        s->group_no = 1;

    printf("\nEnter the transition states for the following inputs: \n");
    for (i = 0; i < n_inputs; i++) {
        printf("Input %d: q", i);
        scanf("%d", &(s->transitedState[i]));
        printf("\n");
    }
}

int Minimize(State s[], int n_states, int n_inputs, int *tgroups) {
    int g_reached[MAX_STATES];
    int I, j, i, k, l, f, equivalence;

    for (I = 0; I < n_states - 2; I++) {
        for (j = 0; j < n_inputs; j++) {
            for (i = 0; i < n_states; i++) {
                int temp = s[i].transitedState[j];
                g_reached[i] = s[temp].group_no;
            }

            for (i = 0; i < n_states - 1; i++) {
                int group_record[MAX_STATES];
                memset(group_record, -1, sizeof(group_record));

                for (k = i + 1; k < n_states; k++) {
                    if (s[i].group_no == s[k].group_no && g_reached[i] != g_reached[k]) {
                        f = -1;
                        for (l = 0; l < n_states; l++) {
                            if (g_reached[k] == group_record[l]) {
                                f = l;
                                break;
                            }
                        }

                        if (f == -1) {
                            s[k].group_no = (*tgroups);
                            (*tgroups)++;
                            group_record[k] = g_reached[k];
                        } else {
                            s[k].group_no = s[f].group_no;
                        }
                    }
                }
            }
        }

        equivalence = I;
        for (i = 0; i < n_states; i++) {
            if (s[i].group_no != g_reached[i]) {
                equivalence = -1;
                break;
            }
        }

        if (equivalence != -1) {
            return equivalence;
        }
    }
}
void represent(State s[], int n_states, int n_inputs) {
    int i, j, k;

    for (i = 0; i < n_states - 1; i++) {
        if (s[i].state_no != -1) {
            for (j = i + 1; j < n_states; j++) {
                if (s[i].group_no == s[j].group_no) {
                    for (k = 0; k < n_states; k++) {
                        int l;
                        for (l = 0; l < n_inputs; l++) {
                            if (s[k].transitedState[l] == s[j].state_no)
                                s[k].transitedState[l] = i;
                        }
                    }

                    s[j].state_no = -1;

                    if ((s[j].status == 'F' || s[j].status == 'f') && (s[j].state_no == 0))
                        s[i].status = 'F';
                }
            }
        }
    }
}
void markReachableStates(State s[], int current_state, int visited[], int n_states, int n_inputs) {
    visited[current_state] = 1;
    int j;
    for ( j = 0; j < n_inputs; j++) {
        int next_state = s[current_state].transitedState[j];
        if (!visited[next_state]) {
            markReachableStates(s, next_state, visited, n_states, n_inputs);
        }
    }
}
void getOutput(State s[], int n_states, int n_inputs, int visited[]) {
    int i, j;

    printf("\n\n\n********************************************************\n");
    printf("********************************************************\n");
    printf("States |           Input\n");
    printf("       |");
    for (i = 0; i < n_inputs; i++) {
        printf("     %d", i);
    }
    printf("\n");

    for (i = 0; i < n_states; i++) {
        if (!visited[i] || s[i].state_no == -1) {
            continue; // Skip non-reachable states or already represented states
        }

        printf("\n   q%d |", s[i].state_no);
        for (j = 0; j < n_inputs; j++) {
            printf("     q%d", s[i].transitedState[j]);
        }

        if (s[i].state_no == 0)
            printf("     Initial state");

        if ((s[i].status == 'f' || s[i].status == 'F') && (s[i].state_no == 0))
            printf(" and Final state");
        else if (s[i].status == 'f' || s[i].status == 'F')
            printf("     Final state");
    }
}

void GetEquivalencePartition(State s[], int tgroups, int n_states, int visited[]) {
    int i, j;

    printf("******************Minimum Equivalence Partition*****************\n");

    for (i = 0; i < tgroups; i++) {
        int partition_empty = 1; // Flag to check if the partition is empty

        for (j = 0; j < n_states; j++) {
            if (s[j].group_no == i && visited[j]) {
                partition_empty = 0;
                break;
            }
        }

        if (!partition_empty) {
            printf("{ ");
            for (j = 0; j < n_states; j++) {
                if (s[j].group_no == i && visited[j]) {
                    printf("q%d ", s[j].state_no);
                }
            }
            printf("}\n");
        }
    }
}


int main() {
    int n_states, n_inputs;
    int tgroups = 2;

    printf("********************************************************\n");
    printf("Enter number of states: ");
    scanf("%d", &n_states);
    printf("Enter number of input symbols: ");
    scanf("%d", &n_inputs);

    State s[MAX_STATES];
    int i;
    for ( i = 0; i < n_states; i++) {
        set(&s[i], n_inputs);
    }
    int visited[MAX_STATES] = {0}; 
    markReachableStates(s, 0, visited, n_states, n_inputs); 

    int equivalence = Minimize(s, n_states, n_inputs, &tgroups);
    GetEquivalencePartition(s, tgroups, n_states,visited);
    represent(s, n_states, n_inputs);
    //getOutput(s, n_states, n_inputs);
    getOutput(s, n_states, n_inputs, visited);

    return 0;
}
