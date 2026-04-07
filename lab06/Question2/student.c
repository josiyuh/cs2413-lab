#include "graph.h"

int count_isolated(Graph* g) {
    // TODO: implement
    // return -1;

    int isolatedCount = 0;

    for (int i = 0; i < MAX_NODES; i++) {
        int isIsolated = 1;

        for (int j = 0; j < MAX_NODES; j++) {
            if (g->adj[i][j] == 1) {
                isIsolated = 0;
                break;
            }
        }

        if (isIsolated) {
            isolatedCount++;
        }
    }

    return isolatedCount;
}