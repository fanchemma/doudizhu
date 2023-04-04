#ifndef CARDPANEL_H
#define CARDPANEL_H

#include <QWidget>
#include "card.h"
#include "player.h"

class CardPanel : public QWidget
{
    Q_OBJECT
public:
    explicit CardPanel(QWidget *parent = nullptr);
    //  获得图片
    void setImage(const QPixmap &front, const QPixmap &back);
    QPixmap getImage();
    //显示卡牌那一面
    void setFrontSide(bool flag);
    bool isFrontSide();
    //记录窗口是否被选中
    void setSeclected(bool flag);
    bool isSelected();
    //卡牌花色和点数
    void setCard(const Card& card);
    Card getCard();
    //卡牌所有者
    void setOwner(Player* player);
    Player* getOwner();

    void clicked();

protected:
    //正反面卡片图片
    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent* event);

signals:
    void cardSelected(Qt::MouseButton button);

private:
    QPixmap m_front;
    QPixmap m_back;
    bool m_isfront = true;
    bool m_isSelect = false;
    Card m_card;
    Player* m_owner = nullptr;
};

#endif // CARDPANEL_H
