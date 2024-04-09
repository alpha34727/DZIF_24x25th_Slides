---
title: HTML `<img>` 圖片
tags: [HTML, <img>, 絕對路徑, 相對路徑]

---

{%hackmd @dzif24x25/IBXIWNXgTju0h2AKtSaLkA %}

###### tags: `HTML` `<img>` `絕對路徑` `相對路徑`

# HTML `<img>` 圖片

## `<img>` 介紹

'img' 是 'image' 的 縮寫，有「鏡像；影像；映射」的意思

![](https://i.imgur.com/00zAwuh.png)

顧名思義，`<img>`可以把你想要的照片放到網頁上

## `<img>` 用法

```htmlembedded!
<img src="圖片來源" width="圖片的寬" height="圖片的高" alt="代替文字">
```

> ### `src` 照片來源
> 可以是圖片的網址，也可以用圖片的路徑
> (這是最重要的屬性，沒有這個屬性就沒有照片)
> ### `width` 圖片的寬
> 以像素為單位，必須是無單位的整數
> ### `height` 圖片的高
> 以像素為單位，必須是無單位的整數
> ### `alt` 代替文字
> 當圖片無法正常顯示時，使用代替文字代替照片

### 範例：

```htmlembedded=
<img src="https://i.imgur.com/syAXAme.png" width=100 height=100 alt="大直高中資訊社">
```

<div style="background-color: #000000; color: #FFFFFF;border-radius: 1rem 1rem 0rem 0rem; padding: 0.7rem 1.75rem 0.7rem 1.75rem; font-size: 2rem">
    範例結果
</div>
<div style="border: 1px solid #000000; border-radius: 1rem; padding: 1.75rem; border-radius: 0rem 0rem 1rem 1rem">
    
<img src="https://i.imgur.com/syAXAme.png" width=100 height=100 alt="大直高中資訊社">
    
</div>

## 補充：絕對路徑 & 相對路徑

### 絕對路徑

以根目錄為基準的目錄路徑，之所以叫做「絕對」，是因為任何程式要使用這個檔案時，使用的路徑都是一樣的

範例：

```
file:///C:/Users/Anthony/Desktop/abc.png
```

```
https://i.imgur.com/syAXAme.png
```

### 相對路徑

以自身所在位置為參考基礎，而建立的目錄路徑，之所以叫做「相對」，是因為不同程式要使用這個檔案時，使用的路徑都不相同

有三種相對路徑的特殊符號：
> `.` 代表目前所在的目錄
> `..` 代表上一層目錄
> `/` 連結各路徑的目錄名稱，若置於最前方，則代表根目錄

範例：

目錄路徑為下：
```
/ --- dzif --- textbook --- 0324.html
           |            |
           |            |
           |            --- 0407.html
           |
           |
           --- images --- 0324-0.png
                      |
                      |
                      --- 0324-1.jpg
                      |
                      |
                      --- 0407-0.webp
```

假設要在`0324.html`中引用`0324-1.jpg`，則路徑可以這樣寫：

```
../images/0324-1.jpg
```

:::info
點此前往簡報 https://hackmd.io/@dzif24x25/S1ExlK2Wn
:::