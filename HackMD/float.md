---
title: float
tags: [CSS, float, clear]

---

{%hackmd @dzif24x25/IBXIWNXgTju0h2AKtSaLkA %}
###### tags: `CSS` `float` `clear`

# float

`float` 可使元素沿水平方向浮動，其周圍的其他元素會根據浮動元素的位置進行排列。

## 語法

```css
float: right; /* 沿右邊浮動 */
float: left;  /* 沿左邊浮動 */
float: none;  /* 預設值，不浮動 */
```

## 範例：沒使用`float`

<iframe height="400" style="width: 100%;" scrolling="no" title="Untitled" src="https://codepen.io/alpha34727/embed/zYmVgOz?default-tab=css%2Cresult&editable=true" frameborder="no" loading="lazy" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href="https://codepen.io/alpha34727/pen/zYmVgOz">
  Untitled</a> by Alpha (<a href="https://codepen.io/alpha34727">@alpha34727</a>)
  on <a href="https://codepen.io">CodePen</a>.
</iframe>

可以看到，`<div>`占滿了畫面的寬

## 範例：`float: left`

<iframe height="400" style="width: 100%;" scrolling="no" title="float" src="https://codepen.io/alpha34727/embed/rNqEEgj?default-tab=css%2Cresult&editable=true" frameborder="no" loading="lazy" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href="https://codepen.io/alpha34727/pen/rNqEEgj">
  float</a> by Alpha (<a href="https://codepen.io/alpha34727">@alpha34727</a>)
  on <a href="https://codepen.io">CodePen</a>.
</iframe>

## `clear`

`clear` 可以規定規定元素的哪一側不允許其他浮動元素。

### 語法：

```css
clear: left;  /* 左側不允許其他浮動元素 */
clear: right; /* 右側不允許其他浮動元素 */
clear: both;  /* 左右兩側不允許其他浮動元素 */
clear: none;  /* 預設值，沒有限制 */
```

### 範例：

<iframe height="400" style="width: 100%;" scrolling="no" title="Untitled" src="https://codepen.io/alpha34727/embed/gOBNVPy?default-tab=css%2Cresult&editable=true" frameborder="no" loading="lazy" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href="https://codepen.io/alpha34727/pen/gOBNVPy">
  Untitled</a> by Alpha (<a href="https://codepen.io/alpha34727">@alpha34727</a>)
  on <a href="https://codepen.io">CodePen</a>.
</iframe>