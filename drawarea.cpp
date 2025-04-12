#include "drawarea.h"

DrawArea::DrawArea(QWidget *parent)
    : QWidget{parent}
{
    setAttribute(Qt::WA_StaticContents);
}
