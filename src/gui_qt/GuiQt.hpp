#include <QWidget>

class GuiQt : public QWidget
{
  Q_OBJECT // Very Important, this is all the magic that is needed
public:
  explicit GuiQt(QWidget *parent = nullptr);

  // No need for a destructor (~GuiQt) here, the parent system makes sure that all the elements that
  // are parented to this is cleaned up

private slots:
  void writeToDebug();
};
