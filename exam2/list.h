#ifndef LIST_H
#define LIST_H

template<class T>
class List
{
public:
    T value;
    List<T>* next;

    List():next(0), value(0){}
    ~List();
    void add(T val);
    void remove(T val);
    bool exist(T val);
    int length();
};

template<class T>
List<T>::~List()
{
    delete next;
}

template<class T>
void List<T>::add(T val)
{
    List<T>* temp = new List<T>;
    temp->value = val;
    if (!next)
    {
        next = temp;
    }
    else
    {
        temp->next = next;
        next = temp;
    }
}

template<class T>
void List<T>::remove(T val)
{
    List<T>* temp = this;
    while(temp->next && temp->next->value != val)
    {
        temp = temp->next;
    }
    if (temp->next && temp->next->value == val)
    {
        List<T>* tmp = temp->next;
        temp->next = temp->next->next;
        tmp->next = 0;
        delete tmp;
    }
}

template<class T>
bool List<T>::exist(T val)
{
    List<T>* temp = next;
    while (temp)
    {
        if (temp->value == val)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

template<class T>
int List<T>::length()
{
    int length = 0;
    List<T>* temp = next;
    while (temp)
    {
        length++;
        temp = temp->next;
    }
    return length;
}



#endif // LIST_H
