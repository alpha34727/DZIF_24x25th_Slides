---
title: CSS &amp; 圖片
tags: [CSS, 圖片]

---

{%hackmd @dzif24x25/IBXIWNXgTju0h2AKtSaLkA %}
###### tags: `CSS` `圖片`

# CSS &amp; 圖片

## `background-image` 背景圖片

在 CSS 中，我們可以使用 `background-image` 屬性為元素添加背景圖片。

以下是一個使用 `background-image` 屬性的範例：

<iframe height="450" style="width: 100%;" scrolling="no" title="background-image" src="https://codepen.io/alpha34727/embed/XWxVWMo?default-tab=css%2Cresult&editable=true" frameborder="no" loading="lazy" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href="https://codepen.io/alpha34727/pen/XWxVWMo">
  background-image</a> by Alpha (<a href="https://codepen.io/alpha34727">@alpha34727</a>)
  on <a href="https://codepen.io">CodePen</a>.
</iframe>

在上面的範例中，我們使用 `url` 函數指定圖片的位置和檔名，並將其設置為 `div` 元素的背景圖片。請注意，在 CSS 中，我們使用相對或絕對路徑指定圖片的位置。

## `background-size` 圖片顯示方式

使用 `background-size` 屬性可以指定圖片的尺寸和顯示方式。以下是一些常用的值：

* `auto`：預設值，不改變原圖尺寸。
* `contain`：將圖片按比例縮放，使其填滿容器。如果設定了 `background-repeat: no-repeat;` 屬性，則圖片不會重複，而是填滿容器。
* `cover`：將圖片按比例縮放，使其完全覆蓋容器。
* `50%`：設定圖片的寬度為容器的 50%，如果沒有給定 `height` 的值，則預設為 `auto`，不做更動。
* 長度：直接給定圖片的 `width` 和 `height`。如果只給定一個值，則 `width` 和 `height` 相同。

範例：
<iframe height="450" style="width: 100%;" scrolling="no" title="background-size" src="https://codepen.io/alpha34727/embed/jOeYOGz?default-tab=css%2Cresult&editable=true" frameborder="no" loading="lazy" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href="https://codepen.io/alpha34727/pen/jOeYOGz">
  background-size</a> by Alpha (<a href="https://codepen.io/alpha34727">@alpha34727</a>)
  on <a href="https://codepen.io">CodePen</a>.
</iframe>

## `background-attachment` 滾動時圖片的動作

使用 `background-attachment` 屬性可以指定滾動網頁時，背景圖片的行為方式。以下是一些常用的值：

* `scroll`：圖片跟隨網頁一起滾動，但在圖片容器內滾動滾輪時不會動。
* `fixed`：圖片不會跟隨網頁滾動。
* `local`：圖片在網頁和圖片容器內都會跟隨滾動條滾動。

以下是一個範例，展示了如何使用 `background-attachment` 屬性指定圖片的動作方式：

<iframe height="450" style="width: 100%;" scrolling="no" title="background-attachment" src="https://codepen.io/alpha34727/embed/RwexwMG?default-tab=css%2Cresult&editable=true" frameborder="no" loading="lazy" allowtransparency="true" allowfullscreen="true">
  See the Pen <a href="https://codepen.io/alpha34727/pen/RwexwMG">
  background-attachment</a> by Alpha (<a href="https://codepen.io/alpha34727">@alpha34727</a>)
  on <a href="https://codepen.io">CodePen</a>.
</iframe>

## `alt` 替代文字

圖片無法顯示時，將以alt內文字代替。

:::info
點此前往簡報 https://hackmd.io/@dzif24x25/SytOG_WVh
:::