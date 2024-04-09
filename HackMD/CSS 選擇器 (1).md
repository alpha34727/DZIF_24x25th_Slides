---
title: CSS 選擇器
tags: [CSS, 選擇器]

---

{%hackmd @dzif24x25/IBXIWNXgTju0h2AKtSaLkA %}
###### tags: `CSS` `選擇器`

# CSS 選擇器

![](https://i.imgur.com/9f9yzG6.png =100%x)

選擇器 (Selector)，可用來選擇欲影響的元素，常見有以下幾種：

* 基本選擇器
  * [元素選擇器 (Type selector)](#元素選擇器-Type-selector)
  * [Class 選擇器 (Class selector)](#Class-選擇器-Class-selector)
  * [ID 選擇器 (ID selector)](#ID-選擇器-ID-selector)
  * [屬性選擇器 (Attribute selector)](#屬性選擇器-Attribute-selector)
  * [通用選擇器 (Universal selector)](#通用選擇器-Universal-selector)

* 分組選擇器
  * [選擇器列表 (Selector list)](#選擇器列表-Selector-list)

* 組合選擇器
  * [後代選擇器 (Descendant combinator)](#後代選擇器-Descendant-combinator)
  * [子代選擇器 (Child combinator)](#子代選擇器-Child-combinator)
  * [一般兄弟選擇器 (General sibling combinator)](#一般兄弟選擇器-General-sibling-combinator)
  * [相鄰兄弟選擇器 (Adjacent sibling combinator)](#相鄰兄弟選擇器-Adjacent-sibling-combinator)

* 偽選擇器
  * [偽類 (Pseudo classes)](#偽類-Pseudo-classes)
  * [偽元素 (Pseudo elements)](#偽元素-Pseudo-elements)

以下將會一一介紹它們

## 基本選擇器

### 元素選擇器 (Type selector)

指定所有 HTML 元素中的特定元素

語法：
```css
元素 { 屬性值 }
```

範例：選取所有 `<h1>` 元素，將其文字顏色改為<font style="color: #76b900;">#76b900</font>

<iframe height="450" style="width: 100%;" scrolling="no" title="Type selector" src="https://codepen.io/alpha34727/embed/RwqNPrE?default-tab=css%2Cresult&editable=true" frameborder="no" loading="lazy" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href="https://codepen.io/alpha34727/pen/RwqNPrE">
  Type selector</a> by Alpha (<a href="https://codepen.io/alpha34727">@alpha34727</a>)
  on <a href="https://codepen.io">CodePen</a>.
</iframe>

### Class 選擇器 (Class selector)

指定有特定CSS的HTML元素

語法：
```css
.Class名稱 { 屬性值 }
```

範例：選取有`vram-size` Class 的 HTML 元素，將其文字顏色改為<font style="color: red;">紅色</font>
<iframe height="450" style="width: 100%;" scrolling="no" title="Class selector" src="https://codepen.io/alpha34727/embed/yLQyNVV?default-tab=css%2Cresult&editable=true" frameborder="no" loading="lazy" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href="https://codepen.io/alpha34727/pen/yLQyNVV">
  Class selector</a> by Alpha (<a href="https://codepen.io/alpha34727">@alpha34727</a>)
  on <a href="https://codepen.io">CodePen</a>.
</iframe>

### ID 選擇器 (ID selector)

指定有特定ID的HTML元素

語法：
```css
.ID名稱 { 屬性值 }
```

範例：指定有 `title` ID 的 HTML 元素，將其文字顏色改為<font style="color: red;">紅色</font>
<iframe height="450" style="width: 100%;" scrolling="no" title="ID selector" src="https://codepen.io/alpha34727/embed/NWEPqpG?default-tab=css%2Cresult&editable=true" frameborder="no" loading="lazy" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href="https://codepen.io/alpha34727/pen/NWEPqpG">
  ID selector</a> by Alpha (<a href="https://codepen.io/alpha34727">@alpha34727</a>)
  on <a href="https://codepen.io">CodePen</a>.
</iframe>

### 屬性選擇器 (Attribute selector)

指定含有特定屬性的 HTML 元素

語法：

選取有<font color=red>屬性</font> `attr` 的 HTML 元素
```css
[attr] { 屬性值 }
```

選取有屬性 `attr` ，且<font color=red>屬性值為</font> `value` 的 HTML 元素
```css
[attr=value] { 屬性值 }
```

選取有屬性 `attr` ，屬性值以<font color=red>空格分割</font>屬性值，其中至少一個元素為 `value`
```css
[attr~=value] { 屬性值 }
```

選取有屬性 `attr` ，且屬性值以 `value` 或 `value-` <font color=red>開頭</font>的 HTML 元素
```css
[attr|=value] { 屬性值 }
```

選取有屬性 `attr` ，且屬性值以 `value` <font color=red>開頭</font>的 HTML 元素
```css
[attr^=value] { 屬性值 }
```

選取有屬性 `attr` ，且屬性值以 `value` <font color=red>結尾</font>的 HTML 元素
```css
[attr$=value] { 屬性值 }
```

選取有屬性 `attr` ，且屬性值<font color=red>包含</font> `value` 的 HTML 元素
```css
[attr*=value] { 屬性值 }
```

範例：
<iframe height="450" style="width: 100%;" scrolling="no" title="Attribute selector" src="https://codepen.io/alpha34727/embed/oNQgXyJ?default-tab=css%2Cresult&editable=true" frameborder="no" loading="lazy" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href="https://codepen.io/alpha34727/pen/oNQgXyJ">
  Attribute selector</a> by Alpha (<a href="https://codepen.io/alpha34727">@alpha34727</a>)
  on <a href="https://codepen.io">CodePen</a>.
</iframe>


### 通用選擇器 (Universal selector)

指定所有 HTML 元素

語法：
```css
* { 屬性值 }
```
範例：選取所有 HTML 元素，將其文字顏色改為<font style="color: red;">紅色</font>

<iframe height="450" style="width: 100%;" scrolling="no" title="Universal selector" src="https://codepen.io/alpha34727/embed/vYQEOOV?default-tab=css%2Cresult&editable=true" frameborder="no" loading="lazy" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href="https://codepen.io/alpha34727/pen/vYQEOOV">
  Universal selector</a> by Alpha (<a href="https://codepen.io/alpha34727">@alpha34727</a>)
  on <a href="https://codepen.io">CodePen</a>.
</iframe>

## 分組選擇器

### 選擇器列表 (Selector list)

使用 逗點(`,`) 來同時使用多種選擇器

範例：

<iframe height="450" style="width: 100%;" scrolling="no" title="Untitled" src="https://codepen.io/alpha34727/embed/XWxzGmx?default-tab=css%2Cresult&editable=true" frameborder="no" loading="lazy" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href="https://codepen.io/alpha34727/pen/XWxzGmx">
  Untitled</a> by Alpha (<a href="https://codepen.io/alpha34727">@alpha34727</a>)
  on <a href="https://codepen.io">CodePen</a>.
</iframe>

## 組合選擇器

### 後代選擇器 (Descendant combinator)

選擇某個 Selector 下的 Selector

語法：選擇 selector1 下的 selector2
```css
selector1 selector2 { 屬性值 }
```

範例：
<iframe height="450" style="width: 100%;" scrolling="no" title="Descendant combinator" src="https://codepen.io/alpha34727/embed/ZEmYbGo?default-tab=css%2Cresult&editable=true" frameborder="no" loading="lazy" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href="https://codepen.io/alpha34727/pen/ZEmYbGo">
  Descendant combinator</a> by Alpha (<a href="https://codepen.io/alpha34727">@alpha34727</a>)
  on <a href="https://codepen.io">CodePen</a>.
</iframe>


### 子代選擇器 (Child combinator)

和後代選擇器 (Descendant combinator) 類似，選擇某個 Selector1 下的 Selector2，但限定 Selector2 直接在 Selector1 下面。

語法：選擇直接在 selector1 下的 selector2
```css
selector1 > selector2 { 屬性值 }
```

範例：
<iframe height="450" style="width: 100%;" scrolling="no" title="Child combinator" src="https://codepen.io/alpha34727/embed/JjeoYXV?default-tab=css%2Cresult&editable=true" frameborder="no" loading="lazy" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href="https://codepen.io/alpha34727/pen/JjeoYXV">
  Child combinator</a> by Alpha (<a href="https://codepen.io/alpha34727">@alpha34727</a>)
  on <a href="https://codepen.io">CodePen</a>.
</iframe>

### 一般兄弟選擇器 (General sibling combinator)

選取與 selector1 同層元素中，selector1 之後出現的 selector2

語法：
```css
selector1 ~ selector2 { 屬性值 }
```

範例：
<iframe height="450" style="width: 100%;" scrolling="no" title="Untitled" src="https://codepen.io/alpha34727/embed/oNQgjeg?default-tab=css%2Cresult&editable=true" frameborder="no" loading="lazy" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href="https://codepen.io/alpha34727/pen/oNQgjeg">
  Untitled</a> by Alpha (<a href="https://codepen.io/alpha34727">@alpha34727</a>)
  on <a href="https://codepen.io">CodePen</a>.
</iframe>


### 相鄰兄弟選擇器 (Adjacent sibling combinator)

和 一般兄弟選擇器 (General sibling combinator) 類似，但只會選出一個 HTML 元素

語法：
```css
selector1 + selector2 { 屬性值 }
```

範例：
<iframe height="450" style="width: 100%;" scrolling="no" title="Adjacent sibling combinator" src="https://codepen.io/alpha34727/embed/xxQbwLo?default-tab=css%2Cresult&editable=true" frameborder="no" loading="lazy" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href="https://codepen.io/alpha34727/pen/xxQbwLo">
  Adjacent sibling combinator</a> by Alpha (<a href="https://codepen.io/alpha34727">@alpha34727</a>)
  on <a href="https://codepen.io">CodePen</a>.
</iframe>

## 偽選擇器

在 CSS 中，偽選擇器可以選定處於特殊狀態或特定位置的 HTML 元素，如：游標懸停、取得焦點......等。

### 偽類 (Pseudo classes)

#### 常見的偽類有：

* `:hover`：游標懸停在 HTML 元素上
* `:active`：元素被點擊，例如：按鈕按下
* `:focus`：元素取得焦點，例如：輸入表單被選中
* `:visited`：使用者曾選取過連結
* `:first-child`：父元素下第一個子元素。
* `:last-child`：父元素下最後一個子元素。
* `:nth-child(n)`：父元素下第 n 個子元素，其中，n 可以是整數(`1`、`2`、`3`...)、表達式(`2n`、`3n-5`......)、關鍵字(`odd`、`even`)

#### `:hover` 範例：當游標懸停在圖片上時，圖片放大

<iframe height="450" style="width: 100%;" scrolling="no" title=":hover" src="https://codepen.io/alpha34727/embed/oNQgWPJ?default-tab=css%2Cresult&editable=true" frameborder="no" loading="lazy" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href="https://codepen.io/alpha34727/pen/oNQgWPJ">
  :hover</a> by Alpha (<a href="https://codepen.io/alpha34727">@alpha34727</a>)
  on <a href="https://codepen.io">CodePen</a>.
</iframe>

---

#### `:active` 範例：當按鈕按下時，改變顏色

<iframe height="450" style="width: 100%;" scrolling="no" title=":active" src="https://codepen.io/alpha34727/embed/zYMxwej?default-tab=css%2Cresult&editable=true" frameborder="no" loading="lazy" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href="https://codepen.io/alpha34727/pen/zYMxwej">
  :active</a> by Alpha (<a href="https://codepen.io/alpha34727">@alpha34727</a>)
  on <a href="https://codepen.io">CodePen</a>.
</iframe>

---

#### `:focus` 範例：當輸入表單被選中，輸入表單改變顏色

<iframe height="450" style="width: 100%;" scrolling="no" title=":focus" src="https://codepen.io/alpha34727/embed/GRwgEKJ?default-tab=css%2Cresult&editable=true" frameborder="no" loading="lazy" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href="https://codepen.io/alpha34727/pen/GRwgEKJ">
  :focus</a> by Alpha (<a href="https://codepen.io/alpha34727">@alpha34727</a>)
  on <a href="https://codepen.io">CodePen</a>.
</iframe>

---

#### `:visited` 範例：將所有已選取過的連結顏色改為灰色

HTML：
```htmlembedded=
<p>一些連結：</p>
<ul>
    <li><a href="https://www.google.com" target="_blank">Google</a></li>
    <li><a href="https://web.dcsh.tp.edu.tw" target="_blank">大直高中</a></li>
    <li><a href="https://themoodyoldman.github.io/" target="_blank">大直高中資訊社</a></li>
    <li><a href="https://bit.ly/3H0xM3y" target="_blank">不要點我</a></li>
</ul>
```

CSS：
```css=
a:visited {
    color: gray;
}
```

<div style="background-color: #000000; color: #FFFFFF;border-radius: 1rem 1rem 0rem 0rem; padding: 0.7rem 1.75rem 0.7rem 1.75rem; font-size: 2rem">
    範例結果
</div>
<div style="border: 1px solid #000000; border-radius: 1rem; padding: 1.75rem; border-radius: 0rem 0rem 1rem 1rem;">
    
<style>
    a:visited {
        color: gray;
    }
</style>
    
<p>一些連結：</p>
<ul>
    <li><a href="https://www.google.com" target="_blank">Google</a></li>
    <li><a href="https://web.dcsh.tp.edu.tw" target="_blank">大直高中</a></li>
    <li><a href="https://themoodyoldman.github.io/" target="_blank">大直高中資訊社</a></li>
    <li><a href="https://bit.ly/3H0xM3y" target="_blank">不要點我</a></li>
</ul>

</div>

---

#### `:first-child` 範例：

<iframe height="450" style="width: 100%;" scrolling="no" title=":first-child" src="https://codepen.io/alpha34727/embed/MWzYoOq?default-tab=css%2Cresult&editable=true" frameborder="no" loading="lazy" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href="https://codepen.io/alpha34727/pen/MWzYoOq">
  :first-child</a> by Alpha (<a href="https://codepen.io/alpha34727">@alpha34727</a>)
  on <a href="https://codepen.io">CodePen</a>.
</iframe>

---

#### `:last-child` 範例：

<iframe height="450" style="width: 100%;" scrolling="no" title=":last-child" src="https://codepen.io/alpha34727/embed/LYXELrE?default-tab=css%2Cresult&editable=true" frameborder="no" loading="lazy" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href="https://codepen.io/alpha34727/pen/LYXELrE">
  :last-child</a> by Alpha (<a href="https://codepen.io/alpha34727">@alpha34727</a>)
  on <a href="https://codepen.io">CodePen</a>.
</iframe>

---

#### `:nth-child(n)` 範例：

<iframe height="300" style="width: 100%;" scrolling="no" title=":nth-child(n)" src="https://codepen.io/alpha34727/embed/rNQawKP?default-tab=css%2Cresult&editable=true" frameborder="no" loading="lazy" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href="https://codepen.io/alpha34727/pen/rNQawKP">
  :nth-child(n)</a> by Alpha (<a href="https://codepen.io/alpha34727">@alpha34727</a>)
  on <a href="https://codepen.io">CodePen</a>.
</iframe>

<iframe height="300" style="width: 100%;" scrolling="no" title=":nth-child(n) odd even" src="https://codepen.io/alpha34727/embed/wvQBeNp?default-tab=css%2Cresult&editable=true" frameborder="no" loading="lazy" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href="https://codepen.io/alpha34727/pen/wvQBeNp">
  :nth-child(n) odd even</a> by Alpha (<a href="https://codepen.io/alpha34727">@alpha34727</a>)
  on <a href="https://codepen.io">CodePen</a>.
</iframe>

<iframe height="300" style="width: 100%;" scrolling="no" title=":nth-child(n) 3n+2" src="https://codepen.io/alpha34727/embed/XWyJgGL?default-tab=css%2Cresult&editable=true" frameborder="no" loading="lazy" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href="https://codepen.io/alpha34727/pen/XWyJgGL">
  :nth-child(n) 3n+2</a> by Alpha (<a href="https://codepen.io/alpha34727">@alpha34727</a>)
  on <a href="https://codepen.io">CodePen</a>.
</iframe>

---

### 偽元素 (Pseudo elements)

偽元素不是真正的 HTML 元素，而是由 CSS 所產生的虛擬元素。

![](https://hackmd.io/_uploads/S1-9kj1w3.png)

它允許在特定位置插入或修改 HTML 內容，而不需要修改實際的 HTML 結構。

#### 常用的偽元素：

* `::before`：在元素之前加入內容
* `::after`：在元素之後加入內容
* `::first-letter`：選中元素的第一個字元
* `::first-line`：選中元素的第一個行字
* `::selection`：被反白的文字

#### `::before`

`::before` 可在元素之前加入內容

:::info
需要有 `content` 才可作用 
:::

範例：

<iframe height="450" style="width: 100%;" scrolling="no" title="::before" src="https://codepen.io/alpha34727/embed/oNQgejz?default-tab=css%2Cresult&editable=true" frameborder="no" loading="lazy" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href="https://codepen.io/alpha34727/pen/oNQgejz">
  ::before</a> by Alpha (<a href="https://codepen.io/alpha34727">@alpha34727</a>)
  on <a href="https://codepen.io">CodePen</a>.
</iframe>

#### `::after`

和 `::before` 類似，`::after` 可在元素之後加入內容

:::info
需要有 `content` 才可作用 
:::

範例：

<iframe height="450" style="width: 100%;" scrolling="no" title="::after" src="https://codepen.io/alpha34727/embed/PoxwKPE?default-tab=css%2Cresult&editable=true" frameborder="no" loading="lazy" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href="https://codepen.io/alpha34727/pen/PoxwKPE">
  ::after</a> by Alpha (<a href="https://codepen.io/alpha34727">@alpha34727</a>)
  on <a href="https://codepen.io">CodePen</a>.
</iframe>

#### `::first-letter`

選中元素的第一個字元

範例：

<iframe height="450" style="width: 100%;" scrolling="no" title="Untitled" src="https://codepen.io/alpha34727/embed/bGQNrEj?default-tab=css%2Cresult&editable=true" frameborder="no" loading="lazy" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href="https://codepen.io/alpha34727/pen/bGQNrEj">
  Untitled</a> by Alpha (<a href="https://codepen.io/alpha34727">@alpha34727</a>)
  on <a href="https://codepen.io">CodePen</a>.
</iframe>

#### `::first-line`

選中元素的第一個行字

範例：

<iframe height="450" style="width: 100%;" scrolling="no" title="::first-line" src="https://codepen.io/alpha34727/embed/WNYbEwa?default-tab=css%2Cresult&editable=true" frameborder="no" loading="lazy" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href="https://codepen.io/alpha34727/pen/WNYbEwa">
  ::first-line</a> by Alpha (<a href="https://codepen.io/alpha34727">@alpha34727</a>)
  on <a href="https://codepen.io">CodePen</a>.
</iframe>

#### `::selection`

選取被反白的文字

範例：

<iframe height="450" style="width: 100%;" scrolling="no" title="::selection" src="https://codepen.io/alpha34727/embed/bGQNrgx?default-tab=css%2Cresult&editable=true" frameborder="no" loading="lazy" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href="https://codepen.io/alpha34727/pen/bGQNrgx">
  ::selection</a> by Alpha (<a href="https://codepen.io/alpha34727">@alpha34727</a>)
  on <a href="https://codepen.io">CodePen</a>.
</iframe>

## 延伸閱讀

* MDN Web Docs - CSS Selectors：https://developer.mozilla.org/zh-TW/docs/Web/CSS/CSS_Selectors

:::info
點此前往簡報 https://hackmd.io/@dzif24x25/r1rXJ3JPh
:::