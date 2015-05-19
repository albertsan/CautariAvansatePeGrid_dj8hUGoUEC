#include "cautaripegrid.h"

CautariPeGrid::CautariPeGrid(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	QImage image("D:\Page1");
	item = new QGraphicsPixmapItem(QPixmap::fromImage(image));
	scene = new QGraphicsScene(this);
	ui.graphicsView->setScene(scene);
	scene->addItem(item);
}

CautariPeGrid::~CautariPeGrid()
{

}
