---
title: HTML 基本元素
tags: [HTML, 基本元素]

---

{%hackmd @dzif24x25/IBXIWNXgTju0h2AKtSaLkA %}

###### tags: `HTML` `基本元素`

# HTML 基本元素

## 「元素」介紹

HTML的基本單位是「元素」

![](https://i.imgur.com/d6pE7Fq.png)

如上圖所示，一個元素要有**起始標籤**和**結尾標籤**，標籤需要使用角括號(`<>`)包圍，並在其中放入標籤名稱，結尾標籤需要加上斜線(`/`)

### 範例

```css
<p>Hello, World!</p>
```

```css
<p>
    Hello, World!
</p>
```

> 註：有些HTML元素並沒有結尾標籤，例如：
> * `<img>`
> * `<br>`
> * `<hr>`
>
> 範例：
> ```css
> <img src="圖片連結" alt="圖片載入不出來時的文字">
> ```

## HTML 結構解析

```htmlembedded=
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    
</body>
</html>
```

### `<!DOCTYPE html>`
是用來聲明此網頁是使用HTML5的規範 這個一定要有 而且通常會放在開頭

### `<html>`
這是這個文件的根元素 網頁的所以內容都在裡面 所以注意不要寫到外面

### `<head>`
用來定義網頁的元訊息 通常是些不會顯示在網頁本體的東西

### `<body>`
這是網頁的可見內容 寫什麼他就顯示什麼

## HTML 基本標籤

### `<p>`段落標籤

用來描述一段文字段落，預設會在段落間幫你做換行和留邊距

範例：
```css=
<p>Hello, World</p>

<p>
    這是段落標籤
</p>
```

<div style="background-color: #000000; color: #FFFFFF;border-radius: 1rem 1rem 0rem 0rem; padding: 0.7rem 1.75rem 0.7rem 1.75rem; font-size: 2rem">
    範例結果
</div>
<div style="border: 1px solid #000000; border-radius: 1rem; padding: 1.75rem; border-radius: 0rem 0rem 1rem 1rem">
    
![](https://i.imgur.com/Goh0KGy.png)
    
</div>


### `<i>`斜體字

範例：
```css=
<i>這是一段測試的句子</i>

<p>
    今天天氣晴，<i>我想要吃蛋餅</i>
</p>
```

<div style="background-color: #000000; color: #FFFFFF;border-radius: 1rem 1rem 0rem 0rem; padding: 0.7rem 1.75rem 0.7rem 1.75rem; font-size: 2rem">
    範例結果
</div>
<div style="border: 1px solid #000000; border-radius: 1rem; padding: 1.75rem; border-radius: 0rem 0rem 1rem 1rem">

![](https://i.imgur.com/0xQEQH1.png)
    
</div>

### `<b>`粗體字

範例：
```css!
<p>
    <b>價殼層電子對互斥理論</b>（英語：<b>V</b>alence <b>S</b>hell <b>E</b>lectron <b>P</b>air <b>R</b>epulsion，簡稱為<b>VSEPR</b>），是一個用來預測單個共價分子形態的化學模型。理論通過計算中心原子的價層電子數和配位數來<b>預測</b>分子的<b>幾何構型</b>，並構建一個合理的<b>路易斯結構式</b>來表示分子中所有<b>鍵</b>和<b>孤對電子</b>的位置。
</p>
```

<div style="background-color: #000000; color: #FFFFFF;border-radius: 1rem 1rem 0rem 0rem; padding: 0.7rem 1.75rem 0.7rem 1.75rem; font-size: 2rem">
    範例結果
</div>
<div style="border: 1px solid #000000; border-radius: 1rem; padding: 1.75rem; border-radius: 0rem 0rem 1rem 1rem">

![](https://i.imgur.com/09Xyj7X.png)

</div>

### `<u>`底線

範例：
```css=
<u>這一段文字有底線</u>

<p>
    哥哥正忙著寄送喜<u>貼</u>給親友，邀請大家來參加他的婚禮。
<p>
```

<div style="background-color: #000000; color: #FFFFFF;border-radius: 1rem 1rem 0rem 0rem; padding: 0.7rem 1.75rem 0.7rem 1.75rem; font-size: 2rem">
    範例結果
</div>
<div style="border: 1px solid #000000; border-radius: 1rem; padding: 1.75rem; border-radius: 0rem 0rem 1rem 1rem">

![](https://i.imgur.com/ZRdyk7j.png)

</div>

### `<h1>` ~ `<h6>`標題標籤

用於定義標題的大小和級別

範例：
```css=
<h1>h1測試</h1>
<h2>h2測試</h2>
<h3>h3測試</h3>
<h4>h4測試</h4>
<h5>h5測試</h5>
<h6>h6測試</h6>
```

<div style="background-color: #000000; color: #FFFFFF;border-radius: 1rem 1rem 0rem 0rem; padding: 0.7rem 1.75rem 0.7rem 1.75rem; font-size: 2rem">
    範例結果
</div>
<div style="border: 1px solid #000000; border-radius: 1rem; padding: 1.75rem; border-radius: 0rem 0rem 1rem 1rem">
    
![](https://i.imgur.com/8B2H3VS.png)

</div>

### `<br>`斷行

換行，此為空元素，不需要結尾標籤

範例：
```css=
邃宇兮 黑翳逐<br>
山野兮 窘步<br>
出！/ 幽宮兮 餘既伏<br>
君常違兮 國隳蕪 / 烏有兮 歸處<br>
蓄讎怨增欷 / 零落兮 困洿瀆<br>
惶惶兮 索陵遲惡途 / 奈何乎！
```

<div style="background-color: #000000; color: #FFFFFF;border-radius: 1rem 1rem 0rem 0rem; padding: 0.7rem 1.75rem 0.7rem 1.75rem; font-size: 2rem">
    範例結果
</div>
<div style="border: 1px solid #000000; border-radius: 1rem; padding: 1.75rem; border-radius: 0rem 0rem 1rem 1rem">
    
![](https://i.imgur.com/W6rImna.png)

</div>

### `<hr>`水平分隔線

此為空元素，不需要結尾標籤

範例：
```css=
<p>段落A</p>
<hr>
<p>段落B</p>
```

<div style="background-color: #000000; color: #FFFFFF;border-radius: 1rem 1rem 0rem 0rem; padding: 0.7rem 1.75rem 0.7rem 1.75rem; font-size: 2rem">
    範例結果
</div>
<div style="border: 1px solid #000000; border-radius: 1rem; padding: 1.75rem; border-radius: 0rem 0rem 1rem 1rem">
    
![](https://i.imgur.com/OtVqEZc.png)

</div>

## 註解

在HTML中，可以將註解包在`<!--` 和 `-->`之間

### 範例：

```htmlembedded=
<!-- <p>這是一些示範用的句子1</p>
<p>這是一些示範用的句子2</p> -->
<p>這是一些示範用的句子3</p>
```

<div style="background-color: #000000; color: #FFFFFF;border-radius: 1rem 1rem 0rem 0rem; padding: 0.7rem 1.75rem 0.7rem 1.75rem; font-size: 2rem">
    範例結果
</div>
<div style="border: 1px solid #000000; border-radius: 1rem; padding: 1.75rem; border-radius: 0rem 0rem 1rem 1rem">
    
![](https://i.imgur.com/MhnBWjK.png)

</div>

### VS Code中的快捷鍵：

在VS Code中，想對一行文字做註解或取消註解可以使用快捷鍵`Ctrl + /`

![](https://i.imgur.com/odn2NEz.gif)

:::info
重點整理：
段落標籤`<p>`
斜體字`<i>`
底線`<u>`
標題標籤`<h1>` ~ `<h6>`
斷行`<br>`
水平分隔線`<hr>`
:::


:::info
點此前往簡報 https://hackmd.io/@dzif24x25/S1hSfLQbh
:::