
#include "PythonQt.h"
#include "gui/PythonQtScriptingConsole.h"
#include "QHexViewWrapper.h"

#include <QApplication>

int main( int argc, char **argv )
{
  QApplication qapp(argc, argv);

  PythonQt::init(PythonQt::IgnoreSiteModule | PythonQt::RedirectStdOut);

  PythonQtObjectPtr  mainContext = PythonQt::self()->getMainModule();
  PythonQtScriptingConsole console(NULL, mainContext);

  // register the new object as a known classname and add it's wrapper object
  PythonQt::self()->registerCPPClass("QHexView", "","QHexView", PythonQtCreateObject<QHexViewWrapper>);

  mainContext.evalFile(":example.py");

  console.appendCommandPrompt();
  console.show();

  return qapp.exec();
}

