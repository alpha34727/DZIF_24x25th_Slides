---
title: HTML `<head>`
tags: [HTML簡報, ' <head>']

---

---
type: slide
tags: HTML簡報, <head>
---

{%hackmd @dzif24x25/yRBnguqQQl-2ylH1j5h0cg %}

# HTML `<head>`

---

# `<head>`

---

### HTML 網頁中一定有一個`<head>`標籤
接在`<html>`後面，`<body>`前面

---

```htmlembedded=
<!DOCTYPE html>
<html>
    <head>
        <meta charset="UTF-8">
        <meta http-equiv="X-UA-Compatible" content="IE=edge">
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
        <title>Document</title>
    </head>
    <body>
        .
        略
        .
    </body>
</html>
```

---

### `<head>`內可裝有不同HTML標籤
### 不會顯示在畫面
### 設定網頁

---

### 可放在`<head>`中的標籤：

* `<title>` 網頁名稱
* `<meta>` 網頁元資訊 (metadata)
* `<style>` CSS樣式
* `<link>` 載入或定義外部資源
* `<script>` JavaScript程式碼
* `<noscript>` 不支援JavaScript時的處理
* `<base>` base URL設定

---

# `<title>` 網頁名稱

---

### 將想設定的網頁名稱放置於`<title>`和`</title>`之間，即可設定網頁名稱

---

### 範例：
```htmlembedded=
<!DOCTYPE html>
<html>
    <head>
        <title>你好，世界</title>
    </head>
    <body>
    </body>
</html>
```

---

### 範例結果
    
![](https://i.imgur.com/RL2oD0Y.png)

---

# `<meta>` 網頁元資訊 (metadata)

`<meta>`設定網頁元資訊(metadata)

---

### 設定網頁的編碼為UTF-8：
```htmlembedded
<meta charset="UTF-8">
```

---


### 設定網頁簡介
有助於搜尋引擎演算法推送網頁
```htmlembedded
<meta name="description" content="網頁簡介">
```

---

### 設定網頁作者
```htmlembedded
<meta name="author" content="作者">
```

---

### 設定網頁關鍵字
```htmlembedded
<meta name="keyword" content="網頁關鍵字">
```

---

### 設定視口
不同裝置上會有不同大小設定
```htmlembedded
<meta name="viewport" content="width=device-width, initial-scale=1.0">
```

---

# `<style>` CSS樣式

使用CSS進行樣式設定

---

### 範例：
```htmlembedded=
<!DOCTYPE html>
<html>
    <head>
        <style>
            .big-text {
                font-size: 50px;
                color: red;
            }
            .small-text {
                font-size: 10px;
                color: blue;
            }
        </style>
        <title>你好，世界</title>
    </head>
    <body>
        <p class="big-text">大字</p>
        <p class="small-text">小字</p>
    </body>
</html>
```

---

### 範例結果

<p style="font-size: 50px; color: red;">大字</p>
<p style="font-size: 10px; color: blue;">小字</p>

---

## `<link>` 載入或定義外部資源

載入或定義網頁中會用到的資源，例如CSS樣式表、網頁favicon......等

---

### 範例：載入外部CSS樣式表

---

index.html：
```htmlembedded=
<!DOCTYPE html>
<html>
    <head>
        <link rel="stylesheet" href="style.css">
    </head>
    <body>
        <p class="big-text">大字</p>
        <p class="small-text">小字</p>
    </body>
</html>
```

---

style.css：
```css=
.big-text {
    font-size: 50px;
    color: red;
}
.small-text {
    font-size: 10px;
    color: blue;
}

---

### 範例結果

<p style="font-size: 50px; color: red;">大字</p>
<p style="font-size: 10px; color: blue;">小字</p>

---

### 範例：網頁favicon
```htmlembedded=
<!DOCTYPE html>
<html>
    <head>
        <link rel="icon" href="https://i.imgur.com/syAXAme.png">
        <title>你好，世界</title>
    </head>
    <body>
    </body>
</html>

---

### 範例結果

![](https://i.imgur.com/JDnbuPP.png)

---

## `<script>` JavaScript程式碼

---

### 範例：在`<script>`和`</script>`寫JavaScript程式碼

```htmlembedded=
<!DOCTYPE html>
<html>
    <head>
        <script>
            function hello() {
                alert('Hello, World!');
            }
        </script>
    </head>
    <body>
        <button type="button" onclick="hello()">按鈕</button>
    </body>
</html>
```

---

### 範例結果

![](https://i.imgur.com/foLh9m2.gif)

---

### 範例：連結外部JavaScript

---

a.html
```htmlembedded=
<!DOCTYPE html>
<html>
    <head>
        <script src="script.js"></script>
    </head>
    <body>
        <button type="button" onclick="hello()">按鈕</button>
    </body>
</html>
```

---

script.js
```javascript=
function hello() {
    alert('Hello, World!');
}
```

---

### 範例結果
    
![](https://i.imgur.com/foLh9m2.gif)

---

## `<noscript>` 不支援JavaScript時的處理

---

### 範例：
```htmlembedded=
<noscript>
  <p>此網頁需要支援 JavaScript 才能正確運行，請先至你的瀏覽器設定中開啟 JavaScript。</p>
</noscript>
```

---

## `<base>` base URL設定
設定預設的根網址

---

### 範例：
```htmlembedded=
<!DOCTYPE html>
<html>
    <head>
        <base href="https://www.example.com/">
    </head>
    <body>
        <a href="img1.jpg"></a>
        <a href="img2.jpg"></a>
    </body>
</html>
```