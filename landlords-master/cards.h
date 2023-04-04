#ifndef CARDS_H
#define CARDS_H
#include "card.h"

#include <QSet>

class Cards
{
public:
    enum SortType{Asc, Desc, NoSort};
    Cards();
    explicit Cards(const Card& card);
//添加卡牌
    void add(const Card& card);
    void add(const Cards& cards);
    void add(const QVector<Cards>& cards);


    Cards& operator <<(const Card& card);
    Cards& operator <<(const Cards& cards);
//删除卡牌
    void remove(const Card& card);
    void remove(const Cards& cards);
    void remove(const QVector<Cards>& cards);
//卡牌的数量
    int cardCount();
    bool isEmpty();
    bool isEmpty() const;
    //清空卡牌
    void clear();
//最大点数
    Card::CardPoint maxPoint();
    //最小点数
    Card::CardPoint minPoint();
    //指定点数的牌的数量
    int pointCount(Card::CardPoint point);
    //某张牌是否在集合中
    bool contains(const Card& card);
    bool contains(const Cards& cards);
//随机取出一张卡牌
    Card takeRandomCard();

    CardList toCardList(SortType type = Desc);

    void printAllCardInfo();

private:
    QSet<Card> m_cards;
};

#endif // CARDS_H
