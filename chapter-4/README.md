# Chapter-4 设计专业的 C++ 程序

## 4-1

在 C++ 中做自己的设计时，最基本的两条设计原则是什么？

**answer**:

抽象和重用。

## 4-2

假设你有如下的 Card 类。 该类只支持一副牌中的普通牌，不需要支持所谓的大小王。

```c++
class Card
{
    public:
        enum class Number { Ace, Two, Three, Four, Five, Six, Seven, Eight,
            Nine, Ten, Jack, Queen, King };
        enum class Figure { Diamond, Heart, Spade, Club };
        Card() {};
        Card(Number number, Figure figure)
            : m_number { number }, m_figure { figure } {}
    private:
        Number m_number { Number::Ace };
        Figure m_figure { Figure::Diamond };
};
```

如何看待以下使用 Card 类表示一副纸牌的做法？你能想到那些改进之处？

```c++
int main()
{
    Card deck[52];
    // ...
}
```

**answer**:

上述设计导致每个程序都可以修改牌组，应该只提供需要的方法，而把具体的数据结构对用户隐藏起来。

```c++
import <vector>;

class Deck
{
public:
    Deck() { /* Initialize a valid deck of cards... */ }
        
    // Retrieves the card with given index.
    // Throws std::out_of_range if index is an invalid index.
    const Card& getCard(size_t index) const { /* Validate index and return the card with given index... */ }

    // Shuffles the deck of cards.
    void shuffle() { /* Shuffle the deck... */ }

    // More methods ...

private:
    std::vector<Card> m_deck;
};
```

## 4-3

假设你与朋友一起想出了一个为移动设备制作 3D 游戏的好主意。你有一部 Android 设备，而你的朋友有一部 Apple iPhone，当然你希望游戏能在两种设备上都玩。高层次地解释你将如何处理这两个不同的移动平台，以及如何准备开始游戏开发。

**answer**:

抽象出逻辑层和物理层，逻辑层与具体平台无关，而物理层实现与具体平台有关，但是可能的话先了解一下跨平台处理方案，将物理层对于具体平台优化放到之后进行。

## 4-4

给定以下几个大 *O* 复杂度： *O(n),O($n^2$),O($\log$ n),O(1)*。你能按照递增的复杂度来对他们排序吗？它们的名字是什么？你能想到更差的复杂度吗？

**answer**:

按照递增的复杂度从小到大进行排序:*O(1),O($\log$ n),O(n),O($n^2$)* 。

名字为：常数复杂度，对数复杂度，线性复杂度，平方复杂度。

更差的复杂度：*O(n!)* 阶乘复杂度。