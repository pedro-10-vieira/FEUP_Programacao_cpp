#include <iostream>
#include <sstream>
#include <map>
using namespace std;

void show_map(const map<string, size_t>& count) {
  cout << "[ ";
  for (const auto& e : count) {
    cout << e.first << ":" << e.second << ' ';
  }
  cout << "]\n";
}

void count_words(const string& str, map<string, size_t>& count) {
    istringstream word(str);
    for (string s; word >> s;) {
        for (char& c : s) {
            c = tolower(c);
        }
        count[s] ++;
    }
}

int main() {
    { string s = "If you want to buy  buy  if you don't want to buy  bye bye";
  map<string, size_t> count; 
  count_words(s, count);
  show_map(count); }
    return 0;
}