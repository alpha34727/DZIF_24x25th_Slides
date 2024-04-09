---
title: 字串(String)
tags: [Python簡報, ' 字串', ' 格式化字串']

---

---
type: slide
tags: Python簡報, 字串, 格式化字串
---

{%hackmd @dzif24x25/yRBnguqQQl-2ylH1j5h0cg %}

# 字串(String)

---

## 字串介紹

---

在Python中，字串(String)可以使用兩個**單引號**(`'`)或兩個**雙引號**(`"`)來表示

---


範例：
```python
'這是一個字串的範例'
```
```python
"這是另一個字串的範例"
```

---

若使用**單引號**(`'`)表示的字串中含有**單引號**(`'`)，或**雙引號**(`"`)表示的字串中含有**雙引號**(`"`)，則會發生**錯誤**

---

範例：
```python
'This is Anthony's iPhone.'
```
輸出：
```
  File "<stdin>", line 1
    'This is Anthony's iPhone.'
                     ^
SyntaxError: invalid syntax
```

---

遇到這種情況，可以改用**雙引號**來表示**字串**

反之亦然，若使用**雙引號**所表示的**字串**中含有**雙引號**，則會發生**錯誤**，遇到這種情況，可以改用**單引號**來表示**字串**

---

## 多行字串

---

如果需要紀錄的字串有多行，可以使用三個**單引號**(`'`)或三個**雙引號**(`"`)來表示多行字串

---

範例：
```python
'''《離騷》
作者：屈原
原文：

帝高陽之苗裔兮，朕皇考曰伯庸。
攝提貞於孟陬兮，惟庚寅吾以降。
皇覽揆餘初度兮，肇錫餘以嘉名：
名餘曰正則兮，字餘曰靈均。

...以下省略...

僕伕悲餘馬懷兮，蜷局顧而不行。
亂曰：已矣哉！
國無人莫我知兮，又何懷乎故都！
既莫足與爲美政兮，吾將從彭咸之所居！'''
```

---

## 字串連接

---

在Python中，可以使用`+`，將兩個**字串**相加，形成新的**字串**

---

範例：
```python=
firstName = 'Anthony'
lastName = 'Fu'
name = firstName + ' ' + lastName

print(name)
```

輸出：
```
Anthony Fu
```

---

## 強制轉型

---

在Python中，可以使用`str()`函式來強制將資料轉型為str

---

範例：
```python=
x = str(2023)
print(x)
```
輸出：
```
2023
```

---

## 字串加`r`

---

若想取消跳脫字元(Escape Character)的功能，可以在字串前面加`r`

---

範例：
```python=
str1 = 'Hello!\nPython'
str2 = r'Hello!\nPython'

print('沒加r：')
print(str1)
print('加r：')
print(str2)
```

輸出：
```
沒加r：
Hello!
Python
加r：
Hello!\nPython
```

---

## 格式化字串

---

### 使用`%`

---

格式如下：
```python
'格式化字串' % (資料, ...)
```

---

| 格式化字串 | 轉換型態  |
|-|-|
| %s | 字串  |
| %d | 10進制整數  |
| %f | 10進制浮點數  |
| %x | 16進制整數(小寫)  |
| %X | 16進制整數(大寫)  |
| %o | 8進制整數  |
| %b | 2進制整數  |
| %e | 科學記號e  |
| %E | 科學記號E  |

---

範例：
```python=
name = 'Anthony'
month = 2
day = 29

print("%s's birthday is %d/%d." % (name, month, day))
```

輸出：
```
Anthony's birthday is 2/29.
```

---

#### 最小寬度、最大字元、對齊與精準度設定：

| 格式化字串 | 說明  |
|-|-|
| 不加東西、`+` | 靠右對齊  |
| - | 靠左對齊  |
| 數字 | 最小寬度  |
| 數字.數字 | 最小寬度.最大字元數 |

---

範例1：
```python=
print('三次段考國文總分: %d' % (189))
print('平均: %3.2f' % (188 / 3))
```

輸出1：
```
三次段考國文總分: 189
平均: 62.67
```

---

範例2：
```python
firstName = 'Anthony'
lastName = 'Fu'

print('First Name: %+8s' % (firstName))
print('Last Name: %+9s' % (lastName))
```

輸出2：
```
First Name:  Anthony
Last Name:        Fu
```

---

### 使用`.format`

---

格式如下：
```python
'格式化字串'.format(資料)
```

格式化字串中的變數用`{}`表示

---

範例：
```python=
name = 'Anthony'
month = 2
day = 29

print("{}'s birthday is {}/{}.".format(name, month, day))
```

輸出：
```
Anthony's birthday is 2/29.
```

---

`{}`中可填入數字，表示填入資料的順序

範例：
```python=
name = 'Anthony'
month = 2
day = 29

print("{1}'s birthday is {0}/{2}.".format(name, month, day))
```

輸出：
```
2's birthday is Anthony/29.
```

---

`{}`中可填入數字，表示填入具名引數

範例：
```python=
name = 'Anthony'
month = 2
day = 29

print("{name}'s birthday is {month}/{day}.".format(month=month, day=day, name=name))
```

輸出：
```
Anthony's birthday is 2/29.
```

---

#### 最小寬度、最大字元、對齊與精準度設定：
| 格式化字串 | 說明  |
|-|-|
| `:` | 開頭一定要加 |
| 不加東西、`>` | 靠右對齊  |
| `<` | 靠左對齊  |
| `^` | 置中隊齊  |
| 數字.數字 | 最小寬度.最大字元數  |
| 填補字元 | 填補的字元  |

---

| 格式化字串 | 轉換型態  |
|-|-|
| :s | 字串  |
| :d | 10進制整數  |
| :f | 10進制浮點數  |
| :x | 16進制整數(小寫)  |
| :X | 16進制整數(大寫)  |
| :o | 8進制整數  |
| :b | 2進制整數  |
| :e | 科學記號e  |
| :E | 科學記號E  |

---

範例1：
```python=
print('三次段考國文總分: {}'.format(189))
print('平均: {:3.2f}'.format((188 / 3)))
```

輸出1：
```
三次段考國文總分: 189
平均: 62.67
```

---

範例2：
```python
str1 = 'Hello!'

print('{:>12s}'.format(str1))
print('{:^12s}'.format(str1))
print('{:<12s}'.format(str1))

print('{:=>12s}'.format(str1))
print('{:&^12s}'.format(str1))
print('{:*<12s}'.format(str1))
```

輸出2：
```
      Hello!
   Hello!
Hello!
======Hello!
&&&Hello!&&&
Hello!******
```

---

### f-strings

---

*註：這是Python 3.6新增的功能*

f-strings 是改良的`.format`，範例如下：

---

範例：
```python=
name = 'Anthony'
month = 2
day = 29

print(f"{name}'s birthday is {month}/{day}.")
```

輸出：
```
Anthony's birthday is 2/29.
```

---

最小寬度、最大字元、對齊與精準度設定：
和[`.format`相同](#使用.format)

---

範例1：
```python=
print(f'三次段考國文總分: {189}')
print(f'平均: {(188 / 3):3.2f}')
```

輸出1：
```
三次段考國文總分: 189
平均: 62.67
```

---

範例2：
```python
str1 = 'Hello!'

print(f'{str1:>12s}')
print(f'{str1:^12s}')
print(f'{str1:<12s}')

print(f'{str1:=>12s}')
print(f'{str1:&^12s}')
print(f'{str1:*<12s}')
```

輸出2：
```
      Hello!
   Hello!
Hello!
======Hello!
&&&Hello!&&&
Hello!******
```