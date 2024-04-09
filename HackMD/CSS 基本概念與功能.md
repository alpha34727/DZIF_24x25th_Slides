---
title: CSS 基本概念與功能
tags: [CSS簡報, ' 屬性', ' 選擇器', ' 屬性值', ' 宣告']

---

---
type: slide
tags: CSS簡報, 選擇器, 屬性, 屬性值, 宣告
---

{%hackmd @dzif24x25/yRBnguqQQl-2ylH1j5h0cg %}

# CSS 基本概念與功能

---

![](https://i.imgur.com/9f9yzG6.png =100%x)

---

## 選擇器 (Selector)

用來選擇欲影響的元素

![](https://i.imgur.com/9f9yzG6.png =100%x)

---

常見有以下幾種：
* 元素選擇器 (Type selector)
* ID 選擇器 (ID selector)
* Class 選擇器 (Class selector)

---

## 元素選擇器 (Type selector)

指定所有 HTML 元素中的特定元素

---

## 範例
* 選取所有 `<h1>` 元素
* 文字顏色改為<font style="color: red;">紅色</font>

```css=
h1 {
   color: red; 
}
```

---

## ID 選擇器 (ID selector)

指定有特定ID的HTML元素

---

## 範例
* 指定有 `title` ID 的 HTML 元素
* 文字顏色改為<font style="color: red;">紅色</font>

```css=
#title {
    color: red;
}
```

---

## Class 選擇器 (Class selector)

指定有特定CSS的HTML元素

---

## 範例

* 指定有 `red-text` CSS 的 HTML 元素
* 文字顏色改為<font style="color: red;">紅色</font>

```css=
.red-text {
    color: red;
}
```

---

## 同時選擇多個選擇器

可以使用 逗點(`,`) 來同時使用多種選擇器

---

## 範例

HTML：
```htmlembedded=
<h1>HTML 基本元素</h1>

<h2>「元素」介紹</h2>
<p>HTML的基本單位是「元素」</p>

<img src="https://i.imgur.com/d6pE7Fq.png">

<p>如上圖所示，一個元素要有起始標籤和結尾標籤，標籤需要使用角括號(<>)包圍，並在其中放入標籤名稱，結尾標籤需要加上斜線(/)</p>
```

CSS：
```css=
h1, p{
    color: red;
}
```

---

![](https://i.imgur.com/uqoqjHc.png)

---

## 屬性 (Property)

影響HTML的方法

![](https://i.imgur.com/9f9yzG6.png =100%x)

---

## 屬性值 (Property value)

位於屬性的右邊，冒號(`:`)之後，給予屬性

![](https://i.imgur.com/9f9yzG6.png =100%x)

---

## 宣告 (Declaraction)

由 屬性 和 屬性值 構成，指定了此元素的樣貌

![](https://i.imgur.com/9f9yzG6.png =100%x)

---

