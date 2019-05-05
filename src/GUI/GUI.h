#ifndef GUI_H
#define GUI_H

#include <QMainWindow>
#include <QAction>
#include <QDockWidget>
#include <QTextBrowser>
#include <QMessageBox>
#include <QMenuBar>
#include <QTabWidget>
#include <QStringList>
#include <QStatusBar>
#include <QPlainTextEdit>
#include <QApplication>
#include <QFile>
#include <iostream>
#include <vector>
#include "plotter.h"
#include "Widget.h"
#include "../Parser.h"
#include "../RunEngine.h"
#include "Widget.h"

using namespace std;

class GUI : public QMainWindow
{
    Q_OBJECT

public:
    GUI(int argc, char* argv[]);
    ~GUI();

    void createActions();
		Parser *Input;

		QPlainTextEdit* Editor;

        QMenu *InputFile;
        QAction *InputWidget;

        QMenu *Results;
        QAction *ResultsAction;

        QMenu *Graphics;
        QAction *GraphicsAction;

        QMenu *Help;
        QAction *About_ElSA;
        QMessageBox *ElSA_Message;
        QAction *About_Qt;

        QMenu *Exit;
        QAction *ExitAction;

        QTabWidget* tabwidget;

        QDockWidget* DockEditor;

        QTextBrowser* ResultsText;

        QWidget* childWildget;

        Widget* WInput;

        RunEngine SPCA;


    private:

    private slots:
        void openInputWidget();
        void ViewResults();
        void GraphResult();
        void RunEng();
        void closethistab(int tindex);
        void about_elsa();
};

#endif // GUI_H
