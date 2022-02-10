#ifndef _COLLECTIONINT_H_
#define _COLLECTIONINT_H_

class CollectionInt {
    private:
        int* m_pArray;
        int m_length;

    public:
        CollectionInt(int*, int);
        ~CollectionInt();
        int getMax();
        int getMin();
        void showArray();
};

#endif // _COLLECTIONINT_
