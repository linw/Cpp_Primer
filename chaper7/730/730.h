/*
 * MODULE NAME: 730.h
 * PROJECT: cpp_primer Function 7.30
 * AUTHOR: 林炜
 * DATE: October 18, 2011
 * DESCRIPTION: 
*/
#ifndef CPP_730_H
#define CPP_730_H
#include <string>

inline bool isShorter(const std::string &s1, const std::string &s2){
    return (s1.size() < s2.size()) ? true : false;
};
#endif
