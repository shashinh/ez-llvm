/*
 * main.cpp
 *
 *  Created on: 15-Apr-2020
 *      Author: shashin
 */


int main() {

// set the precedence of the standard binary operators
  BinopPrecedence['<'] = 10;
  BinopPrecedence['+'] = 20;
  BinopPrecedence['-'] = 20;
  BinopPrecedence['*'] = 40; // highest.

  // Prime the first token.
  fprintf(stderr, "ready> ");
  getNextToken();

  // Run the main "interpreter loop" now.
  MainLoop();

  return 0;
}

