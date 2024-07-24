#ifndef _PYQHEXVIEWWRAPPER_H
#define _PYQHEXVIEWWRAPPER_H

#include "PythonQt.h"
#include "PythonQtCppWrapperFactory.h"
#include <QObject>
#include "qhexview.h"


// add a decorator that allows to access the QHexView from PythonQt
class QHexViewWrapper : public QObject {
    Q_OBJECT

public Q_SLOTS:
    // add a constructor
    QHexView* new_QHexView(QWidget *parent = nullptr) { return new QHexView(parent); }

    // add a destructor
    void delete_QHexView(QHexView* theWrappedObject) { delete theWrappedObject; }

    QRectF headerRect(QHexView* theWrappedObject) const { return theWrappedObject->headerRect(); };
    QRectF addressRect(QHexView* theWrappedObject) const { return theWrappedObject->addressRect(); };
    QRectF hexRect(QHexView* theWrappedObject) const { return theWrappedObject->hexRect(); };
    QRectF asciiRect(QHexView* theWrappedObject) const { return theWrappedObject->asciiRect(); };
    QHexDocument* hexDocument(QHexView* theWrappedObject) const { return theWrappedObject->hexDocument(); };
    QHexCursor* hexCursor(QHexView* theWrappedObject) const { return theWrappedObject->hexCursor(); };
    const QHexMetadata* hexMetadata(QHexView* theWrappedObject) const { return theWrappedObject->hexMetadata(); };
    QHexOptions options(QHexView* theWrappedObject) const { return theWrappedObject->options(); };
    QColor getReadableColor(QHexView* theWrappedObject, QColor c) const { return theWrappedObject->getReadableColor(c); };
    QByteArray selectedBytes(QHexView* theWrappedObject) const { return theWrappedObject->selectedBytes(); };
    QByteArray getLine(QHexView* theWrappedObject, qint64 line) const { return theWrappedObject->getLine(line); };
    unsigned int addressWidth(QHexView* theWrappedObject) const { return theWrappedObject->addressWidth(); };
    unsigned int lineLength(QHexView* theWrappedObject) const { return theWrappedObject->lineLength(); };
    bool canUndo(QHexView* theWrappedObject) const { return theWrappedObject->canUndo(); };
    bool canRedo(QHexView* theWrappedObject) const { return theWrappedObject->canRedo(); };
    quint64 offset(QHexView* theWrappedObject) const { return theWrappedObject->offset(); };
    quint64 address(QHexView* theWrappedObject) const { return theWrappedObject->address(); };
    QHexPosition position(QHexView* theWrappedObject) const { return theWrappedObject->position(); };
    QHexPosition selectionStart(QHexView* theWrappedObject) const { return theWrappedObject->selectionStart(); };
    QHexPosition selectionEnd(QHexView* theWrappedObject) const { return theWrappedObject->selectionEnd(); };
    quint64 selectionStartOffset(QHexView* theWrappedObject) const { return theWrappedObject->selectionStartOffset(); };
    quint64 selectionEndOffset(QHexView* theWrappedObject) const { return theWrappedObject->selectionEndOffset(); };
    quint64 baseAddress(QHexView* theWrappedObject) const { return theWrappedObject->baseAddress(); };
    quint64 lines(QHexView* theWrappedObject) const { return theWrappedObject->lines(); };
    qint64 replace(QHexView* theWrappedObject, const QVariant& oldvalue, const QVariant& newvalue, qint64 offset, QHexFindMode mode = QHexFindMode::Text, unsigned int options = QHexFindOptions::None, QHexFindDirection fd = QHexFindDirection::Forward) const { return theWrappedObject->replace(oldvalue, newvalue, offset, mode, options, fd); };
    qint64 find(QHexView* theWrappedObject, const QVariant& value, qint64 offset, QHexFindMode mode = QHexFindMode::Text, unsigned int options = QHexFindOptions::None, QHexFindDirection fd = QHexFindDirection::Forward) const { return theWrappedObject->find(value, offset, mode, options, fd); };
    void setOptions(QHexView* theWrappedObject, const QHexOptions& options) { return theWrappedObject->setOptions(options); };
    void setBaseAddress(QHexView* theWrappedObject, quint64 baseaddress) { return theWrappedObject->setBaseAddress(baseaddress); };
    void setDelegate(QHexView* theWrappedObject, QHexDelegate* rd) { return theWrappedObject->setDelegate(rd); };
    void setDocument(QHexView* theWrappedObject, QHexDocument* doc) { return theWrappedObject->setDocument(doc); };
    void setData(QHexView* theWrappedObject, const QByteArray& ba) { return theWrappedObject->setData(ba); };
    void setData(QHexView* theWrappedObject, QHexBuffer* buffer) { return theWrappedObject->setData(buffer); };
    void setCursorMode(QHexView* theWrappedObject, QHexCursor::Mode mode) { return theWrappedObject->setCursorMode(mode); };
    void setByteColor(QHexView* theWrappedObject, quint8 b, QHexColor c) { return theWrappedObject->setByteColor(b, c); };
    void setByteForeground(QHexView* theWrappedObject, quint8 b, QColor c) { return theWrappedObject->setByteForeground(b, c); };
    void setByteBackground(QHexView* theWrappedObject, quint8 b, QColor c) { return theWrappedObject->setByteBackground(b, c); };
    void setMetadata(QHexView* theWrappedObject, qint64 begin, qint64 end, const QColor &fgcolor, const QColor &bgcolor, const QString &comment) { return theWrappedObject->setMetadata(begin, end, fgcolor, bgcolor, comment); };
    void setForeground(QHexView* theWrappedObject, qint64 begin, qint64 end, const QColor &fgcolor) { return theWrappedObject->setForeground(begin, end, fgcolor); };
    void setBackground(QHexView* theWrappedObject, qint64 begin, qint64 end, const QColor &bgcolor) { return theWrappedObject->setBackground(begin, end, bgcolor); };
    void setComment(QHexView* theWrappedObject, qint64 begin, qint64 end, const QString& comment) { return theWrappedObject->setComment(begin, end, comment); };
    void setMetadataSize(QHexView* theWrappedObject, qint64 begin, qint64 length, const QColor &fgcolor, const QColor &bgcolor, const QString &comment) { return theWrappedObject->setMetadataSize(begin, length, fgcolor, bgcolor, comment); };
    void setForegroundSize(QHexView* theWrappedObject, qint64 begin, qint64 length, const QColor &fgcolor) { return theWrappedObject->setForegroundSize(begin, length, fgcolor); };
    void setBackgroundSize(QHexView* theWrappedObject, qint64 begin, qint64 length, const QColor &bgcolor) { return theWrappedObject->setBackgroundSize(begin, length, bgcolor); };
    void setCommentSize(QHexView* theWrappedObject, qint64 begin, qint64 length, const QString& comment) { return theWrappedObject->setCommentSize(begin, length, comment); };
    void removeMetadata(QHexView* theWrappedObject, qint64 line) { return theWrappedObject->removeMetadata(line); };
    void removeBackground(QHexView* theWrappedObject, qint64 line) { return theWrappedObject->removeBackground(line); };
    void removeForeground(QHexView* theWrappedObject, qint64 line) { return theWrappedObject->removeForeground(line); };
    void removeComments(QHexView* theWrappedObject, qint64 line) { return theWrappedObject->removeComments(line); };
    void unhighlight(QHexView* theWrappedObject, qint64 line) { return theWrappedObject->unhighlight(line); };
    void clearMetadata(QHexView* theWrappedObject) { return theWrappedObject->clearMetadata(); };
};

#endif
