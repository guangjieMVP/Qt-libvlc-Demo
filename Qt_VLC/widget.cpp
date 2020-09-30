#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    this->setWindowTitle("Qt-vlc");

    //创建一个VLC实例
    vlc_ins = libvlc_new(0, NULL);

    vlc_media = libvlc_media_new_path(vlc_ins, "G:\\MultiMediaSouce\\仙女号.mp4");

    //创建一个VLC播放器以及设置它要播放的多媒体资源
    vlc_player = libvlc_media_player_new_from_media(vlc_media);

    libvlc_media_release(vlc_media);

    libvlc_media_player_play(vlc_player);

    libvlc_media_player_set_hwnd(vlc_player, (void *)ui->label->winId());    //设置显示的窗口
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{
    libvlc_media_player_pause(vlc_player);
}
