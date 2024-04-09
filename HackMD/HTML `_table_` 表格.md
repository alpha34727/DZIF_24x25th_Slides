---
title: HTML `<table>` 表格
tags: [HTML, <table>, 表格]

---

{%hackmd @dzif24x25/IBXIWNXgTju0h2AKtSaLkA %}

###### tags: `HTML` `<table>` `表格`

# HTML `<table>` 表格

## `<table>` 表格

作為表格的容器，利用`<tr>`、`<td>`等標籤，來組成一個完整的表格。

### `<th>` 標題
### `<tr>` 決定表格內有幾橫排 (包在`<td>`, `<th>`外)
### `<td>` 決定直排 (每個tr內所有的行數相同，表格才會對齊)

### 範例：
假如要繪製下表：
<table>
    <tr>
        <th></th>
        <th>GeForce RTX 4090</th>
        <th>GeForce RTX 4080</th>
        <th>GeForce RTX 4070 Ti</th>
        <th>GeForce RTX 4070</th>
    </tr>
    <tr>
        <th>NVIDIA CUDA 核心</th>
        <td>16384</td>
        <td>9728</td>
        <td>7680</td>
        <td>5888</td>
    </tr>
    <tr>
        <th>加速時脈 (GHz)</th>
        <td>2.52</td>
        <td>2.51</td>
        <td>2.61</td>
        <td>2.48</td>
    </tr>
    <tr>
        <th>記憶體大小</th>
        <td>24 GB</td>
        <td>16 GB</td>
        <td>12 GB</td>
        <td>12 GB</td>
    </tr>
    <tr>
        <th>記憶體類型</th>
        <td>GDDR6X</td>
        <td>GDDR6X</td>
        <td>GDDR6X</td>
        <td>GDDR6X</td>
    </tr>
</table>

可以這樣寫：

```htmlembedded=
<!DOCTYPE html>
<html lang="zh-Hant">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>顯示卡規格比較</title>
</head>
<body>
    <table>
        <tr>
            <th></th>
            <th>GeForce RTX 4090</th>
            <th>GeForce RTX 4080</th>
            <th>GeForce RTX 4070 Ti</th>
            <th>GeForce RTX 4070</th>
        </tr>
        <tr>
            <th>NVIDIA CUDA 核心</th>
            <td>16384</td>
            <td>9728</td>
            <td>7680</td>
            <td>5888</td>
        </tr>
        <tr>
            <th>加速時脈 (GHz)</th>
            <td>2.52</td>
            <td>2.51</td>
            <td>2.61</td>
            <td>2.48</td>
        </tr>
        <tr>
            <th>記憶體大小</th>
            <td>24 GB</td>
            <td>16 GB</td>
            <td>12 GB</td>
            <td>12 GB</td>
        </tr>
        <tr>
            <th>記憶體類型</th>
            <td>GDDR6X</td>
            <td>GDDR6X</td>
            <td>GDDR6X</td>
            <td>GDDR6X</td>
        </tr>
    </table>
</body>
</html>
```

:::info
點此前往簡報 https://hackmd.io/@dzif24x25/B1pYzzyQ2
:::