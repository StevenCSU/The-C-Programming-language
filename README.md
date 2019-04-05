# The-C-Programming-language

Learn 「The C Programming language」

---

**解惑:**

1. 统计空格，行数等程序中，直接在命令行中测试没有结果，因为[EOF](http://www.ruanyifeng.com/blog/2011/11/eof.html)比较特殊，所以手动输入的字符串有时没办法结束（Windows下可以通过输入Ctrl-Z来实现，Linux系统可以通过Ctrl-D来实现）。

2. 形参与实参。我们通常把函数定义中圆括号内列表中出现的变量成为形式参数，而把函数调用中与形式参数对应的值称为实际参数。

3. 在C语言中，所有函数参数都是“通过值”传递的。也就是说，传递给被调用函数的参数值存放在临时变量中，而不是存放在原来的变量中。C语言中，被调用函数不能直接修改主调函数中的值，而只能修改其私有的临时副本的值。

4. [Difference Between Signed and Unsigned](http://www.differencebetween.net/technology/protocols-formats/difference-between-signed-and-unsigned/)

主要区别是能否使用负数，unsigned类型的只能使用0和正数，而signed类型的可以使用负数到正数。