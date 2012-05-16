#ifndef CONSOLEPRINTER_H
#define CONSOLEPRINTER_H

#pragma once
#include "Printer.h"
#include "iostream"

class ConsolePrinter : public Printer
{
public:
    void print(int **, int);
};

#endif // CONSOLEPRINTER_H
