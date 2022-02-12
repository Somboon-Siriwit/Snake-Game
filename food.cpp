#include "food.h"

#include <QBrush>


food::food(QGraphicsItem *parent,QString name):QGraphicsPixmapItem(parent)
{
    if(name == "APPLE"){
        setPixmap(QPixmap("C:/Qt/Snake_game/food.png").scaled(40,40));
        score = 1;
    }
    else{
        setPixmap(QPixmap("C:/Qt/Snake_game/food2.png").scaled(40,40,Qt::KeepAspectRatio));
        score = 2;
    }
}
