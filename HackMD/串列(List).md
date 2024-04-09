---
title: 串列(List)
tags: [Python, list]

---

{%hackmd @dzif24x25/IBXIWNXgTju0h2AKtSaLkA %}

###### tags: `Python` `list`

# 串列(List)

## `list`介紹

在Python中，串列(list)除了可以儲存相同元素的物件，串列也可以儲存不同元素的物件。

### 程式碼：
```python
mylist = [元素1, 元素2, ... , 元素n]
```

### 範例：
```python
a_list = ['Hello', 123, True]
```

## `list`的存取

### 程式碼：
```python
list名稱[索引值(index)]
```
### 範例：
```python
scores[2]
temperature[15]
is_passed[5]
```

:::info
註：若索引值<0，則代表倒數第n
範例：
```python
scores[-3] #scores中倒數第3個元素
```
:::

### 串列解包：
```python=
scores = [100, 89, 74, 70, 40]
s1, s2, s3, s4, s5 = scores
print(s1, s2, s3, s4, s5)
```

輸出結果：

```
100 89 74 70 40
```

### 搭配`for`迴圈：
```python=
scores = [100, 89, 74, 70, 40]
for score in scores:
    print(score, end=' ')
```

輸出結果：

```
100 89 74 70 40 
```

## 串列切片(list slices)

在設計程式時，常會需要取得串列的部分片段，又稱「子串列」，這時就可以使用串列切片

### 格式：

| 格式 | 說明  |
|-|-|
| `mylist[start:end]` | `start` ~ `end-1`  |
| `mylist[:end]` | 開頭 ~ `end-1`  |
| `mylist[:-n]` | 開頭 ~ 倒數第`n`(不含)  |
| `mylist[start:]` | `start` ~ 結尾  |
| `mylist[-n:]` | 倒數第`n` ~ 結尾  |
| `mylist[:]` | 開頭 ~ 結尾  |
| `mylist[start:end:step]` | `start` ~ `end-1`，間隔`step`  |

範例：
```python=
mylist = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

print('mylist[3:7]   =', mylist[3:7])
print('mylist[:7])   =', mylist[:7])
print('mylist[:-4]   =', mylist[:-4])
print('mylist[-3:]   =', mylist[-3:])
print('mylist[:]     =', mylist[:])
print('mylist[::-1]  =', mylist[::-1])  #反轉串列
print('mylist[3:7:1] =', mylist[3:7:1])
```

輸出結果：
```
mylist[3:7]   = [4, 5, 6, 7]
mylist[:7])   = [1, 2, 3, 4, 5, 6, 7]
mylist[:-4]   = [1, 2, 3, 4, 5, 6]
mylist[-3:]   = [8, 9, 10]
mylist[:]     = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
mylist[::-1]  = [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]
mylist[3:7:1] = [4, 5, 6, 7]
```

## 串列長度計算

### len()函式：

可以使用len()函式來計算一串列中的元素數量

### 範例：
```python=
scores = [100, 89, 74, 70, 40]
print(len(scores))
```

輸出結果：
```
5
```

## 串列新增元素

### 程式碼：
```python
串列.append(元素)
```

### 範例：
```python=
names = ['Anthony', 'John']

names.append('Jenny')
print(names)
```

輸出結果：
```
['Anthony', 'John', 'Jenny']
```

## 串列插入元素

### 程式碼：
```python
串列.insert(索引值, 元素)
```

### 範例：
```python=
names = ['Anthony', 'John']

names.insert(1, 'Jenny')
print(names)
```

輸出結果：

```
['Anthony', 'Jenny', 'John']
```

## 串列刪除元素

### del：
```python
del 串列[i] #刪除索引值i的串列元素
del 串列[start:end] #刪除start到end-1的串列元素
del 串列[start:end:step] #以間隔step，刪除start到end-1
```

### 範例：
```python=
phones = ['Apple', 'Samsung', 'Nokia', 'Google']
print('Original:', phones)

del phones[2]
print('Deleted:', phones)
```

### 輸出結果：
```
Original: ['Apple', 'Samsung', 'Nokia', 'Google']
Deleted: ['Apple', 'Samsung', 'Google']
```

### remove()

若不知道要刪除元素的索引值，可以使用`remove()`函式

```python
串列.remove(元素)
```

### 範例：
```python=
names = ['Anthony', 'John', 'Jenny']
names.remove('Anthony')
print(names)
```

### 輸出結果
```
['John', 'Jenny']
```

若找不到元素會發生錯誤：

```
ValueError
list.remove(x): x not in list
```

## 串列相加

在Python中，可以使用`+`和`+=`來執行串列相加

### 範例：
```python=
phones1 = ['Apple', 'Samsung', 'Nokia', 'Google']
phones2 = ['HUAWEI', 'OPPO', 'OnePlus', 'Vivo', 'Xiaomi']

phones = phones1 + phones2
print(phones)

phones1 += phones2
print(phones1)
```

輸出結果：
```
['Apple', 'Samsung', 'Nokia', 'Google', 'HUAWEI', 'OPPO', 'OnePlus', 'Vivo', 'Xiaomi']
['Apple', 'Samsung', 'Nokia', 'Google', 'HUAWEI', 'OPPO', 'OnePlus', 'Vivo', 'Xiaomi']
```

## 串列*數字

在Python中，串列*數字 代表串列重複幾次

### 範例：
```python=
names = ['Anthony', 'John']
print(names*3)
```

輸出結果：
```
['Anthony', 'John', 'Anthony', 'John', 'Anthony', 'John']
```

## 串列顛倒

### 利用串列切片
```python
串列 = 串列[::-1] #使用串列切片不會改變串列本身
```

### 利用reverse()
```python
串列.reverse() #使用reverse()會使串列改變
```

## 串列排序

### 串列.sort()：

程式碼：
```python
串列.sort(reverse=...)
```

> reverse：
> 預設為False
> 若為True，則會由大至小排序
> 若為False，則會由小至大排序

```python
grades = [100, 81, 61, 92, 20, 37]
grades.sort()
print(grades)
```

輸出結果：
```
[20, 37, 61, 81, 92, 100]
```

### sorted()

和`串列.sort()`相同，但不會改變原串列內容

程式碼：
```python
新串列 = sorted(舊串列, reverse=...)
```

> reverse：
> 預設為False
> 若為True，則會由大至小排序
> 若為False，則會由小至大排序

```python
grades = [100, 81, 61, 92, 20, 37]
grades = sorted(grades, reverse=True)
print(grades)
```

輸出結果：
```
[100, 92, 81, 61, 37, 20]
```

## 串列統計資料

### 最大值max()：

範例：
```python=
grades = [100, 81, 61, 92, 20, 37]
print(max(grades))
```

輸出結果：
```
100
```

### 最小值min()：

範例：
```python=
grades = [100, 81, 61, 92, 20, 37]
print(min(grades))
```

輸出結果：
```
20
```

### 總和sum()：

範例：
```python=
grades = [100, 81, 61, 92, 20, 37]
print('總和:', sum(grades))
print('平均:', sum(grades) / len(grades))
```

輸出結果：
```
總和: 391
平均: 65.16666666666667
```

:::info
點此前往簡報版：https://hackmd.io/@dzif24x25/BkNgp4uy2
:::