#ifndef FILEPRINTER_H
#define FILEPRINTER_H

#pragma once
#include "Printer.h"

class FilePrinter : public Printer
{
    /**
      Class, that is used to print to file
      */
public:
    void print(int **, int);
private:
    FILE *file;
};

#endif // FILEPRINTER_H
