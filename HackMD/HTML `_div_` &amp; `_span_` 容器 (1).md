---
title: HTML `<div>` &amp; `<span>` 容器
tags: [HTML簡報, ' <div>', ' <span>']

---

---
type: slide
tags: HTML簡報, <div>, <span>
---

{%hackmd @dzif24x25/yRBnguqQQl-2ylH1j5h0cg %}

# HTML `<div>` &amp; `<span>` 容器

---

## `<div>` 區塊元素容器

* 沒有特別的意義
* 作為容器(區塊元素)
* 包住HTML標籤
* 與 CSS 或 JavaScript 作互動

---

## 語法

```htmlembedded!
<div>區塊內容</div>	
```

---

## 範例

---


index.html：
```htmlembedded!
<div class="big-text">
    &lt;div&gt; 區塊元素容器
</div>

<div class="small-text">
    &lt;div&gt;沒有特別的意義，只作為容器(區塊元素)使用，用來包住其他HTML標籤，方便與 CSS 或 JavaScript 作互動
</div>
```

---

style.css：
```css=
.big-text {
    font-size: 50px;
    font-weight: 700;
}
.small-text {
    font-size: 20px;
    color: gray;
}
```

---

## 範例結果
   
![](https://i.imgur.com/JkhXtG1.png)

---

## `<span>` 行內容器

* `<span>` 和 `<div>` 類似
* 沒有特別的意義
* 文字或其他行內(inline)的標籤
* 與 CSS 或 JavaScript 作互動

---

## 語法：

```htmlembedded!
<span>文字</span>	
```

---

## 範例：

```htmlembedded=
<p>
    <span style="color: red; font-size: 50px;">紅色</span>
</p>

<p>
    <span style="color: red;">紅色</span>，波長大約為630到750奈米
</p> 
```

---

## 範例結果：

![](https://i.imgur.com/Z1S8Ovn.png)
