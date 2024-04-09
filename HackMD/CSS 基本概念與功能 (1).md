---
title: CSS 基本概念與功能
tags: [CSS, 屬性, 選擇器, 屬性值, 宣告]

---

{%hackmd @dzif24x25/IBXIWNXgTju0h2AKtSaLkA %}
###### tags: `CSS` `選擇器` `屬性` `屬性值` `宣告`

# CSS 基本概念與功能

![](https://i.imgur.com/9f9yzG6.png =100%x)

## 選擇器 (Selector)

選擇器 (Selector) 可用來選擇欲影響的元素，常見有以下幾種：

### 元素選擇器 (Type selector)

指定所有 HTML 元素中的特定元素

範例：選取所有 `<h1>` 元素，將其文字顏色改為<font style="color: red;">紅色</font>

```css=
h1 {
   color: red; 
}
```

### ID 選擇器 (ID selector)

指定有特定ID的HTML元素

範例：指定有 `title` ID 的 HTML 元素，將其文字顏色改為<font style="color: red;">紅色</font>
```css=
#title {
    color: red;
}
```

### Class 選擇器 (Class selector)

指定有特定CSS的HTML元素

範例：指定有 `red-text` CSS 的 HTML 元素，將其文字顏色改為<font style="color: red;">紅色</font>
```css=
.red-text {
    color: red;
}
```

<!-- ### 屬性選擇器 (Attribute selector)

### 偽選擇器（Pseudo-class selector）
 -->

## 同時選擇多個選擇器

可以使用 逗點(`,`) 來同時使用多種選擇器

### 範例：

<iframe height="450" style="width: 100%;" scrolling="no" title="Untitled" src="https://codepen.io/alpha34727/embed/XWxzGmx?default-tab=css%2Cresult&editable=true" frameborder="no" loading="lazy" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href="https://codepen.io/alpha34727/pen/XWxzGmx">
  Untitled</a> by Alpha (<a href="https://codepen.io/alpha34727">@alpha34727</a>)
  on <a href="https://codepen.io">CodePen</a>.
</iframe>

## 屬性 (Property)

影響HTML的方法

## 屬性值 (Property value)

位於屬性的右邊，冒號(`:`)之後，給予屬性

## 宣告 (Declaraction)

由 屬性 和 屬性值 構成，指定了此元素的樣貌

:::info
點此前往簡報 https://hackmd.io/@dzif24x25/rJM-FDWEh
:::

