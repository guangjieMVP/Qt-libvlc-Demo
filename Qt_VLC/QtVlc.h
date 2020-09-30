#ifndef QTVLC_H
#define QTVLC_H

#include <QWidget>

class QtVlc : public QWidget
{
    Q_OBJECT
public:
    explicit QtVlc(QWidget *parent = nullptr);

signals:

public slots:
    libvlc_instance_t *     vlc_ins    = NULL;
    libvlc_media_player_t * vlc_player = NULL;
    libvlc_media_t *        vlc_media  = NULL;
};

#endif // QTVLC_H
