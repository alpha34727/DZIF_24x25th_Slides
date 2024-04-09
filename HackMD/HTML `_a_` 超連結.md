---
title: HTML `<a>` 超連結
tags: [HTML, <a>, 超連結]

---

{%hackmd @dzif24x25/IBXIWNXgTju0h2AKtSaLkA %}

###### tags: `HTML` `<a>` `超連結`

# HTML `<a>` 超連結

`<a>`可用於超連結，有以下的屬性：
* `href` - 目標URL
* `target` - 打開連結的地方

## `href` - 目標URL

指定超連結指向的目標URL

### 範例：

```htmlembedded=
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

## `target` - 打開連結的地方

打開連結的地方

有以下屬性值：
* `_self`：預設值，在當前視窗開啟
* `_blank`：在新視窗開啟
* `_parent`：在上一層父視窗開啟
* `_top`：在最頂層父視窗開啟

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

<div style="background-color: #000000; color: #FFFFFF;border-radius: 1rem 1rem 0rem 0rem; padding: 0.7rem 1.75rem 0.7rem 1.75rem; font-size: 2rem">
    範例結果
</div>
<div style="border: 1px solid #000000; border-radius: 1rem; padding: 1.75rem; border-radius: 0rem 0rem 1rem 1rem">
    
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
    
</div>

:::info
點此前往簡報 https://hackmd.io/@dzif24x25/r1tiQGkX2
:::