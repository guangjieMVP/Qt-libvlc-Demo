#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

extern "C"
{
    #include "vlc.h"
}

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
public:
    libvlc_instance_t *     vlc_ins    = NULL;
    libvlc_media_player_t * vlc_player = NULL;
    libvlc_media_t *        vlc_media  = NULL;
private slots:
    void on_pushButton_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
