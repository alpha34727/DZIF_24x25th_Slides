---
title: CSS Box Model
tags: [CSS, Box Model, margin, padding, border]

---

{%hackmd @dzif24x25/IBXIWNXgTju0h2AKtSaLkA %}
###### tags: `CSS` `Box Model` `margin` `padding` `border`

# CSS Box Model

CSS Box Model（方塊模型）是 HTML 元素與 HTML 元素之間排版的重要觀念，理解和運用 Box Model 可以幫助我們控制元素的外觀、佈局和位置，從而實現所需的設計效果。

## Box Model 定義

<div class="img">

![](https://hackmd.io/_uploads/BkO2GGrLh.png)
Chrome 開發人員工具 - Box Model

</div>

Box Model 由內而外由以下四個元素組成：

* content (內容)
* padding (內邊距)
* border (邊框)
* margin (外邊距)

以下將會介紹這四個元素：

## content (內容)

content (內容) 是指 HTML 元素內部的實際內容，例如：文字、圖片等。內容的寬度和高度可以由 `width` 和 `height`來控制。

### 語法：

```css
width: 寬度;
height: 高度;
```

### 範例：

<iframe height="400" style="width: 100%;" scrolling="no" title="content" src="https://codepen.io/Alpha-Alpha/embed/oNaroaE?default-tab=css%2Cresult&editable=true" frameborder="no" loading="lazy" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href="https://codepen.io/Alpha-Alpha/pen/oNaroaE">
  content</a> by Alpha Alpha (<a href="https://codepen.io/Alpha-Alpha">@Alpha-Alpha</a>)
  on <a href="https://codepen.io">CodePen</a>.
</iframe>

## padding (內邊距)

padding (內邊距) 是指 content (內容) 與 border (邊框) 之間的區域，用於控制元素 content 與 border 之間的距離。

### 語法：

```css
padding: 上&下&左&右距離;
padding: 上&下距離 左&右距離;
padding: 上距離 左&右距離 下距離;
padding: 上距離 右距離 下距離 左距離;
```

除了同時設定各邊的padding之外，也可以分開設定

### 語法：

```css
padding-top: 距離;
padding-right: 距離;
padding-bottom: 距離;
padding-left: 距離;
```

### 範例：

<iframe height="400" style="width: 100%;" scrolling="no" title="Untitled" src="https://codepen.io/alpha34727/embed/GRYbOaz?default-tab=css%2Cresult&editable=true" frameborder="no" loading="lazy" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href="https://codepen.io/alpha34727/pen/GRYbOaz">
  Untitled</a> by Alpha (<a href="https://codepen.io/alpha34727">@alpha34727</a>)
  on <a href="https://codepen.io">CodePen</a>.
</iframe>

## border (邊框)

### 語法：

```css
border: 寬度 樣式 顏色;
```

也可以分開設定寬度、樣式、顏色

```css
border-width: 寬度;
border-style: 樣式;
border-color: 顏色;
```

### 範例：

<iframe height="400" style="width: 100%;" scrolling="no" title="Untitled" src="https://codepen.io/alpha34727/embed/xxyojrz?default-tab=css%2Cresult&editable=true" frameborder="no" loading="lazy" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href="https://codepen.io/alpha34727/pen/xxyojrz">
  Untitled</a> by Alpha (<a href="https://codepen.io/alpha34727">@alpha34727</a>)
  on <a href="https://codepen.io">CodePen</a>.
</iframe>

### border-width 語法

```css
border-width: 上&下&左&右寬度;
border-width: 上&下寬度 左&右寬度;
border-width: 上寬度 左&右寬度 下寬度;
border-width: 上寬度 右寬度 下寬度 左寬度;
```

```css
border-top-width: 寬度;
border-right-width: 寬度;
border-bottom-width: 寬度;
border-left-width: 寬度;
```

### 範例：

<iframe height="400" style="width: 100%;" scrolling="no" title="border-width" src="https://codepen.io/alpha34727/embed/PoyreMz?default-tab=css%2Cresult&editable=true" frameborder="no" loading="lazy" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href="https://codepen.io/alpha34727/pen/PoyreMz">
  border-width</a> by Alpha (<a href="https://codepen.io/alpha34727">@alpha34727</a>)
  on <a href="https://codepen.io">CodePen</a>.
</iframe>

### border-style 樣式

```css
border-style: 上&下&左&右樣式;
border-style: 上&下樣式 左&右樣式;
border-style: 上樣式 左&右樣式 下樣式;
border-style: 上樣式 右樣式 下樣式 左樣式;
```

```css
border-top-style: 樣式;
border-right-style: 樣式;
border-bottom-style: 樣式;
border-left-style: 樣式;
```

### 常用樣式：

* `none`：無邊框
* `solid`：實線
* `dotted`：點線
* `dashed`：虛線
* `double`：雙線
* `groove`：凹線
* `ridge`：凸線
* `inset`：凹進線
* `outset`：凸出線


### 範例：

<iframe height="400" style="width: 100%;" scrolling="no" title="border-style" src="https://codepen.io/alpha34727/embed/eYPwKRb?default-tab=css%2Cresult&editable=true" frameborder="no" loading="lazy" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href="https://codepen.io/alpha34727/pen/eYPwKRb">
  border-style</a> by Alpha (<a href="https://codepen.io/alpha34727">@alpha34727</a>)
  on <a href="https://codepen.io">CodePen</a>.
</iframe>

### border-color 顏色

```css
border-color: 顏色;
```

```css
border-top-color: 顏色;
border-right-color: 顏色;
border-bottom-color: 顏色;
border-left-color: 顏色;
```

### 範例：

<iframe height="300" style="width: 100%;" scrolling="no" title="border-color" src="https://codepen.io/alpha34727/embed/BaqgPBV?default-tab=css%2Cresult&editable=true" frameborder="no" loading="lazy" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href="https://codepen.io/alpha34727/pen/BaqgPBV">
  border-color</a> by Alpha (<a href="https://codepen.io/alpha34727">@alpha34727</a>)
  on <a href="https://codepen.io">CodePen</a>.
</iframe>

## margin (外邊距)

margin (外邊距) 是指元素與其他元素之間的間距，用於控制元素的位置和佈局。

### 語法：

```css
margin: 上&下&左&右距離;
margin: 上&下距離 左&右距離;
margin: 上距離 左&右距離 下距離;
margin: 上距離 右距離 下距離 左距離;
```

```css
margin-top: 距離;
margin-right: 距離;
margin-bottom: 距離;
margin-left: 距離;
```

### 範例：

<iframe height="400" style="width: 100%;" scrolling="no" title="margin" src="https://codepen.io/alpha34727/embed/wvYLxXZ?default-tab=css%2Cresult&editable=true" frameborder="no" loading="lazy" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href="https://codepen.io/alpha34727/pen/wvYLxXZ">
  margin</a> by Alpha (<a href="https://codepen.io/alpha34727">@alpha34727</a>)
  on <a href="https://codepen.io">CodePen</a>.
</iframe>

:::info
註：margin的距離可以 < 0
:::

### 範例：margin的距離 < 0

<iframe height="400" style="width: 100%;" scrolling="no" title="margin&lt;0" src="https://codepen.io/alpha34727/embed/ZEqdjqO?default-tab=css%2Cresult&editable=true" frameborder="no" loading="lazy" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href="https://codepen.io/alpha34727/pen/ZEqdjqO">
  margin&lt;0</a> by Alpha (<a href="https://codepen.io/alpha34727">@alpha34727</a>)
  on <a href="https://codepen.io">CodePen</a>.
</iframe>

### margin邊距重疊 （margin collapse）

當兩個相鄰的元素具有垂直方向的margin時，它們的margin會發生重疊（margin collapse）的現象。這種重疊可能會使元素之間的間距比預期的更小。

margin邊距重疊的規則如下：

1.  當上方元素的margin-bottom和下方元素的margin-top相遇時，兩個margin會重疊，並取其中較大的值作為最終的間距。
    
2.  如果上方元素的margin-bottom為零或負值，或下方元素的margin-top為零或負值，則不會發生重疊。
    
3.  如果一個元素包含另一個元素，且兩者的margin都是正值，則內部元素的margin會重疊到外部元素的margin上。

### 範例：

<iframe height="400" style="width: 100%;" scrolling="no" title="margin collapse" src="https://codepen.io/alpha34727/embed/mdzZjZa?default-tab=css%2Cresult&editable=true" frameborder="no" loading="lazy" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href="https://codepen.io/alpha34727/pen/mdzZjZa">
  margin collapse</a> by Alpha (<a href="https://codepen.io/alpha34727">@alpha34727</a>)
  on <a href="https://codepen.io">CodePen</a>.
</iframe>

:::info
點此前往簡報 https://hackmd.io/@dzif24x25/S1bL6WvUh
:::