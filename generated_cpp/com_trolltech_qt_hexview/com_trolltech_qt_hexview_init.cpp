#include <PythonQt.h>
#include <PythonQtConversion.h>
#include "com_trolltech_qt_hexview0.h"



void PythonQt_init_QtHexView(PyObject* module) {
PythonQt::priv()->registerClass(&QDeviceBuffer::staticMetaObject, "QtHexView", PythonQtCreateObject<PythonQtWrapper_QDeviceBuffer>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QDeviceBuffer>, module, 0);
PythonQt::priv()->registerClass(&QHexCursor::staticMetaObject, "QtHexView", PythonQtCreateObject<PythonQtWrapper_QHexCursor>, nullptr, module, 0);
PythonQt::priv()->registerClass(&QHexMetadata::staticMetaObject, "QtHexView", PythonQtCreateObject<PythonQtWrapper_QHexMetadata>, nullptr, module, 0);
PythonQt::priv()->registerClass(&QHexView::staticMetaObject, "QtHexView", PythonQtCreateObject<PythonQtWrapper_QHexView>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QHexView>, module, 0);
PythonQt::priv()->registerClass(&QMappedFileBuffer::staticMetaObject, "QtHexView", PythonQtCreateObject<PythonQtWrapper_QMappedFileBuffer>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMappedFileBuffer>, module, 0);
PythonQt::priv()->registerClass(&QMemoryBuffer::staticMetaObject, "QtHexView", PythonQtCreateObject<PythonQtWrapper_QMemoryBuffer>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMemoryBuffer>, module, 0);
PythonQt::priv()->registerClass(&QMemoryRefBuffer::staticMetaObject, "QtHexView", PythonQtCreateObject<PythonQtWrapper_QMemoryRefBuffer>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMemoryRefBuffer>, module, 0);
PythonQt::priv()->registerGlobalNamespace("QtHexView", "QtHexView", PythonQtCreateObject<PythonQtWrapper_QtHexView>, PythonQtWrapper_QtHexView::staticMetaObject, module); 


}
