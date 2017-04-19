#include <iostream>
#include <string>
#include <cassert>

using namespace std;

string helloName(string name);

int main()
{
    assert(helloName("Bob") == "Hello Bob!");
    assert(helloName("Alice") == "Hello Alice!");
    assert(helloName("X") == "Hello X!");
    assert(helloName("Joe") == "Hello Joe!");
    assert(helloName("Cindy") == "Hello Cindy!");
    

    return 0;
}

string helloName(string name)
{
    return "Hello " + name + "!";
}
