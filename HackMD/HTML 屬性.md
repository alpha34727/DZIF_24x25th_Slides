---
title: HTML 屬性
tags: [HTML簡報, ' 屬性']

---

---
type: slide
tags: HTML簡報, 屬性
---

{%hackmd @dzif24x25/yRBnguqQQl-2ylH1j5h0cg %}

# HTML 屬性

---

# 屬性的作用

---

### **提供**元素的**附加訊息**
例如：**元素的<font style="font-size: 1.5em;">大</font><font style="font-size: 0.75em">小</font>**，**元素的~~樣~~*式***

![](https://i.imgur.com/JDxoOFS.png)

---

### ⚠️注意⚠️
### 有些屬性只有特定標籤才能用
例如：`href`屬性可以用在`link`, `img`, `area`, `base`等標籤，其他標籤不行

---

# 基本屬性

---

## `src`

指定要嵌入到網頁中的**外部資源**
相對路徑 或是 絕對路徑

---

### 範例

```css=
<img src="https://i.imgur.com/syAXAme.png">
```

---

### 範例結果

![](https://i.imgur.com/syAXAme.png =60%x)

---

## `href`

指定超連結指向的目標URL

---

### 範例

```css=
<a href="https://youtu.be/dQw4w9WgXcQ">
    不要點我
</a>
```

---

### 範例結果

![](https://i.imgur.com/JJpQOBt.gif)

---

## `title`

當游標移到元素上時，會顯示出訊息

---

### 範例

```css=
<p title="Hi~">隱藏訊息！</p>
```

---

### 範例結果

![](https://i.imgur.com/ZCeoji9.gif)

---

## `style`

這可以直接在屬性內寫`CSS`

---

### 範例：

```css=
<p style="font-size: 50px; font-weight: 900;">50px</p>
<p style="font-size: 10px;">10px</p>
```

---

### 範例結果

![](https://i.imgur.com/UbXuolv.png)

---

## `id` 和 `class`

`id`和`class`可用來標示元素
可通過 `CSS` 和 `JavaScript` 來操作改變元素樣式

---

## `id` 和 `class` 的區別

---

 ### `id`：
 * 獨一無二
 * 所標示的元素只能有一個

---

 ### `class`：
 * 可以標示一個或以上的元素，沒有限制