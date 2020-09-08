#ifndef RGB_SERIALQT_H
#define RGB_SERIALQT_H

#include <QWidget>
#include <QSerialPort>

namespace Ui {
class RGB_SerialQt;
}

class RGB_SerialQt : public QWidget
{
    Q_OBJECT

public:
    explicit RGB_SerialQt(QWidget *parent = nullptr);
    ~RGB_SerialQt();

    void rgbupdate2Arduino(QString command);
private slots:
    void on_red_slider_valueChanged(int value);

    void on_green_slider_valueChanged(int value);

    void on_blue_slider_valueChanged(int value);

private:
    Ui::RGB_SerialQt *ui;
    QSerialPort *arduino;
    static const quint16 arduino_uno_vendor_id = 9025;
    static const quint16 arduino_uno_product_id = 67;
    QString arduino_port_name;
    bool arduino_is_available;
};

#endif // RGB_SERIALQT_H
