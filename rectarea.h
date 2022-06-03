#ifndef RECTAREA_H
#define RECTAREA_H
#include "rect.h"

class QPainter;
class RectArea : public Rect
{
public:
    RectArea();
    RectArea(int x1 = 0, int y1 = 0, int x2 = 0, int y2 = 0, int rect_count = 0);
    void paint(QPainter *painter);

    int getRectAmount() const;

private:
    int rectAmount;
};

#endif // RECTAREA_H
