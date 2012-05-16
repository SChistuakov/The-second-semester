#ifndef FILEPRINTER_H
#define FILEPRINTER_H

#pragma once
#include "Printer.h"

class FilePrinter : public Printer
{
public:
    void print(int **, int);
private:
    FILE *file;
};

#endif // FILEPRINTER_H
