#ifndef SET_H
#define SET_H

template <typename T>
class Set
{
    /**
        template class realizing ATD "Set", having operations of
        addition, removal of an element, check on accessory to a set,
        crossings and associations of sets.
     */
public:
    Set():size(0){}
    ~Set(){}

    /// add an Element
    void addElement(const T &el)
    {
        if (!contain(el))
        set[size++] = el;
    }

    /// delete an Element
    void deleteElement(T el)
    {
        for (int i = 0; i < size; i++)
            if (set[i] == el)
            {
                for (int j = i; j < size; j++)
                    set[j] = set[j+1];
                size--;
            }
    }

    /// check on accessory
    bool contain(T el)
    {
        for(int i = 0; i < size; i++)
            if (set[i] == el)
                return true;
        return false;
    }

    /// intersection
    Set intersection(Set &set1)
    {
        Set resultSet;
        for (int i = 0; i < size; i++)
            for (int j = 0; j < set1.sizeOfSet(); j++)
                if (set[i] == set1.at(j))
                    resultSet.addElement(set[i]);
        return resultSet;
    }

    /// association
    Set association(Set &set1)
    {
        Set resultSet;
        for (int i = 0; i < size; i++)
            resultSet.addElement(set[i]);
        for (int i = 0; i < set1.sizeOfSet(); i++)
            resultSet.addElement(set1.at(i));
        return resultSet;
    }

    /// return pos
    T at(int i)
    {
        return set[i];
    }

    /// size of Set
    int sizeOfSet()
    {
        return size;
    }

private:
    int static const dim = 50; //
    T set[dim];
    int size;
};

#endif // SET_H
