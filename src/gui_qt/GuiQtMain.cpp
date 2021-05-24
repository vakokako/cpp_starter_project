#include "GuiQt.hpp"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QWidget dialog;
    dialog.show();

    auto v = std::vector{
        1,
        2,
        3
    };

    return QApplication::exec();// this runs the main event loop and sees to it that cleanup is done
}
