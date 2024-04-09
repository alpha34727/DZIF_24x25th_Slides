---
title: CSS &amp; 圖片
tags: [CSS簡報, ' 圖片']

---

---
type: slide
tags: CSS簡報, 圖片
---

{%hackmd @dzif24x25/yRBnguqQQl-2ylH1j5h0cg %}

# CSS &amp; 圖片

---

## `background-image`

為元素添加背景圖片

---

### 範例

HTML：
```htmlembedded=
<div class="test-img"></div>
```

CSS：
```css=
.test-img {
    height: 400px;
    width: 300px;
    background-image: url('https://i.imgur.com/D50ZhtQm.jpeg');
}
```

---

<div style="width: 100%; display: flex; justify-content: center;">
    <div style="height: 400px;width: 300px;background-image: url('https://i.imgur.com/D50ZhtQm.jpeg');"></div>
</div>

---

## `background-size`

指定圖片的尺寸和顯示方式

---

### `auto`
預設值，不改變原圖尺寸。

---

### `contain`
將圖片按比例縮放，使其填滿容器。

---

### `cover`
將圖片按比例縮放，使其完全覆蓋容器。

---

### `50%`
設定圖片的寬度為容器的 50%，如果沒有給定 `height` 的值，則預設為 `auto`，不做更動。

---

### 長度
直接給定圖片的 `width` 和 `height`。
如果只給定一個值，則 `width` 和 `height` 相同。

---

### 範例

HTML：
```htmlembedded=
<h3>contain</h3>
<div class="test-img-contain"></div>
<h3>cover</h3>
<div class="test-img-cover"></div>
<h3>50%</h3>
<div class="test-img-50percent"></div>
```

---

CSS：
```css=
.test-img-contain {
    height: 350px;
    width: 200px;
    background-image: url('https://i.imgur.com/D50ZhtQ.jpeg');
    background-size: contain;
}

.test-img-cover {
    height: 350px;
    width: 200px;
    background-image: url('https://i.imgur.com/D50ZhtQ.jpeg');
    background-size: cover;
}

.test-img-50percent {
    height: 350px;
    width: 200px;
    background-image: url('https://i.imgur.com/D50ZhtQ.jpeg');
    background-size: 50%;
}
```

---

<div style="width: 100%; display: flex; justify-content: center;">
    <div style="padding-left: 10px; padding-right: 10px;">
        <h4>contain</h4>
        <div style="height: 350px;width: 200px;background-image: url('https://i.imgur.com/D50ZhtQ.jpeg');background-size: contain;"></div>
    </div>
    <div style="padding-left: 10px; padding-right: 10px;">
        <h4>cover</h4>
        <div style="height: 350px;width: 200px;background-image: url('https://i.imgur.com/D50ZhtQ.jpeg');background-size: cover;"></div>
    </div>
    <div style="padding-left: 10px; padding-right: 10px;">
        <h4>50%</h4>
        <div style="height: 350px;width: 200px;background-image: url('https://i.imgur.com/D50ZhtQ.jpeg');background-size: 50%;"></div>
    </div>
</div>

---

## `background-attachment`

指定滾動網頁時，背景圖片的行為方式

---

* `scroll`：圖片跟隨網頁一起滾動，但在圖片容器內滾動滾輪時不會動。
* `fixed`：圖片不會跟隨網頁滾動。
* `local`：圖片在網頁和圖片容器內都會跟隨滾動條滾動。

---

### 範例：

HTML：
```htmlembedded=
<h3>background-attachment: scroll;</h3>
<div class="test-img-scroll">
    scroll：圖片跟隨網頁一起滾動，但在圖片容器內滾動滾輪時不會動。scroll：圖片跟隨網頁一起滾動，但在圖片容器內滾動滾輪時不會動。scroll：圖片跟隨網頁一起滾動，但在圖片容器內滾動滾輪時不會動。scroll：圖片跟隨網頁一起滾動，但在圖片容器內滾動滾輪時不會動。scroll：圖片跟隨網頁一起滾動，但在圖片容器內滾動滾輪時不會動。scroll：圖片跟隨網頁一起滾動，但在圖片容器內滾動滾輪時不會動。scroll：圖片跟隨網頁一起滾動，但在圖片容器內滾動滾輪時不會動。
</div>
<hr>
<h3>background-attachment: fixed;</h3>
<div class="test-img-fixed">
    fixed：圖片不會跟隨網頁滾動。fixed：圖片不會跟隨網頁滾動。fixed：圖片不會跟隨網頁滾動。fixed：圖片不會跟隨網頁滾動。fixed：圖片不會跟隨網頁滾動。fixed：圖片不會跟隨網頁滾動。fixed：圖片不會跟隨網頁滾動。fixed：圖片不會跟隨網頁滾動。fixed：圖片不會跟隨網頁滾動。fixed：圖片不會跟隨網頁滾動。fixed：圖片不會跟隨網頁滾動。fixed：圖片不會跟隨網頁滾動。fixed：圖片不會跟隨網頁滾動。fixed：圖片不會跟隨網頁滾動。fixed：圖片不會跟隨網頁滾動。fixed：圖片不會跟隨網頁滾動。fixed：圖片不會跟隨網頁滾動。
</div>
<hr>
<h3>background-attachment: local;</h3>
<div class="test-img-local">
    local：圖片在網頁和圖片容器內都會跟隨滾動條滾動。local：圖片在網頁和圖片容器內都會跟隨滾動條滾動。local：圖片在網頁和圖片容器內都會跟隨滾動條滾動。local：圖片在網頁和圖片容器內都會跟隨滾動條滾動。local：圖片在網頁和圖片容器內都會跟隨滾動條滾動。local：圖片在網頁和圖片容器內都會跟隨滾動條滾動。local：圖片在網頁和圖片容器內都會跟隨滾動條滾動。local：圖片在網頁和圖片容器內都會跟隨滾動條滾動。local：圖片在網頁和圖片容器內都會跟隨滾動條滾動。local：圖片在網頁和圖片容器內都會跟隨滾動條滾動。local：圖片在網頁和圖片容器內都會跟隨滾動條滾動。local：圖片在網頁和圖片容器內都會跟隨滾動條滾動。
</div>
```

---

CSS：
```css=
.test-img-scroll {
    height: 300px;
    width: 225px;
    overflow: auto;
    background-image: url('https://i.imgur.com/D50ZhtQ.jpeg');
    background-size: contain;
    background-attachment: scroll;
}

.test-img-fixed {
    height: 300px;
    width: 225px;
    overflow: auto;
    background-image: url('https://i.imgur.com/D50ZhtQ.jpeg');
    background-size: contain;
    background-attachment: fixed;
}

.test-img-local {
    height: 300px;
    width: 225px;
    overflow: auto;
    background-image: url('https://i.imgur.com/D50ZhtQ.jpeg');
    background-size: contain;
    background-attachment: local;
}

div {
    color: white;
}
```

---

<iframe height="600" style="width: 100%;" scrolling="no" title="background-attachment" src="https://codepen.io/alpha34727/embed/RwexwMG?default-tab=result" frameborder="no" loading="lazy" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href="https://codepen.io/alpha34727/pen/RwexwMG">
  background-attachment</a> by Alpha (<a href="https://codepen.io/alpha34727">@alpha34727</a>)
  on <a href="https://codepen.io">CodePen</a>.
</iframe>

---

## `alt`

圖片無法顯示時，以alt內文字代替
