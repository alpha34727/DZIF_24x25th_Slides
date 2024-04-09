---
title: HTML 屬性
tags: [HTML, 屬性]

---

{%hackmd @dzif24x25/IBXIWNXgTju0h2AKtSaLkA %}

###### tags: `HTML` `屬性`

# HTML 屬性

## 屬性的作用

屬性的作用是**提供**元素的**附加訊息**，例如**元素的<font style="font-size: 1.5em;">大</font><font style="font-size: 0.75em">小</font>**，**元素的~~樣~~*式***

![](https://i.imgur.com/JDxoOFS.png)

:::warning
注意：有些屬性是特定標籤才能用的
> 例如：`href`屬性可以用在`link`, `img`, `area`, `base`等標籤，其他標籤就不行
> 
最好的記法就是記標籤再記它會有的屬性
:::

## 基本屬性

### `src`

指定要嵌入到網頁中的外部資源，可以用相對路徑或是絕對路徑

範例：

```css=
<img src="https://i.imgur.com/syAXAme.png">
```

<div style="background-color: #000000; color: #FFFFFF;border-radius: 1rem 1rem 0rem 0rem; padding: 0.7rem 1.75rem 0.7rem 1.75rem; font-size: 2rem">
    範例結果
</div>
<div style="border: 1px solid #000000; border-radius: 1rem; padding: 1.75rem; border-radius: 0rem 0rem 1rem 1rem">
    
<img src="https://i.imgur.com/syAXAme.png">
    
</div>

### `href`

指定超連結指向的目標URL

範例：

```css=
<a href="https://youtu.be/dQw4w9WgXcQ">
    不要點我
</a>
```

<div style="background-color: #000000; color: #FFFFFF;border-radius: 1rem 1rem 0rem 0rem; padding: 0.7rem 1.75rem 0.7rem 1.75rem; font-size: 2rem">
    範例結果
</div>
<div style="border: 1px solid #000000; border-radius: 1rem; padding: 1.75rem; border-radius: 0rem 0rem 1rem 1rem">
    
<a href="https://youtu.be/dQw4w9WgXcQ">
    不要點我
</a>
    
</div>

### `title`

當游標移到元素上時，會顯示出訊息

範例：

```css=
<p title="Hi~">隱藏訊息！</p>
```

<div style="background-color: #000000; color: #FFFFFF;border-radius: 1rem 1rem 0rem 0rem; padding: 0.7rem 1.75rem 0.7rem 1.75rem; font-size: 2rem">
    範例結果
</div>
<div style="border: 1px solid #000000; border-radius: 1rem; padding: 1.75rem; border-radius: 0rem 0rem 1rem 1rem">
    
![](https://i.imgur.com/ZCeoji9.gif)
    
</div>

### `style`

這可以直接在屬性內寫`CSS`

範例：

```css=
<p style="font-size: 50px; font-weight: 900;">50px</p>
<p style="font-size: 10px;">10px</p>
```

<div style="background-color: #000000; color: #FFFFFF;border-radius: 1rem 1rem 0rem 0rem; padding: 0.7rem 1.75rem 0.7rem 1.75rem; font-size: 2rem">
    範例結果
</div>
<div style="border: 1px solid #000000; border-radius: 1rem; padding: 1.75rem; border-radius: 0rem 0rem 1rem 1rem">
    
<p style="font-size: 50px; font-weight: 900;">50px</p>
<p style="font-size: 10px;">10px</p>
    
</div>

### `id` 和 `class`

`id`和`class`可用來標示元素，並可通過 `CSS` 和 `JavaScript` 來操作改變元素樣式

> #### `id` 和 `class` 的區別
>  `id` 獨一無二，它所標示的元素只能有一個 
>  `class` 可以標示一個或以上的元素，沒有限制

詳細有關 `id` 和 `class` 的用法將會在之後的章節提到

:::info
點此前往簡報 https://hackmd.io/@dzif24x25/S17W5O3Zh
:::