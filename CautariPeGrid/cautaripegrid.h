#ifndef CAUTARIPEGRID_H
#define CAUTARIPEGRID_H

#include <QtWidgets/QMainWindow>
#include <QtWidgets/QGraphicsItem>
#include <QtWidgets/QGraphicsScene>
#include <QtGui>

#include "ui_cautaripegrid.h"

class CautariPeGrid : public QMainWindow
{
	Q_OBJECT

public:
	CautariPeGrid(QWidget *parent = 0);
	~CautariPeGrid();

private:
	Ui::CautariPeGridClass ui;

	QGraphicsItem *item;
	QGraphicsScene *scene;
};

#endif // CAUTARIPEGRID_H
