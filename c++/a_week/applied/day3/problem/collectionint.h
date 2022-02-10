#ifndef _COLLECTIONINT_H_
#define _COLLECTIONINT_H_

#include <iostream>
#include <string>

using namespace std;

template <typename Type> class CollectionInt {
    private:
        Type* m_pArray;
        Type m_length;

    public:
        CollectionInt(Type*, Type);
        ~CollectionInt();
        Type getMax();
        Type getMin();
        void showArray();
};

template <typename Type>
CollectionInt<Type>::CollectionInt(Type* array, Type length) {
    m_pArray = new Type[length];
    m_length = length;
    for (int i = 0; i < (int) m_length; i++) {
        m_pArray[i] = array[i];
    }
}

template <typename Type>
CollectionInt<Type>::~CollectionInt() {
    delete [] m_pArray;
}

template <typename Type>
Type CollectionInt<Type>::getMax() {
    Type max = m_pArray[0];
    for (int i = 0; i < (int) m_length; i++) {
        if (max < m_pArray[i]) {
            max = m_pArray[i];
        }
    }
    return max;
}

template <typename Type>
Type CollectionInt<Type>::getMin() {
    Type min = m_pArray[0];
    for (int i = 0; i < (int) m_length; i++) {
        if (m_pArray[i] < min) {
            min = m_pArray[i];
        }
    }
    return min;
}

template <typename Type>
void CollectionInt<Type>::showArray() {
    for (int i = 0; i < (int) m_length; i++) {
        cout << m_pArray[i] << ", ";
    }
    cout << endl;
}

#endif // _COLLECTIONINT_
