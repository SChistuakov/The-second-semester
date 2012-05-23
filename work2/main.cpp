#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <LinkedList.h>

using namespace std;

int main()
{
    srand(time(NULL));
    List * newList = new LinkedList();
    newList->rand()%100;
    cout<<"\n\n";

}

