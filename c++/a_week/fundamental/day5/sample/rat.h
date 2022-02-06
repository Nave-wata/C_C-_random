#ifndef _RAT_H_
#define _RAT_H_

class Rat {
    public:
        Rat();
        ~Rat();
        static void showNum();
        void squeak();

    private:
        int m_id;
        static int m_count;
};

#endif // _RAT_H_
