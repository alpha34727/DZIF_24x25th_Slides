---
title: grid
tags: [CSS, Grid]

---

{%hackmd @dzif24x25/IBXIWNXgTju0h2AKtSaLkA %}
###### tags: `CSS` `Grid`

# grid

## grid（格線）是什麼？

grid（格線）是指用水平線和垂直線的交叉集合，可以將元素依照行列的規則放在 grid 上。

## grid 用法

在使用 grid 之前，必須先將`display`的值改為`grid`

### 語法：

```css
display: grid;
```



## grid template

若要使用 grid ，則必須先設定 grid template，它用於定義 grid 的結構。

grid template 包含兩個屬性：`grid-template-rows` 和 `grid-template-columns`。

### 範例

若要創建以下的 grid template，可以這樣寫：

```css
display: grid;
grid-template-rows: 100px 200px;
grid-template-columns: 1fr 2fr;
```