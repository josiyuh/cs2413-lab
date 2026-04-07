#include "graph.h"

int count_edges(Graph* g) {
    // TODO: implement
    // return -1;

    int count = 0;

    for (int i = 0; i < MAX_NODES; i++) {
        for (int j = 0; j < MAX_NODES; j++) {
            if (g->adj[i][j] == 1) {
                count++;
            }
        }
    }

    return count / 2;
}