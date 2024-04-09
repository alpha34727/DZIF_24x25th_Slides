---
title: CSS &amp; 文字
tags: [CSS簡報, ' CSS', ' 文字', ' 字型', ' 段落']

---

---
type: slide
tags: CSS簡報, CSS, 文字, 字型, 段落
---

{%hackmd @dzif24x25/yRBnguqQQl-2ylH1j5h0cg %}

# CSS &amp; 文字

---

## 字型

---

## `font-size`

設定文字大小

---

可以用數字設定，也可以用以下的值來設定：
* `xx-large`
* `x-large`
* `large`
* `medium`
* `small`
* `x-small`
* `xx-small`

---

### 範例

HTML：
```htmlembedded=
<p class="large">large 測試</p>
<p class="small">small 測試</p>
<p class="_18px">18px 測試</p>
<p class="_150percent">150% 測試</p>
<p class="_1cm">1cm測試</p>
```

---

CSS：
```css=
.large {
    font-size: large;
}

.small {
    font-size: small;
}

._18px {
    font-size: 18px;
}

._150percent {
    font-size: 150%;
}

._1cm {
    font-size: 1cm;
}
```

---

![](https://i.imgur.com/jdX6lIP.png =100%x)

---

## `color`

設定文字顏色

---

### 可以使用以下方式設定：

* 顏色名稱：
`red`, `blue`, `green`
* HEX 值：
`#FF0000`, `#0000FF`, `#008000`
* RGB 值：
`rgb(255, 0, 0)`

---

### 範例

HTML：
```htmlembedded=
<p class="red">紅色</p>
<p class="orange">橙色</p>
<p class="yellow">黃色</p>
<p class="green">綠色</p>
<p class="blue">藍色</p>
<p class="indigo">靛色</p>
<p class="purple">紫色</p>
```

---

CSS：
```css=
.red {
    color: red;
}

.orange {
    color: #FFA500;
}

.yellow {
    color: rgb(255, 255, 0);
}

.green {
    color: green;
}

.blue {
    color: #0000FF
}

.indigo {
    color: #4B0082
}

.purple {
    color: purple;
}
```

---

![](https://i.imgur.com/63wQocv.png =50%x)

---

## `font-style`

設定文字的粗體 & 斜體

---

* `normal`：標準字體 (預設值)
* `italic`：斜體字體
* `oblique`：斜體字體 (類似 `italic`，但傾斜角度不同)

---

### 範例

HTML：
```htmlembedded=
<p class="normal">normal 標準字體</p>
<p class="italic">italic 斜體字體</p>
<p class="oblique">oblique 斜體字體</p>
```

CSS：
```css=
.normal {
    font-style: normal;
}

.italic {
    font-style: italic;
}

.oblique {
    font-style: oblique;
}
```

---

![](https://i.imgur.com/7zN7CKe.png =80%x)

---

## `text-decoration`

設定文字下方的線條樣式

---

* `none`：沒有線條 (預設值)
* `underline`：底線
* `overline`：上線
* `line-through`：中線
* `blink`：閃爍線

---

### 範例

HTML：
```htmlembedded=
<p class="none">none 沒有線條</p>
<p class="underline">underline 底線</p>
<p class="overline">overline 上線</p>
<p class="line-through">line-through 中線</p>
<p class="blink">blink 閃爍線</p>
```

---

CSS：
```css=
.none {
    text-decoration: none
}

.underline {
    text-decoration: underline
}

.overline {
    text-decoration: overline
}

.line-through {
    text-decoration: line-through
}

.blink {
    text-decoration: blink
}
```

---

![](https://i.imgur.com/LKI7Jsx.png =70%x)


---

## `font-weight`

設定文字的粗細程度

---

* 數字值 (100 ~ 900)：越大越粗
* `normal`：標準字體 (等同於 400)
* `bold`：粗體字體 (等同於 700)
* `bolder`：更粗體字體
* `lighter`： 細體字體

---

### 範例

HTML：
```htmlembedded=
<p class="_100">100</p>
<p class="_200">200</p>
<p class="_300">300</p>
<p class="_400">400</p>
<p class="normal">normal</p>
<p class="_500">500</p>
<p class="_600">600</p>
<p class="_700">700</p>
<p class="bold">bold</p>
<p class="_700">800</p>
<p class="_900">900</p>
<p class="bolder">bolder</p>
<p class="lighter">lighter</p>
```

---

CSS：
```css=
._100 {
    font-weight: 100;
}

._200 {
    font-weight: 200;
}

._300 {
    font-weight: 300;
}

._400 {
    font-weight: 400;
}

._500 {
    font-weight: 500;
}

._600 {
    font-weight: 600;
}

._700 {
    font-weight: 700;
}

._800 {
    font-weight: 800;
}

._900 {
    font-weight: 900;
}
.normal {
    font-weight: normal;
}

.bold {
    font-weight: bold;
}

.bolder {
    font-weight: bolder;
}

.lighter {
    font-weight: lighter;
}
```

---

![](https://i.imgur.com/WvCoS0k.png =80%x)

---

## `font-family`

設定文字的字型

---

* 字型名稱
`Arial`
`Times New Roman`
`微軟正黑體`
* 一組字型名稱
`sans-serif, serif, monospace`

---

### 範例

HTML：
```htmlembedded=
<p class="arial">Arial</p>
<p class="times_new_roman">Times New Roman</p>
<p class="MSJhengHei">微軟正黑體</p>
<p class="font-set">sans-serif, serif, monospace</p>
```

---

CSS：
```css=
.arial {
    font-family: Arial;
}

.times_new_roman {
    font-family: Times New Roman;
}

.MSJhengHei {
    font-family: 微軟正黑體;
}

.font-set {
    font-family: sans-serif, serif, monospace;
}

p {
    font-size: 2em;
}
```

---

![](https://i.imgur.com/oITyBrM.png =80%x)

---

## 補充：Web Font 網路字體

---

讓瀏覽器自動下載這些字體，電腦中沒有指定字體的使用者也能使用這些字體

---

### 常用Web Font服務
* Google Fonts
* Adobe Fonts

---

### 以Google Fonts為例

1. 前往Google Fonts (https://fonts.google.com/)
   ![](https://i.imgur.com/bGXZ4yo.png)

---

### 以Google Fonts為例

2. 挑選喜歡的字體
   ![](https://i.imgur.com/9jBNr8C.png)

---

### 以Google Fonts為例

3. 選擇字體，此時可在右上角的`Selected family`看到已選擇的字體
   ![](https://i.imgur.com/y98pP4i.gif)

---

### 以Google Fonts為例

4. 複製
   ![](https://i.imgur.com/venshtK.gif =80%x)

---

### 以Google Fonts為例

5. 貼上至HTML檔案裡的`<head></head>`中
   ![](https://i.imgur.com/Q0iPdrh.gif)

---

### 以Google Fonts為例

6. 即可在CSS中套用想要的字體
   ![](https://i.imgur.com/se4Rup4.png)

---

## 段落

---

## `text-align`

設定文字在容器中的對齊方式

---

* `left`: 靠左對齊 (預設值)
* `center`: 置中對齊
* `right`: 靠右對齊
* `justify`: 兩端對齊

---

### 範例

HTML：
```htmlembedded=
<p class="left">靠左對齊</p>
<p class="center">置中對齊</p>
<p class="right">靠右對齊</p>
<p class="justify">兩端對齊</p>
```

---

CSS：
```css=
.left{
    text-align: left;
}

.center{
    text-align: center;
}

.right{
    text-align: right;
}

.justify{
    text-align: justify;
}
```

---

![](https://i.imgur.com/jaIgoyF.png =80%x)

---

## `letter-spacing`

設定文字字元間的距離

---

* 數字值 (正負皆可)：越大距離越遠
* `normal`：標準字元間距 (預設值)

---

### 範例
HTML：
```htmlembedded=
<p class="_-10px">letter-spacing: -10px;</p>
<p class="_-3px">letter-spacing: -3px;</p>
<p class="normal">letter-spacing: normal;</p>
<p class="_3px">letter-spacing: 3px;</p>
<p class="_10px">letter-spacing: 10px;</p>
```

---

CSS：
```css=
._-10px {
    letter-spacing: -10px;
}

._-3px {
    letter-spacing: -3px;
}

.normal {
    letter-spacing: normal;
}

._3px {
    letter-spacing: 3px;
}

._10px {
    letter-spacing: 10px;
}
```

---

![](https://i.imgur.com/cVDCLFy.png =80%x)

---

## `line-height`

設定文字行高

---

* 數字值 (正整數)：表示行高的倍數 (如：1.5 表示文字高度的 1.5 倍)
* `normal`：標準行高 (預設值)
* 像素值 (px)：表示行高的固定像素值

---

### 範例

HTML：
```htmlembedded=
<p class="_150">line-height: 1.5;</p>
<p class="_150">line-height: 1.5;</p>
<p class="_150">line-height: 1.5;</p>
<p class="normal">line-height: normal;</p>
<p class="normal">line-height: normal;</p>
<p class="normal">line-height: normal;</p>
<p class="_10px">line-height: 10px;</p>
<p class="_10px">line-height: 10px;</p>
<p class="_10px">line-height: 10px;</p>
<p class="_50px">line-height: 50px;</p>
<p class="_50px">line-height: 50px;</p>
<p class="_50px">line-height: 50px;</p>
```

---

CSS：
```css=
._150 {
    line-height: 1.5;
}

.normal {
    line-height: normal;
}

._10px {
    line-height: 10px;
}

._50px {
    line-height: 50px;
}
```

---

![](https://i.imgur.com/7ttRg7y.png =50%x)
