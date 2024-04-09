---
title: 元組(Tuple)
tags: [Python簡報, ' tuple']

---

---
type: slide
tags: Python簡報, tuple
---

{%hackmd @dzif24x25/yRBnguqQQl-2ylH1j5h0cg %}

# 元組(Tuple)

---

## `tuple`介紹

---

`tuple`是一種能夠儲存多個元素的物件，與`list`類似，但其內部的元素不可修改，只能讀取

---

`tuple`定義時須將元素放置於`()`中來表示

---

### 程式碼：

```python
mytuple = (元素1, 元素2, ..., 元素n)
```

---

### 範例：

```python
tuple1 = ('Hello', 123, True)
tuple2 = ('Anthony',) #若只有一個元素，可以這樣定義
tuple3 = 'Apple', 'Banana', 'Orange' #也可以這樣定義tuple
```

---

## `tuple`的存取

---

### 程式碼：
```python
tuple名稱[索引值(index)]
```

---

### 範例：
```python
scores[2]
temperature[15]
is_passed[5]
```

---

註：若索引值<0，則代表倒數第n
範例：
```python
scores[-3] #scores中倒數第3個元素
```

---

### 搭配`for`迴圈：
```python=
scores = (100, 89, 74, 70, 40)
for score in scores:
    print(score, end=' ')
```

---

輸出結果：

```
100 89 74 70 40 
```

---

## `tuple`不可修改

與`list`不同，`tuple`內的元素不可修改，只能讀取

---

### 如果嘗試修改`tuple`內的元素：

---

```python=
firuts = ('Apple', 'Banana', 'Orange')
firuts[2] = 'Pineapple'
print(firuts)
```

---

輸出結果：

```
Exception has occurred: TypeError
'tuple' object does not support item assignment
  File "tuple_example.py", line 2, in <module>
    firuts[2] = 'Pineapple'
TypeError: 'tuple' object does not support item assignment
```

---

因為如此，`tuple`相較於`list`有更高的安全性，能夠保護資料不被修改

---

## 元組切片(tuple slices)

---

元組切片與串列切片的概念完全相同

---

範例：
```python=
mylist = (1, 2, 3, 4, 5, 6, 7, 8, 9, 10)

print('mylist[3:7]   =', mylist[3:7])
print('mylist[:7])   =', mylist[:7])
print('mylist[:-4]   =', mylist[:-4])
print('mylist[-3:]   =', mylist[-3:])
print('mylist[:]     =', mylist[:])
print('mylist[::-1]  =', mylist[::-1])  #反轉元組
print('mylist[3:7:1] =', mylist[3:7:1])
```

---

輸出結果：
```
mylist[3:7]   = (4, 5, 6, 7)
mylist[:7])   = (1, 2, 3, 4, 5, 6, 7)
mylist[:-4]   = (1, 2, 3, 4, 5, 6)
mylist[-3:]   = (8, 9, 10)
mylist[:]     = (1, 2, 3, 4, 5, 6, 7, 8, 9, 10)
mylist[::-1]  = (10, 9, 8, 7, 6, 5, 4, 3, 2, 1)
mylist[3:7:1] = (4, 5, 6, 7)
```

---

## 方法與函式

---

如果可以用在`list`上的方法或函式不會改變元組內容，則可以將其應用在`tuple`上

---

### 範例 - len()：

---

```python=
scores = (100, 89, 74, 70, 40)
print(len(scores))
```

---

輸出結果：
```
5
```

---

### 錯誤範例 - append()：

---

由於`append()`函式會修改到容器中的值，所以`tuple`不能使用

---

```python=
names = ('Anthony', 'John')

names.append('Jenny')
print(names)
```

---

輸出結果：
```
Exception has occurred: AttributeError
'tuple' object has no attribute 'append'
  File "tuple_example.py", line 3, in <module>
    names.append('Jenny')
AttributeError: 'tuple' object has no attribute 'append'
```

---

## `tuple`與`list`資料轉換

---

### 強制轉型為`tuple`

---

程式碼：
```python
mylist = [1, 'two', True]
mytuple = tuple(mylist)
print(type(mytuple))
print(mytuple)
```

---

輸出結果：
```
<class 'tuple'>
(1, 'two', True)
```

---

### 強制轉型為`list`

---

程式碼：
```python
mytuple = [1, 'two', True]
mylist = list(mytuple)
print(type(mylist))
print(mylist)
```

---

輸出結果：
```
<class 'list'>
[1, 'two', True]
```