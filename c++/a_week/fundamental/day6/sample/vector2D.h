#ifndef _VERCTOR2D_H_
#define _VERCTOR2D_H_

class Vector2D {
    protected:
        int m_x;
        int m_y;

    public:
        Vector2D();
        void setValue(int, int);
        int getX();
        int getY();

    protected:
        void init();
};

#endif // _VERCTOR2D_H_
