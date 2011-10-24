/*
 * MODULE NAME: 710.cpp
 * PROJECT: cpp_primer Function 7.10
 * AUTHOR: 林炜
 * DATE: October 17, 2011
 * DESCRIPTION: 
*/
#include <iostream>
#include <string>

using namespace std;

bool test(string& s) { return s.empty(); };
bool test_improved(const string& s) { return s.empty(); };
