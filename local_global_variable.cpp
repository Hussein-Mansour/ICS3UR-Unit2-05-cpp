// Copyright (c) 2021 Hussein Mansour All rights reserved
//
// Created by: Hussein Mansour
// Created on: Wed/Apr28/2021
// This program calculates the price of a pizza


#include <iostream>


// global variable:
int variableX = 25;


void localVariable() {
    // this shows what happen with local variables:

    int variableX = 10;
    int variableY = 30;
    int variableZ = variableX + variableY;
    std::cout << "local variable_x, variable_y, variable_z : " << variableX
    << "+" << variableY << "=" << variableZ << std::endl;
}


void globalVariable() {
    // this shows what happen with global variables:

    variableX = variableX + 1;
    int variableY = 30;
    int variableZ = variableX + variableY;
    std::cout << "local variable_x, variable_y, variable_z :" << variableX
    << "+" << variableY << "=" << variableZ << std::endl;
}


int main() {
  globalVariable();
  localVariable();
}
