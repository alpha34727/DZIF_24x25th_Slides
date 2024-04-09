---
title: 字典(Dict)
tags: [Python, dict]

---

{%hackmd @dzif24x25/IBXIWNXgTju0h2AKtSaLkA %}

###### tags: `Python` `dict`

# 字典(Dict)

## 字典(`dict`)介紹

與串列(`list`)和元組(`tuple`)依照順序排列的「序列資料結構」不同，字典`dict`不是依照順序排列的，因此也無法使用索引值(index)來取得元素內容

在字典中，元素使用`鍵(key):值(value)`的方法來配對儲存。存取字典時，使用鍵(key)來取得值(value)的內容

字典定義時，需將`鍵:值`放在`{}`中

### 程式碼：

```python
mydict = {鍵1: 值1, 鍵2: 值2, ..., 鍵n: 值n}
```

### 範例：
```python=
dictionary = {'apple': '蘋果', 'python': '蟒蛇', 'dictionary': '字典'}
Anthony = {'name': 'Anthony', 'age': 3, 'using_iPhone': True}

print(f'type(dictionary) = {type(dictionary)}')
print(f'dictionary = {dictionary}')
print(f'type(Anthony) = {type(Anthony)}')
print(f'Anthony = {Anthony}')
```

輸出結果：
```
type(dictionary) = <class 'dict'>
dictionary = {'apple': '蘋果', 'python': '蟒蛇', 'dictionary': '字典'}
type(Anthony) = <class 'dict'>
Anthony = {'name': 'Anthony', 'age': 3, 'using_iPhone': True}
```

## 存取字典元素的值

因為字典是由`鍵(key):值(value)`配對設定，因此可以使用「鍵」來當做「索引值(index)」來處理

### 範例：
```python=
dictionary = {'apple': '蘋果', 'python': '蟒蛇', 'dictionary': '字典'}
Anthony = {'name': 'Anthony', 'age': 3, 'using_iPhone': True}

print('python的中文是:', dictionary['python'])
print('Anthony', Anthony['age'], '歲了')

Anthony['age'] += 1

print('Anthony', Anthony['age'], '歲了')
```

輸出結果：

```
python的中文是: 蟒蛇
Anthony 3 歲了
Anthony 4 歲了
```

## 新增字典中的元素

### 程式碼：
```python
字典[鍵] = 值
```

### 範例：
```python=
fruits = {'Apple': '蘋果', 'Banana': '香蕉', 'Orange': '橘子'}

fruits['Grape'] = '葡萄'
print(fruits)
```

輸出結果：

```
{'Apple': '蘋果', 'Banana': '香蕉', 'Orange': '橘子', 'Grape': '葡萄'}
```

## 刪除字典中的元素

### 程式碼：
```python
del 字典[鍵]
```

### 範例：
```python=
fruits = {'Apple': '蘋果', 'Banana': '香蕉', 'Orange': '橘子'}
print('Old:', fruits)

del fruits['Apple']
print('New:', fruits)
```

輸出結果：
```
Old: {'Apple': '蘋果', 'Banana': '香蕉', 'Orange': '橘子'}
New: {'Banana': '香蕉', 'Orange': '橘子'}
```

## `pop()`

`pop()`方法也可以刪除字典中的元素，並同時傳回刪除元素的值

### 程式碼：
```python
刪除元素的值 = 字典.pop(key[, default])
```

> ### key：
> 欲刪除元素的鍵
> ### default：
> 若找不到欲刪除元素的鍵時回傳此內容，沒有設定會導致`KeyError`

### 範例：
```python=
fruits = {'Apple': '蘋果', 'Banana': '香蕉', 'Orange': '橘子'}
print('Old:', fruits)

deleted = fruits.pop('Banana')
print('Deleted: ', deleted)

print('New:', fruits)
```

輸出結果：
```
Old: {'Apple': '蘋果', 'Banana': '香蕉', 'Orange': '橘子'}
Deleted:  香蕉
New: {'Apple': '蘋果', 'Orange': '橘子'}
```

### 範例 - 若欲刪除的鍵找不到(沒加default)：
```python=
fruits = {'Apple': '蘋果', 'Banana': '香蕉', 'Orange': '橘子'}
print('Old:', fruits)

deleted = fruits.pop('Grape')
print('Deleted: ', deleted)

print('New:', fruits)
```

輸出結果：
```
Exception has occurred: KeyError
'Grape'
  File "dict_example.py", line 4, in <module>
    deleted = fruits.pop('Grape')
KeyError: 'Grape'
```

### 範例 - 若欲刪除的鍵找不到(加上default)：
```python=
fruits = {'Apple': '蘋果', 'Banana': '香蕉', 'Orange': '橘子'}
print('Old:', fruits)

deleted = fruits.pop('Grape', 'Nothing')
print('Deleted: ', deleted)

print('New:', fruits)
```

輸出結果：
```
Old: {'Apple': '蘋果', 'Banana': '香蕉', 'Orange': '橘子'}
Deleted:  Nothing
New: {'Apple': '蘋果', 'Banana': '香蕉', 'Orange': '橘子'}
```

## `clear()`

`clear()`方法可以清除字典中所有的元素，此時字典將會變為空的字典

### 範例：
```python=
fruits = {'Apple': '蘋果', 'Banana': '香蕉', 'Orange': '橘子'}
print('Original:', fruits)

fruits.clear()
print('Cleared:', fruits)
```

輸出結果：
```
Original: {'Apple': '蘋果', 'Banana': '香蕉', 'Orange': '橘子'}
Cleared: {}
```

## 刪除字典

### 程式碼：
```python
del 字典
```
### 範例：
```python=
fruits = {'Apple': '蘋果', 'Banana': '香蕉', 'Orange': '橘子'}
print('Original:', fruits)

del fruits
print('Deleted:', fruits)
```

輸出結果：
```
Exception has occurred: NameError
name 'fruits' is not defined
  File "dict_example.py", line 5, in <module>
    print('Deleted:', fruits)
NameError: name 'fruits' is not defined
```

## `len()`

`len()`可以取得字典中的元素數量

### 範例：
```python=
dictionary = {'apple': '蘋果', 'python': '蟒蛇', 'dictionary': '字典'}
Anthony = {'name': 'Anthony', 'age': 3, 'using_iPhone': True}
print('dictionary元素數量:', len(dictionary))
print('Anthony元素數量:', len(Anthony))
```

輸出結果：
```
dictionary元素數量: 3
Anthony元素數量: 3
```

## 驗證元素是否存在

### 程式碼：
```python
鍵 in 字典
```
>回傳值：bool，鍵 是否存在於字典中

### 範例：

```python=
fruits = {'Apple': '蘋果', 'Banana': '香蕉', 'Orange': '橘子'}

english = input('請輸入水果英文：')
if english in fruits:
    print(f'{english}{fruits[english]} 已經在字典中了')
else:
    chinese = input('請輸入水果中文：')
    fruits[english] = chinese
    print(f'{english} : {chinese} 已新增至字典中')
```

輸出結果：
![](https://i.imgur.com/W5AYdDt.gif =100%x)
![](https://i.imgur.com/VgUE36h.gif =100%x)

## 合併字典

### `update()`方法

程式碼：
```python=
grades1 = {'Chinese': 54, 'English': 87, 'Math': 100}
grades2 = {'Physics': 76, 'Chemisty': 89, 'Biology': 105}

grades1.update(grades2)

print(grades1)
```

輸出結果：
```
{'Chinese': 54, 'English': 87, 'Math': 100, 'Physics': 76, 'Chemisty': 89, 'Biology': 105}
```

### `**`方法

:::info
註：這是Python 3.5的新功能
:::

程式碼：
```python=
grades1 = {'Chinese': 54, 'English': 87, 'Math': 100}
grades2 = {'Physics': 76, 'Chemisty': 89, 'Biology': 105}

grades = {**grades1, **grades2}

print(grades)
```

輸出結果：
```
{'Chinese': 54, 'English': 87, 'Math': 100, 'Physics': 76, 'Chemisty': 89, 'Biology': 105}
```

## `dict()`

`dict()`可將物件強制轉型為字典

### 範例：
```python
ages = [['Anthony', 3], ['John', 5], ['Jenny', 4]]
print(dict(ages))
```

輸出結果：
```
{'Anthony': 3, 'John': 5, 'Jenny': 4}
```

## 遍歷字典

### `items()`

`items()`可歷覽字典中的鍵值配對，常搭配`for`迴圈使用

範例：
```python=
grades = {'Chinese': 54, 'English': 87, 'Math': 100, 'Physics': 76, 'Chemisty': 89, 'Biology': 105}

for subject, grade in grades.items():
    print(subject, grade)
```

輸出結果：
```
Chinese 54
English 87
Math 100
Physics 76
Chemisty 89
Biology 105
```

:::info
註：字典是無序的，其輸出結果不保證一定會依照順序排列輸出，只保證鍵與值之間的關係
:::

### `keys()`

`keys()`可歷覽字典中的鍵(keys)

範例：

```python=
fruits = {'Apple': '蘋果', 'Banana': '香蕉', 'Orange': '橘子'}
for fruit in fruits:
    print(fruit)
```

輸出結果：
```
Apple
Banana
Orange
```

### `values()`

`values()`可歷覽字典中的值(value)

範例：
```python=
ages = {'Anthony': 3, 'John': 5, 'Jenny': 4}
max_age = 0
for age in ages.values():
    max_age = max(max_age, age)
    print(age)
    
print(f'最大的人{max_age}歲')
```

輸出結果：
```
3
5
4
最大的人5歲
```

## `get()`

`get()`搜尋字典的鍵，如果有則傳回該鍵的值，沒有則傳回預設值

### 程式碼：
```python=
該鍵的值 = 字典.get(key[, default=None])
```

>key：
>欲尋找鍵的值
>default:
>找不到欲尋找鍵時的傳回值

### 範例：
```python=
ages = {'Anthony': 3, 'John': 5, 'Jenny': 4}
print(f"The age of Morris: {ages.get('Morris', 'Unknown')}")
print(f"The age of Anthony: {ages.get('Anthony', 'Unknown')}")
```

輸出結果：
```
The age of Morris: Unknown
The age of Anthony: 3
```

:::info
註：點此前往簡報版：https://hackmd.io/@dzif24x25/Sy_nueWx2
:::