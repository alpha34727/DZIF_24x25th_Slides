---
title: CSS Box Model
tags: [CSS簡報, ' Box Model', ' margin', ' padding', ' border']

---

---
type: slide
tags: CSS簡報, Box Model, margin, padding, border
---

{%hackmd @dzif24x25/yRBnguqQQl-2ylH1j5h0cg %}

# CSS Box Model

HTML 元素與 HTML 元素排版的重要概念

---

## 內而外由以下四個元素組成

* content (內容)
* padding (內邊距)
* border (邊框)
* margin (外邊距)

![](https://hackmd.io/_uploads/BkO2GGrLh.png)

---

## content (內容)

---

## content (內容) 
HTML 元素內部的實際內容

---

## 語法

```css
width: 寬度;
height: 高度;
```

---

### 範例

html
```htmlembedded=
<div class="box">
    Hello, World!
</div>
```

css
```css=
.box{
    width: 200px;
    height: 100px;
    color: #FFFFFF;
    background-color: #2D5BEE;
}
```

---

### 範例成果

<iframe height="600" style="width: 100%;" scrolling="no" title="content" src="https://codepen.io/Alpha-Alpha/embed/oNaroaE?default-tab=result&editable=true" frameborder="no" loading="lazy" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href="https://codepen.io/Alpha-Alpha/pen/oNaroaE">
  content</a> by Alpha Alpha (<a href="https://codepen.io/Alpha-Alpha">@Alpha-Alpha</a>)
  on <a href="https://codepen.io">CodePen</a>.
</iframe>

---

## padding (內邊距)

控制 content 與 border 之間的距離

---

### 語法：

```css
padding: 上&下&左&右距離;
padding: 上&下距離 左&右距離;
padding: 上距離 左&右距離 下距離;
padding: 上距離 右距離 下距離 左距離;
```

---

### 分開設定padding的值

```css
padding-top: 距離;
padding-right: 距離;
padding-bottom: 距離;
padding-left: 距離;
```

---

### 範例

html

```htmlembedded=
<div class="box1">
    <img src="https://uploads-public.hackmd.io/syAXAme.png" class="img">
</div>

<div class="box2">
    <img src="https://uploads-public.hackmd.io/syAXAme.png" class="img">
</div>
```

---

### 範例

css

```css=
.img{
    width: 100%;
    height: 100%;
}

.box1{
    width:100px;
    height: 100px;
    
    /* 上下左右各padding 20px */
    padding: 20px;
    
    background-color: #F5D247;
}

.box2{
    width:100px;
    height: 100px;
    
    /* 左padding 50px */
    padding-left: 50px;
    
    /* 右padding 10px */
    padding-right: 10px;
    
    background-color: #EB4E4A;
}
```

---

### 範例成果

<iframe height="600" style="width: 100%;" scrolling="no" title="Untitled" src="https://codepen.io/alpha34727/embed/GRYbOaz?default-tab=result&editable=true" frameborder="no" loading="lazy" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href="https://codepen.io/alpha34727/pen/GRYbOaz">
  Untitled</a> by Alpha (<a href="https://codepen.io/alpha34727">@alpha34727</a>)
  on <a href="https://codepen.io">CodePen</a>.
</iframe>

---

## border (邊框)

---

### 語法

```css
border: 寬度 樣式 顏色;
```

---

### 分開設定寬度、樣式、顏色

```css
border-width: 寬度;
border-style: 樣式;
border-color: 顏色;
```

---

### 範例

html
```htmlembedded=
<div class="box1">
    測試 Box1
</div>

<div class="box2">
    測試 Box2
</div>
```

---

### 範例

css
```css=
.box1{
    width: 200px;
    height: 150px;
    border: 1px solid #000000;
}

.box2{
    width: 200px;
    height: 150px;
    border-width: 1px;
    border-style: solid;
    border-color: #000000;
}
```

---

### 範例成果

<iframe height="600" style="width: 100%;" scrolling="no" title="Untitled" src="https://codepen.io/alpha34727/embed/xxyojrz?default-tab=result&editable=true" frameborder="no" loading="lazy" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href="https://codepen.io/alpha34727/pen/xxyojrz">
  Untitled</a> by Alpha (<a href="https://codepen.io/alpha34727">@alpha34727</a>)
  on <a href="https://codepen.io">CodePen</a>.
</iframe>

---

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

---

### 範例

html
```htmlembedded
<div class="box">
    測試 Box1
</div>
```

css
```css=
.box{
    width: 200px;
    height: 150px;
    border-top-width: 1px;
    border-bottom-width: 10px;
    border-left-width: 50px;
    border-right-width: 50px;
    border-style: solid;
    border-color: #000000;
}
```

---

### 範例成果

<iframe height="600" style="width: 100%;" scrolling="no" title="border-width" src="https://codepen.io/alpha34727/embed/PoyreMz?default-tab=result&editable=true" frameborder="no" loading="lazy" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href="https://codepen.io/alpha34727/pen/PoyreMz">
  border-width</a> by Alpha (<a href="https://codepen.io/alpha34727">@alpha34727</a>)
  on <a href="https://codepen.io">CodePen</a>.
</iframe>

---

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

---

### 常用樣式

* `none`：無邊框
* `solid`：實線
* `dotted`：點線
* `dashed`：虛線
* `double`：雙線
* `groove`：凹線
* `ridge`：凸線
* `inset`：凹進線
* `outset`：凸出線

---

### 樣式範例

<iframe height="600" style="width: 100%;" scrolling="no" title="border-style" src="https://codepen.io/alpha34727/embed/eYPwKRb?default-tab=result&editable=true" frameborder="no" loading="lazy" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href="https://codepen.io/alpha34727/pen/eYPwKRb">
  border-style</a> by Alpha (<a href="https://codepen.io/alpha34727">@alpha34727</a>)
  on <a href="https://codepen.io">CodePen</a>.
</iframe>

---

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

---

### 範例

html
```htmlembedded=
<div class="box">
    測試
</div>
```

css
```css=
.box{
    width: 200px;
    height: 150px;
    border-width: 5px;
    border-style: solid;
    border-color: #57BBF9;
}
```

---

### 範例成果

<iframe height="600" style="width: 100%;" scrolling="no" title="border-color" src="https://codepen.io/alpha34727/embed/BaqgPBV?default-tab=result&editable=true" frameborder="no" loading="lazy" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href="https://codepen.io/alpha34727/pen/BaqgPBV">
  border-color</a> by Alpha (<a href="https://codepen.io/alpha34727">@alpha34727</a>)
  on <a href="https://codepen.io">CodePen</a>.
</iframe>

---

## margin (外邊距)

元素與其他元素之間的間距
用於控制元素的位置和佈局

---

### 語法

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

---

### 範例

html
```htmlembedded=
<div class="box1">
</div>

<div class="box2">
    margin: 15px;
</div>

<div class="box3">
</div>
```

---

### 範例

css
```css=
.box1{
    width: 150px;
    height: 100px;
    background-color: #57BBF9;
}

.box2{
    width: 150px;
    height: 100px;
    margin: 15px;
    background-color: #F5D247;
}

.box3{
    width: 150px;
    height: 100px;
    background-color: #EB4E4A;
}
```

---

### 範例成果

<iframe height="600" style="width: 100%;" scrolling="no" title="margin" src="https://codepen.io/alpha34727/embed/wvYLxXZ?default-tab=Cresult&editable=true" frameborder="no" loading="lazy" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href="https://codepen.io/alpha34727/pen/wvYLxXZ">
  margin</a> by Alpha (<a href="https://codepen.io/alpha34727">@alpha34727</a>)
  on <a href="https://codepen.io">CodePen</a>.
</iframe>

---

### 範例：margin的距離 < 0

html
```htmlembedded=
<div class="box1">
</div>

<div class="box2">
    margin-top: -50px;
    margin-left: 50px;
</div>
```

---

### 範例：margin的距離 < 0

css
```css=
.box1{
    width: 150px;
    height: 100px;
    background-color: rgb(114, 185, 243, 0.5);
}

.box2{
    width: 150px;
    height: 100px;
    margin-top: -50px;
    margin-left: 50px;
    background-color: rgb(239, 211, 97, 0.5);
}
```

---

### 範例成果：margin的距離 < 0

<iframe height="600" style="width: 100%;" scrolling="no" title="margin&lt;0" src="https://codepen.io/alpha34727/embed/ZEqdjqO?default-tab=result&editable=true" frameborder="no" loading="lazy" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href="https://codepen.io/alpha34727/pen/ZEqdjqO">
  margin&lt;0</a> by Alpha (<a href="https://codepen.io/alpha34727">@alpha34727</a>)
  on <a href="https://codepen.io">CodePen</a>.
</iframe>

---

### margin邊距重疊 （margin collapse）

當上方元素的margin-bottom和下方元素的margin-top相遇時，兩個margin會重疊，並取其中較大的值作為最終的間距。

---

### 範例

<iframe height="400" style="width: 100%;" scrolling="no" title="margin collapse" src="https://codepen.io/alpha34727/embed/mdzZjZa?default-tab=css%2Cresult&editable=true" frameborder="no" loading="lazy" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href="https://codepen.io/alpha34727/pen/mdzZjZa">
  margin collapse</a> by Alpha (<a href="https://codepen.io/alpha34727">@alpha34727</a>)
  on <a href="https://codepen.io">CodePen</a>.
</iframe>
