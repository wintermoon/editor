#ifndef _TextEdit_h
#define _TextEdit_h

#include <QTextEdit>



class TextEdit : public QTextEdit
{
    public:
        explicit TextEdit(QWidget *parent = 0);
        
        ~TextEdit();

    private:
        Q_OBJECT
};

#endif
