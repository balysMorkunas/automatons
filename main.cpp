#include "edge.h"
#include "node.h"
#include <iostream>

int main() {

  Node n1;
  Node n2;
  Edge e;

  n1.id = 1;
  n2.id = 2;
  e.accepted = "ab";
  e.from = &n1;
  e.to = &n2;

  n1.outgoing_edges.push_back(&e);

  std::cout << n1.outgoing_edges.at(0)->accepted;

  return 0;
}
