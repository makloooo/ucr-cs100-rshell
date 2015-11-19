#ifndef HELPER_H
#define HELPER_H

#include "include.h"
#include "connector.h"

class Connector;

void truncate(char*&);
void trim(char*&);
deque<char*> parse(char*);
void printArg(char*);
void printArgs(char**);
void printInfo(char*, char*);
void printQueue(queue<char**>);
void printQueue(deque<char*>);
void printQueue(queue<char*>);
void printLine(int);
void setNull(char*);
void cutEndSpaces(char*);
// bool execute(char* args[]);
// void runCommands(queue<char**> arguments, queue<char*> connectors);
bool test(char*);
Connector* buildTree(queue<char**>&, queue<char*>&);
void printTree(Connector*);

int checkConnectors(char*);
bool isConnector(char*);
bool isDblConnector(char*);
bool isAttached(char*);
bool hasStartParenthesis(char*&);
bool hasEndParenthesis(char**&);
#endif
