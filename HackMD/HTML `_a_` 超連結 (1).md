---
title: HTML `<a>` 超連結
tags: [HTML簡報, ' <a>', ' 超連結']

---

---
type: slide
tags: HTML簡報, <a>, 超連結
---

{%hackmd @dzif24x25/yRBnguqQQl-2ylH1j5h0cg %}

# HTML `<a>` 超連結

---

### `<a>`可用於超連結，有以下的屬性：
* `href` - 目標URL
* `target` - 打開連結的地方

---

# `href`
指定超連結指向的目標URL

---

### 範例：

```htmlembedded=
<a href="https://youtu.be/dQw4w9WgXcQ">
    不要點我
</a>
```

---

### 範例結果：
 
<a href="https://youtu.be/dQw4w9WgXcQ">
    不要點我
</a>

---

# `target`
打開連結的地方

---

### 有以下屬性值：
* `_self`：預設值，在當前視窗開啟
* `_blank`：在新視窗開啟
* `_parent`：在上一層父視窗開啟
* `_top`：在最頂層父視窗開啟

---

### 範例：

```htmlembedded=
<p>
    <a href="https://bit.ly/3H0xM3y" target="_self">
        _self: 在當前視窗開啟
    </a>
</p>
  
<p>
    <a href="https://bit.ly/3H0xM3y" target="_blank">
        _blank: 在新視窗開啟
    </a>
</p>
    
<p>
    <a href="https://bit.ly/3H0xM3y" target="_parent">
        _parent: 在上一層父視窗開啟
    </a>
</p>
    
<p>
    <a href="https://bit.ly/3H0xM3y" target="_top">
        _top: 在最頂層父視窗開啟
    </a>
</p>
```

---

### 範例結果：
    
<p>
    <a href="https://bit.ly/3H0xM3y" target="_self">
        _self: 在當前視窗開啟
    </a>
</p>
  
<p>
    <a href="https://bit.ly/3H0xM3y" target="_blank">
        _blank: 在新視窗開啟
    </a>
</p>
    
<p>
    <a href="https://bit.ly/3H0xM3y" target="_parent">
        _parent: 在上一層父視窗開啟
    </a>
</p>
    
<p>
    <a href="https://bit.ly/3H0xM3y" target="_top">
        _top: 在最頂層父視窗開啟
    </a>
</p>