#pragma once
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QtWidgets>
#include <QtWidgets/QWidget>

class CustomView : public QGraphicsView
{
public:
	CustomView(QWidget* parent = 0);
	~CustomView();
protected:
	virtual void wheelEvent(QWheelEvent *event);
};

