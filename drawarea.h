#ifndef DRAWAREA_H
#define DRAWAREA_H

#include <QWidget>
#include <QImage>
#include <QPainter>
#include <QPaintEvent>

class DrawArea : public QWidget
{
    Q_OBJECT

public:
    DrawArea(QWidget *parent = nullptr);

    bool openImage(const QString &fileName);
    bool saveImage(const QString &fileName, const char *fileFormat);

protected:
    void paintEvent(QPaintEvent *event) override;
    void resizeEvent(QResizeEvent *event) override;

private:
    QImage image;

    bool modified;

    void resizeImage(QImage *image, const QSize &newSize);
};

#endif // DRAWAREA_H
