#include <iostream>
#include <stack>
#include <queue>

std::stack<int> reverse_stack(std::stack<int> s) {
  std::stack<int> reversed_s;
  
  while(!s.empty())
  {
    reversed_s.push(s.top());
    s.pop();
    
  }
  
  return reversed_s;
}
std::stack<int> reverse_queue(std::queue<int> q) {
  std::stack<int> reversed_q;
  int l=q.size();
  std::stack<int> d;
  while (!q.empty())
  {
    d.push(q.front());
    q.pop();
  }

  return d;
}
//12345
//
void print_stack(std::string name, std::stack<int> s) {
  std::cout << "stack " << name << ": ";
  while (!s.empty()) {
    std::cout << s.top() << " ";
    s.pop();
  }
  std::cout << std::endl;
}

void print_queue(std::string name, std::queue<int> q) {
  std::cout << "queue " << name << ": ";
  while (!q.empty()) {
    std::cout << q.front() << " ";
    q.pop();
  }
  std::cout << std::endl;
}

int main() {
  std::stack<int> s, rs,rq;
  std::queue<int> q, rqi;
  
  s.push(1); s.push(2); s.push(3); s.push(4); s.push(5);

  print_stack("s",s);

  rs = reverse_stack(s);

  print_stack("reversed s",rs);
  
  q.push(1); q.push(2); q.push(3); q.push(4); q.push(5);
  
  print_queue("q",q);
  
  rq = reverse_queue(q);
  
  print_stack("reversed q",rq);

  return 0;
}