---
title: HTML `<form>` 表單
tags: [HTML, <form>, <input>, <textarea>, <select>, <option>]

---

{%hackmd @dzif24x25/IBXIWNXgTju0h2AKtSaLkA %}

###### tags: `HTML` `<form>` `<input>` `<textarea>` `<select>` `<option>`

# HTML `<form>` 表單

表單是用來和使用者互動，讓使用者輸入一些東西，填寫完後可以回傳至Server

## `<form>`

`<form>` 可以用來建立一個HTML表單，作為表單的容器，其內部可以放置其他元素，完整表單。

`<form>`有以下屬性：

* `action` - 傳送表單內容的URL
* `method` - 傳送表單內容的方法

### `action`

用來指定傳送表單內容的URL

### `method`

資料傳輸時的方法：
* `get`: 用在資料量小、安全性需求低
* `post`: 用在資料量大、安全性需求高

### 範例：

```htmlembedded=
<form action="example/form" method="post">
    
    ---表單內容---
    
</form>
```

## 常用 HTML 表單元素

### `<input>` 輸入欄位

語法：
```
<input 屬性>
```

屬性：
> `type`: 更改欄位類型(預設為`text`)
> * `type="text"` 文字輸入欄位
> * `type="password"` 密碼輸入欄位，輸入的資訊不會以明文呈現
> * `type="checkbox"` 核取方塊
> * `type="radio"` 選項按鈕
> * `type="submit"` 送出表單的按鈕

> `value`: 初始值 

> `name`: 指定資料名稱 

> `disable`: 禁用此欄位 

> `readonly`: 此欄位不可更改 

> `placeholder`: 輸入提示訊息 

範例：

```htmlembedded=
<form>
    <p>
        帳號
        <input name="account">
    </p>
    <p>
        密碼
        <input type="password" name="passwd">
    </p>
    <p>
        興趣
        <input type="checkbox" name="interest" value="coding"> 寫程式
        <input type="checkbox" name="interest" value="eating"> 吃飯
        <input type="checkbox" name="interest" value="sleeping"> 睡覺
    </p>
    <p>
        下學期欲學習的程式語言
        <input type="radio" name="learn" value="python"> Python
        <input type="radio" name="learn" value="java"> Java
        <input type="radio" name="learn" value="go"> Go
    </p>
    <input type="submit" value="按鈕上的文字">
</form>
```

<div style="background-color: #000000; color: #FFFFFF;border-radius: 1rem 1rem 0rem 0rem; padding: 0.7rem 1.75rem 0.7rem 1.75rem; font-size: 2rem">
    範例結果
</div>
<div style="border: 1px solid #000000; border-radius: 1rem; padding: 1.75rem; border-radius: 0rem 0rem 1rem 1rem">
    
![](https://i.imgur.com/OnkmWEJ.gif)

</div>

### `<textarea>` 多行文字輸入欄位

語法：
```
<textarea rows="高度(列數)" column="寬度(行數)">
    預設文字內容
</textarea>
```

範例：
```htmlembedded=
<form>
    <p>
        心得
        <textarea rows="10" column="20"></textarea>
    </p>
    <input type="submit" value="按鈕上的文字">
</form>
```

<div style="background-color: #000000; color: #FFFFFF;border-radius: 1rem 1rem 0rem 0rem; padding: 0.7rem 1.75rem 0.7rem 1.75rem; font-size: 2rem">
    範例結果
</div>
<div style="border: 1px solid #000000; border-radius: 1rem; padding: 1.75rem; border-radius: 0rem 0rem 1rem 1rem">
    
![](https://i.imgur.com/zAASmT7.gif)

</div>

### `<select>`、`<option>`下拉式選單

`<select>`可宣告一個下拉式選單，`<option>`可宣告一個選項

語法：
```htmlembedded=
<select>
    <option>1</option>
    <option>2</option>
    <option>3</option>
</select>
```

<div style="background-color: #000000; color: #FFFFFF;border-radius: 1rem 1rem 0rem 0rem; padding: 0.7rem 1.75rem 0.7rem 1.75rem; font-size: 2rem">
    範例結果
</div>
<div style="border: 1px solid #000000; border-radius: 1rem; padding: 1.75rem; border-radius: 0rem 0rem 1rem 1rem">
    
![](https://i.imgur.com/iAGKkTH.gif)

</div>

:::info
點此前往簡報 https://hackmd.io/@dzif24x25/rJmSBMyXh
:::