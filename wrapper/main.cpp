
#include <QApplication>

#include "PythonQt.h"
#include "gui/PythonQtScriptingConsole.h"


void PythonQt_init_QtHexView(PyObject*);


int main( int argc, char **argv )
{
  QApplication qapp(argc, argv);

  PythonQt::init(PythonQt::IgnoreSiteModule | PythonQt::RedirectStdOut);

  PythonQtObjectPtr  mainContext = PythonQt::self()->getMainModule();
  PythonQtScriptingConsole console(NULL, mainContext);

  // register the new object as a known classname and add it's wrapper object
  PythonQt_init_QtHexView(nullptr);

  mainContext.evalFile(":example.py");

  console.appendCommandPrompt();
  console.show();

  return qapp.exec();
}

