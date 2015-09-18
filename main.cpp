/*
Igor Lemos Vicente - igor94@gmail.com
João Paulo Castilho - joao.pkc@gmail.com 
 */
#include <stdio.h>
#include <math.h>

#define MAX_VALUE 2e31-1

typedef struct Node_t {
  int value;
  Node_t *next, *back;
} node_t;

typedef struct {
  node_t *begin, *end;
} list_t;

bool PositiveUnion[MAX_VALUE], NegativeUnion[MAX_VALUE];
bool PositiveIntersection[MAX_VALUE], NegativeIntersection[MAX_VALUE];
bool PositiveDistinction[MAX_VALUE], NegativeDistinction[MAX_VALUE];
