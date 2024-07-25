#include <PythonQt.h>
#include <QObject>
#include <QVariant>
#include <qaction.h>
#include <qbackingstore.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcolor.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdevicebuffer.h>
#include <qevent.h>
#include <qfont.h>
#include <qfontinfo.h>
#include <qfontmetrics.h>
#include <qgraphicseffect.h>
#include <qgraphicsproxywidget.h>
#include <qhexcursor.h>
#include <qhexmetadata.h>
#include <qhexutils.h>
#include <qhexview.h>
#include <qicon.h>
#include <qiodevice.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmappedfilebuffer.h>
#include <qmargins.h>
#include <qmemorybuffer.h>
#include <qmemoryrefbuffer.h>
#include <qmetaobject.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qrect.h>
#include <qregion.h>
#include <qscreen.h>
#include <qscrollbar.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qtextcursor.h>
#include <qtextformat.h>
#include <qthread.h>
#include <qwidget.h>
#include <qwindow.h>



class PythonQtShell_QDeviceBuffer : public QDeviceBuffer
{
public:
    PythonQtShell_QDeviceBuffer(QObject*  parent = nullptr):QDeviceBuffer(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QDeviceBuffer() override;

uchar  at(qint64  idx) override;
qint64  indexOf(const QByteArray&  ba, qint64  from) override;
void insert(qint64  offset, const QByteArray&  data) override;
qint64  lastIndexOf(const QByteArray&  ba, qint64  from) override;
qint64  length() const override;
bool  read(QIODevice*  device) override;
QByteArray  read(qint64  offset, int  length) override;
void remove(qint64  offset, int  length) override;
void replace(qint64  offset, const QByteArray&  data) override;
void write(QIODevice*  device) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QDeviceBuffer : public QDeviceBuffer
{ public:
inline uchar  py_q_at(qint64  idx) { return QDeviceBuffer::at(idx); }
inline qint64  py_q_indexOf(const QByteArray&  ba, qint64  from) { return QDeviceBuffer::indexOf(ba, from); }
inline void py_q_insert(qint64  offset, const QByteArray&  data) { QDeviceBuffer::insert(offset, data); }
inline qint64  py_q_lastIndexOf(const QByteArray&  ba, qint64  from) { return QDeviceBuffer::lastIndexOf(ba, from); }
inline qint64  py_q_length() const { return QDeviceBuffer::length(); }
inline bool  py_q_read(QIODevice*  device) { return QDeviceBuffer::read(device); }
inline QByteArray  py_q_read(qint64  offset, int  length) { return QDeviceBuffer::read(offset, length); }
inline void py_q_remove(qint64  offset, int  length) { QDeviceBuffer::remove(offset, length); }
inline void py_q_replace(qint64  offset, const QByteArray&  data) { QDeviceBuffer::replace(offset, data); }
inline void py_q_write(QIODevice*  device) { QDeviceBuffer::write(device); }
};

class PythonQtWrapper_QDeviceBuffer : public QObject
{ Q_OBJECT
public:
public slots:
QDeviceBuffer* new_QDeviceBuffer(QObject*  parent = nullptr);
void delete_QDeviceBuffer(QDeviceBuffer* obj) { delete obj; }
   uchar  at(QDeviceBuffer* theWrappedObject, qint64  idx);
   uchar  py_q_at(QDeviceBuffer* theWrappedObject, qint64  idx){  return (((PythonQtPublicPromoter_QDeviceBuffer*)theWrappedObject)->py_q_at(idx));}
   qint64  indexOf(QDeviceBuffer* theWrappedObject, const QByteArray&  ba, qint64  from);
   qint64  py_q_indexOf(QDeviceBuffer* theWrappedObject, const QByteArray&  ba, qint64  from){  return (((PythonQtPublicPromoter_QDeviceBuffer*)theWrappedObject)->py_q_indexOf(ba, from));}
   void insert(QDeviceBuffer* theWrappedObject, qint64  offset, const QByteArray&  data);
   void py_q_insert(QDeviceBuffer* theWrappedObject, qint64  offset, const QByteArray&  data){  (((PythonQtPublicPromoter_QDeviceBuffer*)theWrappedObject)->py_q_insert(offset, data));}
   qint64  lastIndexOf(QDeviceBuffer* theWrappedObject, const QByteArray&  ba, qint64  from);
   qint64  py_q_lastIndexOf(QDeviceBuffer* theWrappedObject, const QByteArray&  ba, qint64  from){  return (((PythonQtPublicPromoter_QDeviceBuffer*)theWrappedObject)->py_q_lastIndexOf(ba, from));}
   qint64  length(QDeviceBuffer* theWrappedObject) const;
   qint64  py_q_length(QDeviceBuffer* theWrappedObject) const{  return (((PythonQtPublicPromoter_QDeviceBuffer*)theWrappedObject)->py_q_length());}
   bool  read(QDeviceBuffer* theWrappedObject, QIODevice*  device);
   bool  py_q_read(QDeviceBuffer* theWrappedObject, QIODevice*  device){  return (((PythonQtPublicPromoter_QDeviceBuffer*)theWrappedObject)->py_q_read(device));}
   QByteArray  read(QDeviceBuffer* theWrappedObject, qint64  offset, int  length);
   QByteArray  py_q_read(QDeviceBuffer* theWrappedObject, qint64  offset, int  length){  return (((PythonQtPublicPromoter_QDeviceBuffer*)theWrappedObject)->py_q_read(offset, length));}
   void remove(QDeviceBuffer* theWrappedObject, qint64  offset, int  length);
   void py_q_remove(QDeviceBuffer* theWrappedObject, qint64  offset, int  length){  (((PythonQtPublicPromoter_QDeviceBuffer*)theWrappedObject)->py_q_remove(offset, length));}
   void replace(QDeviceBuffer* theWrappedObject, qint64  offset, const QByteArray&  data);
   void py_q_replace(QDeviceBuffer* theWrappedObject, qint64  offset, const QByteArray&  data){  (((PythonQtPublicPromoter_QDeviceBuffer*)theWrappedObject)->py_q_replace(offset, data));}
   void write(QDeviceBuffer* theWrappedObject, QIODevice*  device);
   void py_q_write(QDeviceBuffer* theWrappedObject, QIODevice*  device){  (((PythonQtPublicPromoter_QDeviceBuffer*)theWrappedObject)->py_q_write(device));}
};





class PythonQtWrapper_QHexCursor : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Mode )
enum class Mode{
  Overwrite = static_cast<int>(QHexCursor::Mode::Overwrite),   Insert = static_cast<int>(QHexCursor::Mode::Insert)};
public slots:
void delete_QHexCursor(QHexCursor* obj) { delete obj; }
   qint64  address(QHexCursor* theWrappedObject) const;
   qint64  column(QHexCursor* theWrappedObject) const;
   qint64  find(QHexCursor* theWrappedObject, const QVariant&  value, qint64  offset, QHexFindMode  mode = QHexFindMode::Text, unsigned int  options = QHexFindOptions::None, QHexFindDirection  fd = QHexFindDirection::Forward) const;
   bool  hasSelection(QHexCursor* theWrappedObject) const;
   QHexView*  hexView(QHexCursor* theWrappedObject) const;
   bool  isSelected(QHexCursor* theWrappedObject, qint64  line, qint64  column) const;
   qint64  line(QHexCursor* theWrappedObject) const;
   quint64  lineAddress(QHexCursor* theWrappedObject) const;
   QHexCursor::Mode  mode(QHexCursor* theWrappedObject) const;
   void move(QHexCursor* theWrappedObject, qint64  line, qint64  column);
   void move(QHexCursor* theWrappedObject, qint64  offset);
   qint64  offset(QHexCursor* theWrappedObject) const;
   qint64  replace(QHexCursor* theWrappedObject, const QVariant&  oldvalue, const QVariant&  newvalue, qint64  offset, QHexFindMode  mode = QHexFindMode::Text, unsigned int  options = QHexFindOptions::None, QHexFindDirection  fd = QHexFindDirection::Forward) const;
   void select(QHexCursor* theWrappedObject, qint64  line, qint64  column);
   void select(QHexCursor* theWrappedObject, qint64  offset);
   void selectSize(QHexCursor* theWrappedObject, qint64  length);
   QByteArray  selectedBytes(QHexCursor* theWrappedObject) const;
   qint64  selectionEndOffset(QHexCursor* theWrappedObject) const;
   qint64  selectionLength(QHexCursor* theWrappedObject) const;
   qint64  selectionStartOffset(QHexCursor* theWrappedObject) const;
   void setMode(QHexCursor* theWrappedObject, QHexCursor::Mode  m);
};





class PythonQtWrapper_QHexMetadata : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QHexMetadata(QHexMetadata* obj) { delete obj; }
   void clear(QHexMetadata* theWrappedObject);
   QString  getComment(QHexMetadata* theWrappedObject, qint64  line, qint64  column) const;
   void removeBackground(QHexMetadata* theWrappedObject, qint64  line);
   void removeComments(QHexMetadata* theWrappedObject, qint64  line);
   void removeForeground(QHexMetadata* theWrappedObject, qint64  line);
   void removeMetadata(QHexMetadata* theWrappedObject, qint64  line);
   void setBackground(QHexMetadata* theWrappedObject, qint64  begin, qint64  end, const QColor&  bgcolor);
   void setBackgroundSize(QHexMetadata* theWrappedObject, qint64  begin, qint64  length, const QColor&  bgcolor);
   void setComment(QHexMetadata* theWrappedObject, qint64  begin, qint64  end, const QString&  comment);
   void setCommentSize(QHexMetadata* theWrappedObject, qint64  begin, qint64  length, const QString&  comment);
   void setForeground(QHexMetadata* theWrappedObject, qint64  begin, qint64  end, const QColor&  fgcolor);
   void setForegroundSize(QHexMetadata* theWrappedObject, qint64  begin, qint64  length, const QColor&  fgcolor);
   void setMetadata(QHexMetadata* theWrappedObject, qint64  begin, qint64  end, const QColor&  fgcolor, const QColor&  bgcolor, const QString&  comment);
   void setMetadataSize(QHexMetadata* theWrappedObject, qint64  begin, qint64  length, const QColor&  fgcolor, const QColor&  bgcolor, const QString&  comment);
   void unhighlight(QHexMetadata* theWrappedObject, qint64  line);
};





class PythonQtShell_QHexView : public QHexView
{
public:
    PythonQtShell_QHexView(QWidget*  parent = nullptr):QHexView(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QHexView() override;

void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  arg__1) override;
void childEvent(QChildEvent*  event) override;
void closeEvent(QCloseEvent*  event) override;
void contextMenuEvent(QContextMenuEvent*  arg__1) override;
void customEvent(QEvent*  event) override;
int  devType() const override;
void dragEnterEvent(QDragEnterEvent*  arg__1) override;
void dragLeaveEvent(QDragLeaveEvent*  arg__1) override;
void dragMoveEvent(QDragMoveEvent*  arg__1) override;
void dropEvent(QDropEvent*  arg__1) override;
void enterEvent(QEvent*  event) override;
bool  event(QEvent*  e) override;
bool  eventFilter(QObject*  arg__1, QEvent*  arg__2) override;
void focusInEvent(QFocusEvent*  e) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  e) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  event) override;
void initPainter(QPainter*  painter) const override;
void inputMethodEvent(QInputMethodEvent*  arg__1) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const override;
void keyPressEvent(QKeyEvent*  e) override;
void keyReleaseEvent(QKeyEvent*  event) override;
void leaveEvent(QEvent*  event) override;
int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const override;
QSize  minimumSizeHint() const override;
void mouseDoubleClickEvent(QMouseEvent*  arg__1) override;
void mouseMoveEvent(QMouseEvent*  e) override;
void mousePressEvent(QMouseEvent*  e) override;
void mouseReleaseEvent(QMouseEvent*  arg__1) override;
void moveEvent(QMoveEvent*  event) override;
bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result) override;
QPaintEngine*  paintEngine() const override;
void paintEvent(QPaintEvent*  arg__1) override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void resizeEvent(QResizeEvent*  e) override;
void scrollContentsBy(int  dx, int  dy) override;
void setVisible(bool  visible) override;
void setupViewport(QWidget*  viewport) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  e) override;
QSize  sizeHint() const override;
void tabletEvent(QTabletEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;
bool  viewportEvent(QEvent*  arg__1) override;
QSize  viewportSizeHint() const override;
void wheelEvent(QWheelEvent*  e) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QHexView : public QHexView
{ public:
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline void promoted_focusInEvent(QFocusEvent*  e) { this->focusInEvent(e); }
inline void promoted_focusOutEvent(QFocusEvent*  e) { this->focusOutEvent(e); }
inline void promoted_keyPressEvent(QKeyEvent*  e) { this->keyPressEvent(e); }
inline void promoted_mouseMoveEvent(QMouseEvent*  e) { this->mouseMoveEvent(e); }
inline void promoted_mousePressEvent(QMouseEvent*  e) { this->mousePressEvent(e); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { this->paintEvent(arg__1); }
inline void promoted_resizeEvent(QResizeEvent*  e) { this->resizeEvent(e); }
inline void promoted_showEvent(QShowEvent*  e) { this->showEvent(e); }
inline void promoted_wheelEvent(QWheelEvent*  e) { this->wheelEvent(e); }
inline bool  py_q_event(QEvent*  e) { return QHexView::event(e); }
inline void py_q_focusInEvent(QFocusEvent*  e) { QHexView::focusInEvent(e); }
inline void py_q_focusOutEvent(QFocusEvent*  e) { QHexView::focusOutEvent(e); }
inline void py_q_keyPressEvent(QKeyEvent*  e) { QHexView::keyPressEvent(e); }
inline void py_q_mouseMoveEvent(QMouseEvent*  e) { QHexView::mouseMoveEvent(e); }
inline void py_q_mousePressEvent(QMouseEvent*  e) { QHexView::mousePressEvent(e); }
inline void py_q_paintEvent(QPaintEvent*  arg__1) { QHexView::paintEvent(arg__1); }
inline void py_q_resizeEvent(QResizeEvent*  e) { QHexView::resizeEvent(e); }
inline void py_q_showEvent(QShowEvent*  e) { QHexView::showEvent(e); }
inline void py_q_wheelEvent(QWheelEvent*  e) { QHexView::wheelEvent(e); }
};

class PythonQtWrapper_QHexView : public QObject
{ Q_OBJECT
public:
public slots:
QHexView* new_QHexView(QWidget*  parent = nullptr);
void delete_QHexView(QHexView* obj) { delete obj; }
   quint64  address(QHexView* theWrappedObject) const;
   QRectF  addressRect(QHexView* theWrappedObject) const;
   unsigned int  addressWidth(QHexView* theWrappedObject) const;
   QRectF  asciiRect(QHexView* theWrappedObject) const;
   quint64  baseAddress(QHexView* theWrappedObject) const;
   bool  canRedo(QHexView* theWrappedObject) const;
   bool  canUndo(QHexView* theWrappedObject) const;
   void clearMetadata(QHexView* theWrappedObject);
   bool  py_q_event(QHexView* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QHexView*)theWrappedObject)->py_q_event(e));}
   qint64  find(QHexView* theWrappedObject, const QVariant&  value, qint64  offset, QHexFindMode  mode = QHexFindMode::Text, unsigned int  options = QHexFindOptions::None, QHexFindDirection  fd = QHexFindDirection::Forward) const;
   void py_q_focusInEvent(QHexView* theWrappedObject, QFocusEvent*  e){  (((PythonQtPublicPromoter_QHexView*)theWrappedObject)->py_q_focusInEvent(e));}
   void py_q_focusOutEvent(QHexView* theWrappedObject, QFocusEvent*  e){  (((PythonQtPublicPromoter_QHexView*)theWrappedObject)->py_q_focusOutEvent(e));}
   QByteArray  getLine(QHexView* theWrappedObject, qint64  line) const;
   QColor  getReadableColor(QHexView* theWrappedObject, QColor  c) const;
   QRectF  headerRect(QHexView* theWrappedObject) const;
   QHexCursor*  hexCursor(QHexView* theWrappedObject) const;
   const QHexMetadata*  hexMetadata(QHexView* theWrappedObject) const;
   QRectF  hexRect(QHexView* theWrappedObject) const;
   void py_q_keyPressEvent(QHexView* theWrappedObject, QKeyEvent*  e){  (((PythonQtPublicPromoter_QHexView*)theWrappedObject)->py_q_keyPressEvent(e));}
   unsigned int  lineLength(QHexView* theWrappedObject) const;
   quint64  lines(QHexView* theWrappedObject) const;
   void py_q_mouseMoveEvent(QHexView* theWrappedObject, QMouseEvent*  e){  (((PythonQtPublicPromoter_QHexView*)theWrappedObject)->py_q_mouseMoveEvent(e));}
   void py_q_mousePressEvent(QHexView* theWrappedObject, QMouseEvent*  e){  (((PythonQtPublicPromoter_QHexView*)theWrappedObject)->py_q_mousePressEvent(e));}
   quint64  offset(QHexView* theWrappedObject) const;
   void py_q_paintEvent(QHexView* theWrappedObject, QPaintEvent*  arg__1){  (((PythonQtPublicPromoter_QHexView*)theWrappedObject)->py_q_paintEvent(arg__1));}
   void removeBackground(QHexView* theWrappedObject, qint64  line);
   void removeComments(QHexView* theWrappedObject, qint64  line);
   void removeForeground(QHexView* theWrappedObject, qint64  line);
   void removeMetadata(QHexView* theWrappedObject, qint64  line);
   qint64  replace(QHexView* theWrappedObject, const QVariant&  oldvalue, const QVariant&  newvalue, qint64  offset, QHexFindMode  mode = QHexFindMode::Text, unsigned int  options = QHexFindOptions::None, QHexFindDirection  fd = QHexFindDirection::Forward) const;
   void py_q_resizeEvent(QHexView* theWrappedObject, QResizeEvent*  e){  (((PythonQtPublicPromoter_QHexView*)theWrappedObject)->py_q_resizeEvent(e));}
   QByteArray  selectedBytes(QHexView* theWrappedObject) const;
   quint64  selectionEndOffset(QHexView* theWrappedObject) const;
   quint64  selectionStartOffset(QHexView* theWrappedObject) const;
   void setBackground(QHexView* theWrappedObject, qint64  begin, qint64  end, const QColor&  bgcolor);
   void setBackgroundSize(QHexView* theWrappedObject, qint64  begin, qint64  length, const QColor&  bgcolor);
   void setBaseAddress(QHexView* theWrappedObject, quint64  baseaddress);
   void setByteBackground(QHexView* theWrappedObject, unsigned char  b, QColor  c);
   void setByteForeground(QHexView* theWrappedObject, unsigned char  b, QColor  c);
   void setComment(QHexView* theWrappedObject, qint64  begin, qint64  end, const QString&  comment);
   void setCommentSize(QHexView* theWrappedObject, qint64  begin, qint64  length, const QString&  comment);
   void setCursorMode(QHexView* theWrappedObject, QHexCursor::Mode  mode);
   void setData(QHexView* theWrappedObject, const QByteArray&  ba);
   void setForeground(QHexView* theWrappedObject, qint64  begin, qint64  end, const QColor&  fgcolor);
   void setForegroundSize(QHexView* theWrappedObject, qint64  begin, qint64  length, const QColor&  fgcolor);
   void setMetadata(QHexView* theWrappedObject, qint64  begin, qint64  end, const QColor&  fgcolor, const QColor&  bgcolor, const QString&  comment);
   void setMetadataSize(QHexView* theWrappedObject, qint64  begin, qint64  length, const QColor&  fgcolor, const QColor&  bgcolor, const QString&  comment);
   void py_q_showEvent(QHexView* theWrappedObject, QShowEvent*  e){  (((PythonQtPublicPromoter_QHexView*)theWrappedObject)->py_q_showEvent(e));}
   void unhighlight(QHexView* theWrappedObject, qint64  line);
   void py_q_wheelEvent(QHexView* theWrappedObject, QWheelEvent*  e){  (((PythonQtPublicPromoter_QHexView*)theWrappedObject)->py_q_wheelEvent(e));}
};





class PythonQtShell_QMappedFileBuffer : public QMappedFileBuffer
{
public:
    PythonQtShell_QMappedFileBuffer(QObject*  parent = nullptr):QMappedFileBuffer(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QMappedFileBuffer() override;

uchar  at(qint64  idx) override;
qint64  indexOf(const QByteArray&  ba, qint64  from) override;
void insert(qint64  offset, const QByteArray&  data) override;
qint64  lastIndexOf(const QByteArray&  ba, qint64  from) override;
qint64  length() const override;
bool  read(QIODevice*  iodevice) override;
QByteArray  read(qint64  offset, int  length) override;
void remove(qint64  offset, int  length) override;
void replace(qint64  offset, const QByteArray&  data) override;
void write(QIODevice*  iodevice) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QMappedFileBuffer : public QMappedFileBuffer
{ public:
inline bool  py_q_read(QIODevice*  iodevice) { return QMappedFileBuffer::read(iodevice); }
inline QByteArray  py_q_read(qint64  offset, int  length) { return QMappedFileBuffer::read(offset, length); }
inline void py_q_write(QIODevice*  iodevice) { QMappedFileBuffer::write(iodevice); }
};

class PythonQtWrapper_QMappedFileBuffer : public QObject
{ Q_OBJECT
public:
public slots:
QMappedFileBuffer* new_QMappedFileBuffer(QObject*  parent = nullptr);
void delete_QMappedFileBuffer(QMappedFileBuffer* obj) { delete obj; }
   bool  py_q_read(QMappedFileBuffer* theWrappedObject, QIODevice*  iodevice){  return (((PythonQtPublicPromoter_QMappedFileBuffer*)theWrappedObject)->py_q_read(iodevice));}
   QByteArray  py_q_read(QMappedFileBuffer* theWrappedObject, qint64  offset, int  length){  return (((PythonQtPublicPromoter_QMappedFileBuffer*)theWrappedObject)->py_q_read(offset, length));}
   void py_q_write(QMappedFileBuffer* theWrappedObject, QIODevice*  iodevice){  (((PythonQtPublicPromoter_QMappedFileBuffer*)theWrappedObject)->py_q_write(iodevice));}
};





class PythonQtShell_QMemoryBuffer : public QMemoryBuffer
{
public:
    PythonQtShell_QMemoryBuffer(QObject*  parent = nullptr):QMemoryBuffer(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QMemoryBuffer();

uchar  at(qint64  idx) override;
qint64  indexOf(const QByteArray&  ba, qint64  from) override;
void insert(qint64  offset, const QByteArray&  data) override;
qint64  lastIndexOf(const QByteArray&  ba, qint64  from) override;
qint64  length() const override;
bool  read(QIODevice*  device) override;
QByteArray  read(qint64  offset, int  length) override;
void remove(qint64  offset, int  length) override;
void write(QIODevice*  device) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QMemoryBuffer : public QMemoryBuffer
{ public:
inline uchar  py_q_at(qint64  idx) { return QMemoryBuffer::at(idx); }
inline qint64  py_q_indexOf(const QByteArray&  ba, qint64  from) { return QMemoryBuffer::indexOf(ba, from); }
inline void py_q_insert(qint64  offset, const QByteArray&  data) { QMemoryBuffer::insert(offset, data); }
inline qint64  py_q_lastIndexOf(const QByteArray&  ba, qint64  from) { return QMemoryBuffer::lastIndexOf(ba, from); }
inline qint64  py_q_length() const { return QMemoryBuffer::length(); }
inline bool  py_q_read(QIODevice*  device) { return QMemoryBuffer::read(device); }
inline QByteArray  py_q_read(qint64  offset, int  length) { return QMemoryBuffer::read(offset, length); }
inline void py_q_remove(qint64  offset, int  length) { QMemoryBuffer::remove(offset, length); }
inline void py_q_write(QIODevice*  device) { QMemoryBuffer::write(device); }
};

class PythonQtWrapper_QMemoryBuffer : public QObject
{ Q_OBJECT
public:
public slots:
QMemoryBuffer* new_QMemoryBuffer(QObject*  parent = nullptr);
void delete_QMemoryBuffer(QMemoryBuffer* obj) { delete obj; }
   uchar  at(QMemoryBuffer* theWrappedObject, qint64  idx);
   uchar  py_q_at(QMemoryBuffer* theWrappedObject, qint64  idx){  return (((PythonQtPublicPromoter_QMemoryBuffer*)theWrappedObject)->py_q_at(idx));}
   qint64  indexOf(QMemoryBuffer* theWrappedObject, const QByteArray&  ba, qint64  from);
   qint64  py_q_indexOf(QMemoryBuffer* theWrappedObject, const QByteArray&  ba, qint64  from){  return (((PythonQtPublicPromoter_QMemoryBuffer*)theWrappedObject)->py_q_indexOf(ba, from));}
   void insert(QMemoryBuffer* theWrappedObject, qint64  offset, const QByteArray&  data);
   void py_q_insert(QMemoryBuffer* theWrappedObject, qint64  offset, const QByteArray&  data){  (((PythonQtPublicPromoter_QMemoryBuffer*)theWrappedObject)->py_q_insert(offset, data));}
   qint64  lastIndexOf(QMemoryBuffer* theWrappedObject, const QByteArray&  ba, qint64  from);
   qint64  py_q_lastIndexOf(QMemoryBuffer* theWrappedObject, const QByteArray&  ba, qint64  from){  return (((PythonQtPublicPromoter_QMemoryBuffer*)theWrappedObject)->py_q_lastIndexOf(ba, from));}
   qint64  length(QMemoryBuffer* theWrappedObject) const;
   qint64  py_q_length(QMemoryBuffer* theWrappedObject) const{  return (((PythonQtPublicPromoter_QMemoryBuffer*)theWrappedObject)->py_q_length());}
   bool  read(QMemoryBuffer* theWrappedObject, QIODevice*  device);
   bool  py_q_read(QMemoryBuffer* theWrappedObject, QIODevice*  device){  return (((PythonQtPublicPromoter_QMemoryBuffer*)theWrappedObject)->py_q_read(device));}
   QByteArray  read(QMemoryBuffer* theWrappedObject, qint64  offset, int  length);
   QByteArray  py_q_read(QMemoryBuffer* theWrappedObject, qint64  offset, int  length){  return (((PythonQtPublicPromoter_QMemoryBuffer*)theWrappedObject)->py_q_read(offset, length));}
   void remove(QMemoryBuffer* theWrappedObject, qint64  offset, int  length);
   void py_q_remove(QMemoryBuffer* theWrappedObject, qint64  offset, int  length){  (((PythonQtPublicPromoter_QMemoryBuffer*)theWrappedObject)->py_q_remove(offset, length));}
   void write(QMemoryBuffer* theWrappedObject, QIODevice*  device);
   void py_q_write(QMemoryBuffer* theWrappedObject, QIODevice*  device){  (((PythonQtPublicPromoter_QMemoryBuffer*)theWrappedObject)->py_q_write(device));}
};





class PythonQtShell_QMemoryRefBuffer : public QMemoryRefBuffer
{
public:
    PythonQtShell_QMemoryRefBuffer(QObject*  parent = nullptr):QMemoryRefBuffer(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QMemoryRefBuffer() override;

uchar  at(qint64  idx) override;
qint64  indexOf(const QByteArray&  ba, qint64  from) override;
void insert(qint64  offset, const QByteArray&  data) override;
qint64  lastIndexOf(const QByteArray&  ba, qint64  from) override;
qint64  length() const override;
bool  read(QIODevice*  device) override;
void remove(qint64  offset, int  length) override;
void replace(qint64  offset, const QByteArray&  data) override;
void write(QIODevice*  device) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QMemoryRefBuffer : public QMemoryRefBuffer
{ public:
inline bool  py_q_read(QIODevice*  device) { return QMemoryRefBuffer::read(device); }
inline void py_q_write(QIODevice*  device) { QMemoryRefBuffer::write(device); }
};

class PythonQtWrapper_QMemoryRefBuffer : public QObject
{ Q_OBJECT
public:
public slots:
QMemoryRefBuffer* new_QMemoryRefBuffer(QObject*  parent = nullptr);
void delete_QMemoryRefBuffer(QMemoryRefBuffer* obj) { delete obj; }
   bool  py_q_read(QMemoryRefBuffer* theWrappedObject, QIODevice*  device){  return (((PythonQtPublicPromoter_QMemoryRefBuffer*)theWrappedObject)->py_q_read(device));}
   void py_q_write(QMemoryRefBuffer* theWrappedObject, QIODevice*  device){  (((PythonQtPublicPromoter_QMemoryRefBuffer*)theWrappedObject)->py_q_write(device));}
};





class PythonQtWrapper_QtHexView : public QObject
{ Q_OBJECT
public:
Q_ENUMS(QHexArea QHexFindDirection QHexFindMode )
enum class QHexArea{
  Header = static_cast<int>(::QHexArea::Header),   Address = static_cast<int>(::QHexArea::Address),   Hex = static_cast<int>(::QHexArea::Hex),   Ascii = static_cast<int>(::QHexArea::Ascii),   Extra = static_cast<int>(::QHexArea::Extra)};
enum class QHexFindDirection{
  All = static_cast<int>(::QHexFindDirection::All),   Forward = static_cast<int>(::QHexFindDirection::Forward),   Backward = static_cast<int>(::QHexFindDirection::Backward)};
enum class QHexFindMode{
  Text = static_cast<int>(::QHexFindMode::Text),   Hex = static_cast<int>(::QHexFindMode::Hex),   Int = static_cast<int>(::QHexFindMode::Int),   Float = static_cast<int>(::QHexFindMode::Float)};
public slots:
};


