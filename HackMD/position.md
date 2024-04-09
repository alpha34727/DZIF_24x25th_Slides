---
title: position
tags: [CSS, position, static, relative, absolute, fixed, sticky]

---

{%hackmd @dzif24x25/IBXIWNXgTju0h2AKtSaLkA %}
###### tags: `CSS` `position` `static` `relative` `absolute` `fixed` `sticky`

# position

`position` 用於指定元素的定位方式，常見的值包括：

* `static`：預設值，元素的位置由正常元素在HTML中的順序決定，不進行特殊定位。
* `relative`：元素相對於其正常位置進行定位，可以使用 `top`、`right`、`bottom` 和 `left` 屬性調整其位置。
* `absolute`：元素相對於其最近的已定位祖先元素進行定位，如果不存在已定位祖先元素，則相對於HTML檔案的初始元素（通常是 `<body>` 元素）進行定位。
* `fixed`：元素相對於視窗進行定位，即使頁面滾動，元素的位置也不會改變。
* `sticky`：元素基於使用者的滾動位置進行定位，當元素滾出視窗時，元素會固定在指定位置，直到使用者滾回該位置。

以下將會介紹這些值：

## `position: static`

預設值，元素的位置由正常元素在HTML中的順序決定，不進行特殊定位。

### 語法：
```css
position: static;
```

### 範例：
<iframe height="400" style="width: 100%;" scrolling="no" title="position: static" src="https://codepen.io/alpha34727/embed/xxyoyGe?default-tab=css%2Cresult&editable=true" frameborder="no" loading="lazy" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href="https://codepen.io/alpha34727/pen/xxyoyGe">
  position: static</a> by Alpha (<a href="https://codepen.io/alpha34727">@alpha34727</a>)
  on <a href="https://codepen.io">CodePen</a>.
</iframe>

## `position: relative`

元素相對於其正常位置進行定位，可以使用 `top`、`right`、`bottom` 和 `left` 屬性調整其位置。

### 語法：
```css
position: relative;

top: 距離;
right: 距離;
bottom: 距離;
left: 距離;
```

### 範例：

<iframe height="400" style="width: 100%;" scrolling="no" title="position: relative" src="https://codepen.io/alpha34727/embed/NWOZONv?default-tab=css%2Cresult&editable=true" frameborder="no" loading="lazy" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href="https://codepen.io/alpha34727/pen/NWOZONv">
  position: relative</a> by Alpha (<a href="https://codepen.io/alpha34727">@alpha34727</a>)
  on <a href="https://codepen.io">CodePen</a>.
</iframe>

## `position: absolute`

元素相對於其最近的已定位祖先元素進行定位，如果不存在已定位祖先元素，則相對於HTML檔案的初始元素（通常是 `<body>` 元素）進行定位。

可以使用 `top`、`right`、`bottom` 和 `left` 屬性調整其位置。

### 語法：
```css
position: absolute;

top: 距離;
right: 距離;
bottom: 距離;
left: 距離;
```

### 範例：
<iframe height="400" style="width: 100%;" scrolling="no" title="position: absolute" src="https://codepen.io/alpha34727/embed/yLRdWxQ?default-tab=css%2Cresult&editable=true" frameborder="no" loading="lazy" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href="https://codepen.io/alpha34727/pen/yLRdWxQ">
  position: absolute</a> by Alpha (<a href="https://codepen.io/alpha34727">@alpha34727</a>)
  on <a href="https://codepen.io">CodePen</a>.
</iframe>

## `position: fixed`

元素相對於視窗進行定位，即使頁面滾動，元素的位置也不會改變。

可以使用 `top`、`right`、`bottom` 和 `left` 屬性調整其位置。

### 語法：
```css
position: fixed;

top: 距離;
right: 距離;
bottom: 距離;
left: 距離;
```

### 範例：
<iframe height="400" style="width: 100%;" scrolling="no" title="position: fixed" src="https://codepen.io/alpha34727/embed/XWxLwwr?default-tab=css%2Cresult&editable=true" frameborder="no" loading="lazy" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href="https://codepen.io/alpha34727/pen/XWxLwwr">
  position: fixed</a> by Alpha (<a href="https://codepen.io/alpha34727">@alpha34727</a>)
  on <a href="https://codepen.io">CodePen</a>.
</iframe>

## `position: sticky`

結合了 `relative` 和 `fixed` 的特點。

元素基於使用者的滾動位置進行定位，當元素滾出視窗時，元素會固定在指定位置，直到使用者滾回該位置。

可以使用 `top`、`right`、`bottom` 和 `left` 屬性調整其位置。

### 語法：
```css
position: sticky;

top: 距離;
right: 距離;
bottom: 距離;
left: 距離;
```

### 範例：
<iframe height="400" style="width: 100%;" scrolling="no" title="position: sticky" src="https://codepen.io/alpha34727/embed/qBJzzEN?default-tab=css%2Cresult&editable=true" frameborder="no" loading="lazy" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href="https://codepen.io/alpha34727/pen/qBJzzEN">
  position: sticky</a> by Alpha (<a href="https://codepen.io/alpha34727">@alpha34727</a>)
  on <a href="https://codepen.io">CodePen</a>.
</iframe>
