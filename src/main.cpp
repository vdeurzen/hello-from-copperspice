#include <QApplication>
#include <QMessageBox>

int main(int argc, char** argv)
{
  // All CopperSpice applications must create a QApplication object.
  QApplication app(argc, argv);

  auto dialog = QMessageBox();
  dialog.setText("Hello from CopperSpice");

  // Show our dialog and exit returning the result.
  return dialog.exec();
}
