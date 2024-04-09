---
title: 迴圈(Loop) - 簡報

---

---
type: slide
---

{%hackmd @dzif24x25/yRBnguqQQl-2ylH1j5h0cg %}

# 迴圈(Loop) - 簡報

---

# 迴圈(Loop)

### 如果今天想要列出1~10間的整數？

```python=
print(1, 2, 3, 4, 5, 6, 7, 8, 9, 10)
```

輸出結果：

```
1 2 3 4 5 6 7 8 9 10
```

---

### 如果今天想列出1~1000間的整數呢？

```python=
print(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, ...以下省略...)
```

:::warning
這樣效率也太低了吧！
有沒有效率更高的方法呢？
:::

---

## 迴圈介紹
> 迴圈(loop)是電腦科學運算領域的用語，也是一種常見的控制流程。迴圈是一段在程式中只出現一次，但可能會連續執行多次的程式碼。迴圈中的程式碼會執行特定的次數，或者是執行到特定條件成立時結束迴圈，或者是針對某一集合中的所有項目都執行一次。
>
> Source: 維基百科 – 迴圈

有了迴圈，我們可以讓一段程式區塊依照特定的條件重複執行

---

## `while`迴圈

### 程式碼：
```python
while 條件敘述:
    程式區塊
```

---

:::info
註：若有程式區塊有多行，每一行程式的空格必須相同
```python
while 條件敘述:
****程式區塊
****程式區塊
****程式區塊
```
若有程式區塊只有單行，可以這樣寫：
```python
while 條件敘述: 程式區塊
```
:::

---

### 流程圖：

![](https://i.imgur.com/RQqXWFm.png =40%x)

---

### 範例 - 輸出 1~10：

程式碼：

```python=
i = 1
while i <= 5:
    print(i, end=' ')
    i += 1
```

輸出結果：

```
1 2 3 4 5
```

---

說明：

<video src="https://imgur.com/SrBc19u.mp4" autoplay muted=true controls loop=true width=100%></video>

---

## range()函式

`range()`可產生指定範圍內的整數數字序列

### 程式碼：
```python
range(stop)
或
range(start, stop[, step])
```

> `start`：計數從start開始，預設是0
> `stop`：計數到stop結束(不含stop)
> `step`：每一數字的公差

---

### 範例1：
```python=
print(type(range(5)))
print(range(5))
print(list(range(5))) #list()可將輸入的容器轉換為list
```

輸出結果：
```
<class 'range'>
range(0, 5)
[0, 1, 2, 3, 4]
```

---

### 範例2：
```python=
print(type(range(5, 0, -1)))
print(range(5, 0, -1))
print(list(range(5, 0, -1))) #list()可將輸入的容器轉換為list
```

輸出結果：
```
<class 'range'>
range(5, 0, -1)
[5, 4, 3, 2, 1]
```

---

## `for` 迴圈

### 程式碼：
```python=
for 變數 in 可迭代物件(iterable object):
    程式區塊
```

---

> ### 迭代（iteration）：
>
> 重複回饋(feedback)過程的活動
>
> ### 可迭代物件(iterable object)：
> 
> 可以從物件裡迭代取值的物件
> 例如：`list`、`tuple`、`dict`、`set`、`str`...等

---


:::info
註：若有程式區塊有多行，每一行程式的空格必須相同
```python
for 變數 in 可迭代物件:
****程式區塊
****程式區塊
****程式區塊
```
若有程式區塊只有單行，可以這樣寫：
```python
for 變數 in 可迭代物件: 程式區塊
```
:::

---


### 流程圖：

![](https://i.imgur.com/q3KudRn.png =40%x)

---


### 範例 - 輸出list中的元素：

```python=
birds = ['白頭翁', '麻雀', '綠繡眼', '黑冠麻鷺', '紅尾伯勞']
for bird in birds:
    print(bird)
```

輸出結果：
```
白頭翁
麻雀
綠繡眼
黑冠麻鷺
紅尾伯勞
```


---


### 範例 - 輸出 1~10：

```python=
for i in range(1, 11):
    print(i, end=' ')
```

輸出結果：
```
1 2 3 4 5 6 7 8 9 10 
```


---


### 範例 - n*m的乘法表：
```python=
n = 7
m = 5
for i in range(1, n+1):
    for j in range(1, m+1):
        print(f'{i}*{j}={i*j}', end='\t')
    print()
```

輸出結果：
```
1*1=1   1*2=2   1*3=3   1*4=4   1*5=5
2*1=2   2*2=4   2*3=6   2*4=8   2*5=10
3*1=3   3*2=6   3*3=9   3*4=12  3*5=15
4*1=4   4*2=8   4*3=12  4*4=16  4*5=20
5*1=5   5*2=10  5*3=15  5*4=20  5*5=25
6*1=6   6*2=12  6*3=18  6*4=24  6*5=30
7*1=7   7*2=14  7*3=21  7*4=28  7*5=35
```

---

## `break`

在迴圈中，例如：for迴圈、while迴圈，如果想要結束迴圈，可以使用break來結束

### 程式碼：
```python
while True:
    ...
    break
    ...
```

```python
for i in range(1, 11):
    ...
    break
    ...
```

---

### 範例 - 當遇到`'bye!'`就結束程式：
```python=
while True:
    n = input()
    if n == 'bye!':
        print('Goodbye!')
        break
    print('Hello, ', n)
```

---

輸出結果：
![](https://i.imgur.com/RbU8xPe.gif =100%x)

---

## `continue`

在迴圈中，例如：for迴圈、while迴圈，如果想要跳過迴圈的一回合，可以使用continue來跳過一回合。

### 程式碼：
```python
while True:
    ...
    continue
    ...
```

```python
for i in range(1, 11):
    ...
    continue
    ...
```

---

### 範例 - 當偵測到3的倍數時就跳過：

```python=
for i in range(0, 25):
    if i % 3 == 0:
        continue
    print(i, end=' ')
```

輸出結果：
```
1 2 4 5 7 8 10 11 13 14 16 17 19 20 22 23
```