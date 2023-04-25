# Chapter-4 设计专业的 C++ 程序

## 4-1

在 C++ 中做自己的设计时，最基本的两条设计原则是什么？

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

## 4-3

假设你与朋友一起想出了一个为移动设备制作 3D 游戏的好主意。你有一部 Android 设备，而你的朋友有一部 Apple iPhone，当然你希望游戏能在两种设备上都玩。高层次地解释你将如何处理这两个不同的移动平台，以及如何准备开始游戏开发。

## 4-4

给定以下几个大 *O* 复杂度： *O(n),O($n^2$),O($\log$ n),O(1)*。你能按照递增的复杂度来对他们排序吗？它们的名字是什么？你能想到更差的复杂度吗？
