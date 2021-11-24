#include <vector>

class Edge;

class Node {
public:
  int id;
  std::vector<Edge *> outgoing_edges;
};
