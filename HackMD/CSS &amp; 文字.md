---
title: CSS &amp; 文字
tags: [CSS, 文字, 字型, 段落]

---

{%hackmd @dzif24x25/IBXIWNXgTju0h2AKtSaLkA %}
###### tags: `CSS` `文字` `字型` `段落`

# CSS &amp; 文字

## 字型

### 文字大小 `font-size`

`font-size` 可用來設定文字大小，可以用數字設定，也可以用以下的值來設定：
* `xx-large`
* `x-large`
* `large`
* `medium`
* `small`
* `x-small`
* `xx-small`

範例：
<iframe height="450" style="width: 100%;" scrolling="no" title="font-size" src="https://codepen.io/alpha34727/embed/zYmPgBG?default-tab=css%2Cresult&editable=true" frameborder="no" loading="lazy" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href="https://codepen.io/alpha34727/pen/zYmPgBG">
  font-size</a> by Alpha (<a href="https://codepen.io/alpha34727">@alpha34727</a>)
  on <a href="https://codepen.io">CodePen</a>.
</iframe>

### 文字顏色 `color`

`color` 可用來設定文字顏色，可以使用以下方式設定：

* 顏色名稱 (如：`red`, `blue`, `green`)
* HEX 值 (如：`#FF0000`, `#0000FF`, `#008000`)
* RGB 值 (如：`rgb(255, 0, 0)`, `rgb(0, 0, 255)`, `rgb(0, 128, 0)`)

範例：
<iframe height="450" style="width: 100%;" scrolling="no" title="color" src="https://codepen.io/alpha34727/embed/ZEqagXY?default-tab=css%2Cresult&editable=true" frameborder="no" loading="lazy" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href="https://codepen.io/alpha34727/pen/ZEqagXY">
  color</a> by Alpha (<a href="https://codepen.io/alpha34727">@alpha34727</a>)
  on <a href="https://codepen.io">CodePen</a>.
</iframe>

### 粗體 & 斜體 `font-style`

`font-style` 可用來設定文字的粗體或斜體效果，可以使用以下方式設定：

* `normal`：標準字體 (預設值)
* `italic`：斜體字體
* `oblique`：斜體字體 (類似 `italic`，但傾斜角度不同)

範例：
<iframe height="450" style="width: 100%;" scrolling="no" title="font-style" src="https://codepen.io/alpha34727/embed/qBJVeom?default-tab=css%2Cresult&editable=true" frameborder="no" loading="lazy" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href="https://codepen.io/alpha34727/pen/qBJVeom">
  font-style</a> by Alpha (<a href="https://codepen.io/alpha34727">@alpha34727</a>)
  on <a href="https://codepen.io">CodePen</a>.
</iframe>

### 底線 `text-decoration`

`text-decoration` 可用來設定文字下方的線條樣式，可以使用以下方式設定：

* `none`：沒有線條 (預設值)
* `underline`：底線
* `overline`：上線
* `line-through`：中線
* `blink`：閃爍線

範例：
<iframe height="450" style="width: 100%;" scrolling="no" title="text-decoration" src="https://codepen.io/alpha34727/embed/YzJEmJa?default-tab=css%2Cresult&editable=true" frameborder="no" loading="lazy" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href="https://codepen.io/alpha34727/pen/YzJEmJa">
  text-decoration</a> by Alpha (<a href="https://codepen.io/alpha34727">@alpha34727</a>)
  on <a href="https://codepen.io">CodePen</a>.
</iframe>

### 文字厚度 `font-weight`

`font-weight` 可用來設定文字的粗細程度，可以使用以下方式設定：

* 數字值 (100 ~ 900)：越大越粗
* `normal`：標準字體 (等同於 400)
* `bold`：粗體字體 (等同於 700)
* `bolder`：更粗體字體
* `lighter`： 細體字體

範例：
<iframe height="450" style="width: 100%;" scrolling="no" title="font-weight" src="https://codepen.io/alpha34727/embed/dygZxad?default-tab=css%2Cresult&editable=true" frameborder="no" loading="lazy" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href="https://codepen.io/alpha34727/pen/dygZxad">
  font-weight</a> by Alpha (<a href="https://codepen.io/alpha34727">@alpha34727</a>)
  on <a href="https://codepen.io">CodePen</a>.
</iframe>

### 字型 `font-family`

`font-family` 可用來設定文字的字型，可以使用以下方式設定：

* 字型名稱 (如：`Arial`, `Times New Roman`, `微軟正黑體`)
* 一組字型名稱 (如：`sans-serif, serif, monospace`)

範例：
<iframe height="450" style="width: 100%;" scrolling="no" title="font-family" src="https://codepen.io/alpha34727/embed/RwexbrE?default-tab=css%2Cresult&editable=true" frameborder="no" loading="lazy" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href="https://codepen.io/alpha34727/pen/RwexbrE">
  font-family</a> by Alpha (<a href="https://codepen.io/alpha34727">@alpha34727</a>)
  on <a href="https://codepen.io">CodePen</a>.
</iframe>

### 補充：Web Font 網路字體

由於並不是每個人的電腦都有CSS所指定的字體，使用web font可以讓瀏覽器自動下載這些字體，讓電腦中沒有這些字體的使用者也能使用這些字體。

常用的Web Font服務有Google Fonts、Adobe Fonts等。使用Web Font時需要在HTML文件的`<head>`元素中加入`<link>`元素，將字體檔案連結進來。

以Google Fonts為例：

1. 前往Google Fonts (https://fonts.google.com/)
   ![](https://i.imgur.com/bGXZ4yo.png)

2. 挑選喜歡的字體
   ![](https://i.imgur.com/9jBNr8C.png)

3. 選擇字體，此時可在右上角的`Selected family`看到已選擇的字體
   ![](https://i.imgur.com/y98pP4i.gif)
   
4. 複製
   ![](https://i.imgur.com/venshtK.gif)
   
5. 貼上至HTML檔案裡的`<head></head>`中
   ![](https://i.imgur.com/Q0iPdrh.gif)

6. 即可在CSS中套用想要的字體
   ![](https://i.imgur.com/se4Rup4.png)



## 段落

### 文字對齊 `text-align`

`text-align` 可用來設定文字在容器中的對齊方式，可以使用以下方式設定：

* `left`: 靠左對齊 (預設值)
* `center`: 置中對齊
* `right`: 靠右對齊
* `justify`: 兩端對齊

範例：
<iframe height="450" style="width: 100%;" scrolling="no" title="text-align" src="https://codepen.io/alpha34727/embed/eYPyObV?default-tab=css%2Cresult&editable=true" frameborder="no" loading="lazy" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href="https://codepen.io/alpha34727/pen/eYPyObV">
  text-align</a> by Alpha (<a href="https://codepen.io/alpha34727">@alpha34727</a>)
  on <a href="https://codepen.io">CodePen</a>.
</iframe>

### 字元間距 `letter-spacing`

`letter-spacing` 可用來設定文字字元間的距離，可以使用以下方式設定

* 數字值 (正負皆可)：越大距離越遠
* `normal`：標準字元間距 (預設值)

範例：
<iframe height="450" style="width: 100%;" scrolling="no" title="letter-spacing" src="https://codepen.io/alpha34727/embed/BaqJBEK?default-tab=css%2Cresult&editable=true" frameborder="no" loading="lazy" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href="https://codepen.io/alpha34727/pen/BaqJBEK">
  letter-spacing</a> by Alpha (<a href="https://codepen.io/alpha34727">@alpha34727</a>)
  on <a href="https://codepen.io">CodePen</a>.
</iframe>

### 行高 `line-height`

`line-height` 可用來設定文字行高，可以使用以下方式設定

* 數字值 (正整數)：表示行高的倍數 (如：1.5 表示文字高度的 1.5 倍)
* `normal`：標準行高 (預設值)
* 像素值 (px)：表示行高的固定像素值

範例：
<iframe height="450" style="width: 100%;" scrolling="no" title="line-height" src="https://codepen.io/alpha34727/embed/zYmpOVL?default-tab=css%2Cresult&editable=true" frameborder="no" loading="lazy" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href="https://codepen.io/alpha34727/pen/zYmpOVL">
  line-height</a> by Alpha (<a href="https://codepen.io/alpha34727">@alpha34727</a>)
  on <a href="https://codepen.io">CodePen</a>.
</iframe>

:::info
點此前往簡報 https://hackmd.io/@dzif24x25/SkGcjwbVn
:::