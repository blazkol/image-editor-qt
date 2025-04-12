#ifndef DRAWAREA_H
#define DRAWAREA_H

#include <QWidget>
#include <QImage>

class DrawArea : public QWidget
{
    Q_OBJECT
public:
    DrawArea(QWidget *parent = nullptr);
private:
    QImage image;
};

#endif // DRAWAREA_H
