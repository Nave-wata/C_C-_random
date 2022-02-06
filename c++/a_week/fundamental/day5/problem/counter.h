#ifndef _COUNTER_H_
#define _COUNTER_H_

class Counter {
    private:
        int m_count;

    public:
        Counter();
        void reset();
        void count();
        int getCount();
};

#endif // _COUNTER_H_
