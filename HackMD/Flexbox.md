---
title: Flexbox
tags: [CSS, Flexbox]

---

{%hackmd @dzif24x25/IBXIWNXgTju0h2AKtSaLkA %}
###### tags: `CSS` `Flexbox`

# Flexbox

Flexbox（彈性盒子）是為了適應不同的大小的螢幕和裝置而生的排版方式。

## Flexbox 概念

<svg id="a" data-name="圖層 1" xmlns="http://www.w3.org/2000/svg" viewBox="0 0 1920 1080">
  <rect x="163.45" y="196.96" width="1593.11" height="644.07" style="fill: #72b9f3;"/>
  <rect x="212.24" y="249.41" width="747.76" height="539.17" style="fill: #f5d247;"/>
  <rect x="988.06" y="249.41" width="345.26" height="539.17" style="fill: #f5d247;"/>
  <text transform="translate(212.24 970.34)" style="font-family: Poppins-Medium, Poppins; font-size: 60.99px; font-weight: 500;"><tspan x="0" y="0">flex container</tspan></text>
  <text transform="translate(208.58 1069.14)" style="font-family: NotoSansTC-Medium-90ms-RKSJ-H, &apos;Noto Sans TC&apos;; font-size: 60.99px; font-weight: 500;"><tspan x="0" y="0">彈性容器</tspan></text>
  <line x1="746.53" y1="826.39" x2="630.64" y2="994.73" style="fill: none; stroke: #72b9f3; stroke-linecap: round; stroke-miterlimit: 10; stroke-width: 12px;"/>
  <line x1="203.7" y1="994.73" x2="630.64" y2="994.73" style="fill: none; stroke: #72b9f3; stroke-linecap: round; stroke-miterlimit: 10; stroke-width: 12px;"/>
  <text transform="translate(1417.44 56.68)" style="font-family: Poppins-Medium, Poppins; font-size: 60.99px; font-weight: 500;"><tspan x="0" y="0">flex item</tspan></text>
  <text transform="translate(1439.4 155.48)" style="font-family: NotoSansTC-Medium-90ms-RKSJ-H, &apos;Noto Sans TC&apos;; font-size: 60.99px; font-weight: 500;"><tspan x="0" y="0">彈性項目</tspan></text>
  <line x1="1377.18" y1="81.07" x2="1679.7" y2="81.07" style="fill: none; stroke: #f5d247; stroke-linecap: round; stroke-miterlimit: 10; stroke-width: 12px;"/>
  <line x1="1230.8" y1="276.25" x2="1377.18" y2="81.07" style="fill: none; stroke: #f5d247; stroke-linecap: round; stroke-miterlimit: 10; stroke-width: 12px;"/>
  <rect x="1362.34" y="249.41" width="346.39" height="539.17" style="fill: #f5d247;"/>
</svg>

### flex container（彈性容器）

包住 flex item (彈性項目) 的父元素。在屬性用上 `flex` 或 `inline-flex` 值的，就是彈性容器。

### flex item（彈性項目）

flex item（彈性項目）是指在 flex container（彈性容器）內部的子元素，它們是直接受到 Flexbox 模型控制的元素。flex item 可以根據 flex container 的設定和彈性屬性（flex properties）來進行排列、對齊和調整大小。


## Flexbox 使用

可以將 `display` 的值設定為 `flex` 或 `inline-flex`

### 語法：

```css
display: flex;
display: inline-flex;
```

:::info
`flex` 和 `inline-flex` 的區別：
* `flex` 會讓 flex container 變成區塊元素
* `inline-flex` 會讓 flex container 變成行內元素
:::

### 範例：沒有使用 Flexbox

<iframe height="400" style="width: 100%;" scrolling="no" title="w/ flex" src="https://codepen.io/alpha34727/embed/eYPqYOq?default-tab=css%2Cresult&editable=true" frameborder="no" loading="lazy" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href="https://codepen.io/alpha34727/pen/eYPqYOq">
  w/ flex</a> by Alpha (<a href="https://codepen.io/alpha34727">@alpha34727</a>)
  on <a href="https://codepen.io">CodePen</a>.
</iframe>

### 範例：使用 Flexbox

<iframe height="400" style="width: 100%;" scrolling="no" title="display: flex" src="https://codepen.io/alpha34727/embed/YzJmzKZ?default-tab=css%2Cresult&editable=true" frameborder="no" loading="lazy" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href="https://codepen.io/alpha34727/pen/YzJmzKZ">
  display: flex</a> by Alpha (<a href="https://codepen.io/alpha34727">@alpha34727</a>)
  on <a href="https://codepen.io">CodePen</a>.
</iframe>

## flex-direction

`flex-direction` 可控制 Flexbox 的主軸方向，進而調整容器內物件的呈現方向。

<svg id="a" data-name="圖層 1" xmlns="http://www.w3.org/2000/svg" viewBox="0 0 1920 1080">
  <rect x="3.5" y="129.22" width="1491.57" height="603.02" style="fill: #72b9f3;"/>
  <rect x="775.55" y="178.33" width="323.25" height="504.8" style="fill: #f5d247;"/>
  <rect x="1125.98" y="178.33" width="324.31" height="504.8" style="fill: #f5d247;"/>
  <rect x="49.18" y="178.33" width="700.1" height="504.8" style="fill: #f5d247;"/>
  <text transform="translate(1539.61 509.53)" style="font-family: NotoSansTC-Medium-90ms-RKSJ-H, &apos;Noto Sans TC&apos;; font-size: 57.1px; font-weight: 500;"><tspan x="0" y="0">主軸</tspan></text>
  <line x1="749.28" y1="886.42" x2="749.28" y2="136.07" style="fill: none; stroke: #ff2a2a; stroke-linecap: round; stroke-miterlimit: 10; stroke-width: 12px;"/>
  <line x1="11.49" y1="430.73" x2="1916.5" y2="430.73" style="fill: none; stroke: #ff2a2a; stroke-linecap: round; stroke-miterlimit: 10; stroke-width: 12px;"/>
  <text transform="translate(1535.04 398.75)" style="font-family: Poppins-Medium, Poppins; font-size: 57.1px; font-weight: 500;"><tspan x="0" y="0">main axis</tspan></text>
  <text transform="translate(850.93 890.99)" style="font-family: NotoSansTC-Medium-90ms-RKSJ-H, &apos;Noto Sans TC&apos;; font-size: 57.1px; font-weight: 500;"><tspan x="0" y="0">相交軸</tspan></text>
  <text transform="translate(848.65 817.9)" style="font-family: Poppins-Medium, Poppins; font-size: 57.1px; font-weight: 500;"><tspan x="0" y="0">cross axis</tspan></text>
  <g>
    <line x1="1916.5" y1="430.73" x2="1851.4" y2="365.63" style="fill: none; stroke: #ff2a2a; stroke-linecap: round; stroke-miterlimit: 10; stroke-width: 12px;"/>
    <line x1="1851.4" y1="495.83" x2="1916.5" y2="430.73" style="fill: none; stroke: #ff2a2a; stroke-linecap: round; stroke-miterlimit: 10; stroke-width: 12px;"/>
  </g>
  <g>
    <line x1="748.71" y1="887" x2="813.81" y2="821.9" style="fill: none; stroke: #ff2a2a; stroke-linecap: round; stroke-miterlimit: 10; stroke-width: 12px;"/>
    <line x1="683.61" y1="821.9" x2="748.71" y2="887" style="fill: none; stroke: #ff2a2a; stroke-linecap: round; stroke-miterlimit: 10; stroke-width: 12px;"/>
  </g>
</svg>

### 語法：

```css
flex-direction: row;
flex-direction: row-reverse;
flex-direction: column;
flex-direction: column-reverse;
```

### 範例：
<iframe height="450" style="width: 100%;" scrolling="no" title="flex-direction" src="https://codepen.io/alpha34727/embed/zYmgYJo?default-tab=result&editable=true" frameborder="no" loading="lazy" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href="https://codepen.io/alpha34727/pen/zYmgYJo">
  flex-direction</a> by Alpha (<a href="https://codepen.io/alpha34727">@alpha34727</a>)
  on <a href="https://codepen.io">CodePen</a>.
</iframe>

## justify-content

`justify-content` 可控制 Flexbox 容器內 flex item 在**主軸**上的對齊方式。

### 語法：

```css
justify-content: flex-start;
justify-content: center;
justify-content: flex-end;
justify-content: space-between;
justify-content: space-around;
```

### 範例：
<iframe height="450" style="width: 100%;" scrolling="no" title="flex-direction" src="https://codepen.io/alpha34727/embed/JjmgjJE?default-tab=result&editable=true" frameborder="no" loading="lazy" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href="https://codepen.io/alpha34727/pen/JjmgjJE">
  flex-direction</a> by Alpha (<a href="https://codepen.io/alpha34727">@alpha34727</a>)
  on <a href="https://codepen.io">CodePen</a>.
</iframe>

## align-items

與 `justify-content` 類似，但控制的是 Flexbox 容器內 flex item 在**相交軸**上的對齊方式。

```css
align-items: flex-start;
align-items: center;
align-items: flex-end;
align-items: stretch;
align-items: baseline;
```

### 範例：
<iframe height="450" style="width: 100%;" scrolling="no" title="align-items" src="https://codepen.io/alpha34727/embed/wvYVvbb?default-tab=result&editable=true" frameborder="no" loading="lazy" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href="https://codepen.io/alpha34727/pen/wvYVvbb">
  align-items</a> by Alpha (<a href="https://codepen.io/alpha34727">@alpha34727</a>)
  on <a href="https://codepen.io">CodePen</a>.
</iframe>

## Flexbox 小遊戲 - Flexbox Froggy

[Flexbox Froggy](https://flexboxfroggy.com/)