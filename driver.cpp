#include <iostream>
#include <string>
#include <cassert>

using namespace std;

string helloName(string name);
string makeAbba(string a, string b);
int main()
{
    //assert(helloName("Bob") == "Hello Bob!");
    //assert(helloName("Alice") == "Hello Alice!");
    //assert(helloName("X") == "Hello X!");
    //assert(helloName("Joe") == "Hello Joe!");
    //assert(helloName("Cindy");
    

    assert(makeAbba("Hi" , "Bye") == "HiByeByeHi" );
    assert(makeAbba("Yo" , "Alice") == "YoAliceAliceYo" );
    assert(makeAbba("What" , "Up") == "WhatUpUpWhat" );
    assert(makeAbba("Alt" , "Tab") == "AltTabTabAlt" );
    assert(makeAbba("Git" , "Hub") == "GitHubHubGit" );
    return 0;
}

string helloName(string name)
{
    return "Hello " + name + "!";
}

string makeAbba(string a, string b)
{
    return a+b+b+a;
}
