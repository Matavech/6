#ifndef RECT_H
#define RECT_H


class QPainter;
class Rect

{
public:
    Rect();
    Rect(int x1 = 0, int y1 = 0, int x2 = 0, int y2 = 0);

    virtual void paint(QPainter *painter);
    bool hit(int x, int y);

    int getMin_x() const;
    void setMin_x(int newMin_x);

    int getMin_y() const;
    void setMin_y(int newMin_y);

    int getMax_x() const;
    void setMax_x(int newMax_x);

    int getMax_y() const;
    void setMax_y(int newMax_y);

protected:
    int min_x, min_y, max_x, max_y;
};

#endif // RECT_H
