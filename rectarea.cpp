#include "rectarea.h"
#include <QPainter>

RectArea::RectArea()
    :Rect(0, 0, 0, 0)
{

}

RectArea::RectArea(int x1, int y1, int x2, int y2, int rectAmount)
    :Rect(x1, y1, x2, y2)
{
    (*this).rectAmount = rectAmount;
}

void RectArea::paint(QPainter *painter)
{
    if (rectAmount >1) {
    if(rectAmount == 2){
        QBrush brush(QColor(255,0,0));
        (*painter).setBrush(brush);
        (*painter).drawRect(QRect(min_x, min_y, (max_x - min_x), (max_y - min_y)));
    }
    else if(rectAmount == 3){
        QBrush brush(QColor(255,255,0));
        (*painter).setBrush(brush);
        (*painter).drawRect(QRect(min_x, min_y, (max_x - min_x), (max_y - min_y)));
    }
    else if(rectAmount == 4){
        QBrush brush(QColor(0,255,0));
        (*painter).setBrush(brush);
        (*painter).drawRect(QRect(min_x, min_y, (max_x - min_x), (max_y - min_y)));
    }
    else if(rectAmount == 5){
        QBrush brush(QColor(0,0,255));
        (*painter).setBrush(brush);
        (*painter).drawRect(QRect(min_x, min_y, (max_x - min_x), (max_y - min_y)));
    }
    else {
        QBrush brush(QColor(0,0,0));
        (*painter).setBrush(brush);
        (*painter).drawRect(QRect(min_x, min_y, (max_x - min_x), (max_y - min_y)));
    }
    }
}

int RectArea::getRectAmount() const
{
    return rectAmount;
}
